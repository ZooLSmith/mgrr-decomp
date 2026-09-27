// src/misc/cPl0000SaiWeapon.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AAF310..00BEC5A0, 74 functions

#include "mgrr.h"
#include "cPl0000SaiWeapon.h"

// 00AAF310  cPl0000SaiWeapon::vf04  size=6  [class]
undefined * cPl0000SaiWeapon::vf04(void)

{
  return &DAT_01be9dd0;
}

// 00AB7D80  cPl0000SaiWeapon::vf00  size=54  [class]
undefined4 __thiscall cPl0000SaiWeapon::vf00(undefined4 param_1,byte param_2)

{
  FUN_00905ce0();
  cEspControler::~cEspControler();
  Behavior::Behavior_121();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00B80580  cPl0000SaiWeapon::vf44  size=35  [class]
void __fastcall cPl0000SaiWeapon::vf44(int param_1)

{
  RayCastManager::getWork(param_1 + 0xdd4);
  FUN_00a8c820();
  BehaviorWeapon::vf44();
  return;
}

// 00B80700  FUN_00b80700  size=27  [callgraph]
undefined4 __fastcall FUN_00b80700(int param_1)

{
  if ((*(int *)(param_1 + 0x984) == 0) && (*(int *)(param_1 + 0x980) == 0)) {
    return 0;
  }
  return 1;
}

// 00B80720  FUN_00b80720  size=51  [callgraph]
void __fastcall FUN_00b80720(int param_1)

{
  if (*(int *)(param_1 + 0x618) == 1) {
    FUN_00a8caf0(1,4,0,0);
  }
  if (*(int *)(param_1 + 0x618) == 2) {
    FUN_00a8caf0(1,4,0,0);
  }
  return;
}

// 00B80760  FUN_00b80760  size=57  [callgraph]
void __thiscall FUN_00b80760(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    *(undefined4 *)(param_1 + 0xb84) = param_3;
    FUN_00a8caf0(2,0,0,0);
  }
  return;
}

// 00B8FF70  cPl0000SaiWeapon::vf40  size=212  [class]
undefined4 __fastcall cPl0000SaiWeapon::vf40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = cPl0000Weapon::vf40();
  if (iVar1 != 0) {
    uVar2 = FUN_009f8b40();
    uVar3 = 1;
    *(undefined4 *)(param_1 + 0xa50) = uVar2;
    FUN_00a92fb0(1);
    FUN_00e08640(uVar3);
    local_c = 1;
    local_8 = 1;
    local_4 = 1;
    iVar1 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
            StaticArray<Behavior::EffectIntegrationContainer,32>(&local_c);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0xa4c) = 0;
      *(undefined4 *)(param_1 + 0xa48) = 0;
      *(undefined4 *)(param_1 + 0xbd0) = 0;
      lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>(1,0);
      *(undefined4 *)(param_1 + 0xa64) = 3;
      *(undefined4 *)(param_1 + 0xa6c) = 0x1e;
      *(undefined4 *)(param_1 + 0xa68) = 0x96;
      *(undefined2 *)(param_1 + 0xa70) = 0xa00;
      *(uint *)(param_1 + 0xaec) = *(uint *)(param_1 + 0xaec) | 0x40000000;
      *(uint *)(param_1 + 0xaf0) = *(uint *)(param_1 + 0xaf0) | 0x800;
      *(undefined4 *)(param_1 + 0xa60) = 0x5f;
      *(undefined2 *)(param_1 + 0xae4) = 2;
      return 1;
    }
  }
  return 0;
}

// 00B90050  FUN_00b90050  size=379  [callgraph]
void __fastcall FUN_00b90050(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined *puVar7;
  
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00a81330();
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      puVar7 = &DAT_01be9db8;
      (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
      iVar2 = FUN_00dd6d80(puVar7);
      piVar3 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar3);
      goto LAB_00b9009e;
    }
  }
  piVar3 = (int *)0x0;
LAB_00b9009e:
  iVar2 = FUN_00a12210(0);
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
    FUN_00a8d280();
    FUN_00a9dd90(*(undefined4 *)(param_1 + 0xa60));
    *(undefined4 *)(param_1 + 0xdcc) = 0x43340000;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    FUN_00a81330();
    piVar5 = (int *)FUN_00a7c8a0();
    if ((piVar5 != (int *)0x0) && (piVar3 != (int *)0x0)) {
      fVar1 = *(float *)(param_1 + 0xdcc) - *(float *)(param_1 + 0xb74);
      *(float *)(param_1 + 0xdcc) = fVar1;
      if (((piVar5[0x139] == 0) &&
          ((((*(byte *)(piVar5 + 0x130) & 1) != 0 && (0.0 <= fVar1)) && (piVar3[0x139] == 0)))) &&
         ((iVar4 = (**(code **)(*piVar3 + 0x1fc))(), iVar4 == 0 &&
          (iVar4 = FUN_00416910(6), iVar4 == 0)))) {
        piVar6 = (int *)FUN_00a12210(*(undefined4 *)(param_1 + 0xb84));
        piVar3 = piVar5;
        if (piVar6 != (int *)0x0) {
          piVar3 = piVar6;
        }
        D3DXMatrixMultiply(iVar2 + 0x10,param_1 + 0xb90,piVar3 + 4);
                    /* WARNING: Could not recover jumptable at 0x00b901b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar5 + 0x18c))();
        return;
      }
    }
  }
  FUN_00a8caf0(1,4,0,0);
  return;
}

// 00B901D0  FUN_00b901d0  size=319  [callgraph]
void __fastcall FUN_00b901d0(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int *piVar3;
  int iStack_20;
  
  FUN_00a8d280();
  if (*(int *)(param_1 + 0xa40) == 0) {
    *(undefined1 *)(param_1 + 0xa71) = 3;
    *(uint *)(param_1 + 0xaec) = *(uint *)(param_1 + 0xaec) & 0xfffdffff;
  }
  else {
    *(undefined1 *)(param_1 + 0xa71) = 10;
    *(uint *)(param_1 + 0xaec) = *(uint *)(param_1 + 0xaec) | 0x20000;
  }
  uVar2 = CollisionAttackData::CollisionAttackData((int *)(param_1 + 0xa60));
  piVar3 = (int *)CollisionCapsule::CollisionCapsule(1,*(undefined4 *)(param_1 + 0xa50),uVar2);
  if (piVar3 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar3 + 0x20);
    piVar3[0xe0] = *(int *)(param_1 + 0xa60);
    piVar3[0xe3] = 1;
    (*pcVar1)(0x1e,*(undefined4 *)(param_1 + 0xa50),0);
    FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0);
    piVar3[0x165] = 0x3e99999a;
    piVar3[0x164] = 0x3dcccccd;
    piVar3[0x160] = -0x4036f025;
    piVar3[0x161] = 0;
    piVar3[0x162] = 0;
    piVar3[0x163] = iStack_20;
    piVar3[0x15c] = 0;
    piVar3[0x15d] = 0;
    piVar3[0x15e] = 0x3e4ccccd;
    piVar3[0x15f] = iStack_20;
    uVar2 = FUN_00a4aed0(5);
    *(undefined4 *)(param_1 + 0x760) = uVar2;
    FUN_00a8c370(piVar3,uVar2);
    FUN_00d7b0f0();
    piVar3[0xe3] = 1;
    FUN_00d7b890();
    *(undefined4 *)(param_1 + 0xae8) = *(undefined4 *)(param_1 + 0x760);
  }
  return;
}

// 00B90310  FUN_00b90310  size=668  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00b903c7) */
/* WARNING: Removing unreachable block (ram,0x00b903c9) */
/* WARNING: Removing unreachable block (ram,0x00b903cb) */

void __thiscall
FUN_00b90310(int *param_1,float *param_2,float *param_3,float param_4,float param_5,int param_6)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
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
  
  iVar2 = FUN_00a12210(0);
  local_70 = *(float *)(iVar2 + 0x40);
  local_6c = *(float *)(iVar2 + 0x44);
  local_68 = *(float *)(iVar2 + 0x48);
  local_90 = *param_2 - local_70;
  local_8c = param_2[1] - local_6c;
  local_88 = param_2[2] - local_68;
  local_84 = param_2[3] - *(float *)(iVar2 + 0x4c);
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
        fVar4 = (float10)(**(code **)(*param_1 + 0x24))();
        param_5 = (float)(fVar4 * (float10)param_5);
        fVar4 = (float10)(**(code **)(*param_1 + 0x24))(param_5);
        param_4 = (float)(fVar4 * (float10)param_4);
      }
      FUN_00de2bc0(local_50,&local_a0,&local_90,&local_60,param_4,param_5);
      iVar3 = iVar2 + 0x10;
      D3DXMatrixMultiply(iVar3,iVar3,local_50);
      *(float *)(iVar2 + 0x40) = local_7c;
      *(float *)(iVar2 + 0x44) = local_78;
      *(float *)(iVar2 + 0x48) = local_74;
      FUN_00de28e0(iVar3,iVar3);
      return;
    }
  }
  return;
}

// 00B96FA0  FUN_00b96fa0  size=646  [callgraph]
void __fastcall FUN_00b96fa0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined2 uVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    iVar6 = FUN_00a7c8a0();
  }
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    piVar3 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar3 + 0x68))();
    if ((iVar2 == 5) && (param_1[0x500] != 0)) {
      iVar2 = FUN_00a81330();
      iVar4 = 0;
      if (iVar2 != 0) {
        iVar4 = FUN_00a7c8a0();
      }
      FUN_00a9f3c0(iVar4 + 0x494,0x16,0,0x392ec33e,0x3f800000,0x8000000,0,0x3f800000);
    }
    else {
      iVar2 = param_1[0x186];
      uVar5 = 0x3e0;
      if (iVar2 == 0xb9) {
        uVar5 = 0x3da;
      }
      if (iVar2 == 0xba) {
        uVar5 = 0x3db;
      }
      if (iVar2 == 0xbb) {
        uVar5 = 0x3dc;
      }
      if (iVar2 == 0xbc) {
        uVar5 = 0x3dc;
      }
      FUN_00aa4080(uVar5,0,0x392ec33e,0x3f800000,0x8000000,0,0x3f800000);
    }
    pcVar1 = *(code **)(*param_1 + 0x394);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)();
    FUN_00b94fc0();
    if ((param_1[0x186] != 0xbb) && (param_1[0x186] != 0xbc)) {
      (**(code **)(*param_1 + 0x220))(0x41700000);
    }
    param_1[0x9f4] = 0;
    piVar3 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar3 + 0x68))();
    if (iVar2 == 3) {
      iVar2 = FUN_00a81330();
      if (iVar2 != 0) {
        iVar2 = FUN_00a7c8a0();
        if (iVar2 != 0) {
          FUN_00b80720();
        }
      }
    }
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  if (iVar6 != 0) {
    iVar2 = FUN_00a8c760(5);
    if (iVar2 != 0) {
      FUN_00a8e880(iVar6 + 0x40);
      (**(code **)(*param_1 + 0x308))(0x3e99999a,0x3ae4c388,0x3e8efa35,0);
    }
  }
  param_1[0x469] = 1;
  FUN_00b94790(0x3f800000,0x3f800000);
  FUN_00a952e0(0,0x40800000);
  iVar2 = FUN_00a8c760(0xb);
  if (iVar2 != 0) {
    FUN_00b85350(0x42340000,0x3f800000,0x3dcccccd,0,1,0x3dcccccd);
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
    if ((*(byte *)(param_1 + 0x9f4) & 1) == 0) {
      FUN_00da0f50(0,0,0);
    }
  }
  return;
}

// 00B97230  FUN_00b97230  size=267  [callgraph]
void __fastcall FUN_00b97230(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*param_1 + 0x1d4);
  param_1[0x991] = 0;
  (*pcVar1)(1);
  param_1[0x2de] = 1;
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    param_1[0x2de] = 0;
  }
  param_1[0x95d] = 0;
  if (param_1[0x187] != 0) {
    FUN_00b8cd60();
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      FUN_00a7c8a0();
    }
    iVar2 = (**(code **)(*param_1 + 800))(0x3c888889);
    if ((iVar2 != 0) && (iVar2 = FUN_00a8c760(0x12), iVar2 == 0)) {
      FUN_00a8caf0(0xc,0,0,0);
      return;
    }
    if ((DAT_01bea090 & 0x8000) == 0) {
      iVar2 = FUN_00a8c760(0x17);
      if (((iVar2 == 0) && (iVar2 = FUN_00a8c760(1), iVar2 == 0)) && ((float)param_1[0xd07] <= 0.0))
      {
        return;
      }
      iVar2 = FUN_00b89e20();
      if (iVar2 != 0) {
        if ((*(byte *)(param_1 + 0x9f4) & 1) == 0) {
          FUN_00da0f50(0,0,0);
        }
        FUN_00b7e090(0);
      }
    }
  }
  return;
}

// 00B97340  FUN_00b97340  size=908  [callgraph]
void __fastcall FUN_00b97340(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    iVar4 = FUN_00a7c8a0();
  }
  (**(code **)(*param_1 + 0x314))();
  iVar2 = FUN_00a8c760(0x12);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x318))();
  }
  switch(param_1[0x187]) {
  case 0:
    iVar2 = FUN_00b80980();
    if (iVar2 == 0) {
      FUN_00aa4080(0x3e2,0,0,0x3f800000,0x8000000,0,0x3f800000);
    }
    else {
      iVar2 = FUN_00a81330();
      iVar4 = 0;
      if (iVar2 != 0) {
        iVar4 = FUN_00a7c8a0();
      }
      FUN_00a9f3c0(iVar4 + 0x494,0x17,0,0,0x3f800000,0x8000000,0,0x3f800000);
    }
    pcVar1 = *(code **)(*param_1 + 0x394);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)();
    FUN_00b94fc0();
    if (90000.0 < (float)param_1[0x34a]) {
      pcVar1 = *(code **)(*param_1 + 0x308);
      param_1[0x23d] = param_1[0x41c];
      (*pcVar1)(0x3f800000,0x3ae4c388,0x40490fdb,0);
    }
    iVar2 = param_1[0x463];
    FUN_00e26e90();
    *(undefined4 *)(iVar2 + 0xe4) = 0;
    *(undefined4 *)(iVar2 + 0xe8) = 0;
    *(undefined4 *)(iVar2 + 0xec) = 0;
    param_1[0x9f4] = 0;
    FUN_00b86010(1);
    piVar3 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar3 + 0x68))();
    if (((iVar2 == 3) && (iVar2 = FUN_00a81330(), iVar2 != 0)) &&
       (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      FUN_00b80720();
    }
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0x3e3,0,0x392ec33e,0x3f800000,0x8000000,0,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x394);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)();
    (**(code **)(*param_1 + 0x220))(0x41700000);
    param_1[0x9f4] = 0;
    piVar3 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar3 + 0x68))();
    if (((iVar2 == 3) && (iVar2 = FUN_00a81330(), iVar2 != 0)) &&
       (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      FUN_00b80720();
    }
    goto LAB_00b975d9;
  case 3:
LAB_00b975d9:
    if ((iVar4 != 0) && (iVar2 = FUN_00a8c760(5), iVar2 != 0)) {
      FUN_00b8ced0(0x40800000,0x3fe66666,0x3f4ccccd,0x3f000000);
    }
    param_1[0x469] = 1;
    FUN_00b94790(0x3f800000,0x3f800000);
    FUN_00a952e0(0,0x40800000);
    iVar2 = FUN_00a8c760(0xb);
    if (iVar2 != 0) {
      FUN_00b85350(0x42340000,0x3f800000,0x3dcccccd,0,1,0x3dcccccd);
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      return;
    }
    goto LAB_00b9768d;
  default:
    goto switchD_00b9739a_default;
  }
  param_1[0x469] = 1;
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    param_1[0x250] = 0;
    iVar2 = FUN_00a8c760(0xb);
    if (iVar2 != 0) {
      param_1[0x250] = 1;
      return;
    }
  }
  else {
LAB_00b9768d:
    (**(code **)(*param_1 + 0x388))(0);
    FUN_00a8caf0(0xb,0,0,0);
    if ((*(byte *)(param_1 + 0x9f4) & 1) == 0) {
      FUN_00da0f50(0,0,0);
      return;
    }
  }
switchD_00b9739a_default:
  return;
}

// 00B979D0  FUN_00b979d0  size=655  [callgraph]
void __fastcall FUN_00b979d0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  undefined2 uVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    FUN_00a7c8a0();
  }
  (**(code **)(*param_1 + 0x314))();
  switch(param_1[0x187]) {
  case 0:
    pcVar2 = *(code **)(*param_1 + 0x394);
    param_1[0x187] = 1;
    (*pcVar2)();
    param_1[0x248] = 0x41f00000;
    param_1[0x250] = 0;
    uVar3 = 0x47e;
    if (param_1[0x186] == 0xc2) {
      uVar3 = 0x47f;
    }
    if (param_1[0x186] == 0xc3) {
      uVar3 = 0x455;
    }
    if (((byte)DAT_01bea090 & 0x10) != 0) {
      uVar3 = 0x468;
    }
    FUN_00aa4080(uVar3,0,0x392ec33e,0x3f800000,0x8000000,0,0x3f800000);
    FUN_00b94fc0();
    param_1[0x9f4] = 0;
    param_1[0x9b5] = 0;
    FUN_00b86010(1);
    iVar4 = FUN_00b86410();
    if (iVar4 != 0) {
      FUN_00b7b270(0x3f800000,0x393702d3,0x40490fdb,0);
    }
    piVar5 = (int *)FUN_00c13920();
    iVar4 = (**(code **)(*piVar5 + 0x68))();
    if (((iVar4 == 3) && (iVar4 = FUN_00a81330(), iVar4 != 0)) &&
       (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
      FUN_00b80720();
    }
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0x3dd,0,0x392ec33e,0x3f800000,0x8000000,0,0x3f800000);
    pcVar2 = *(code **)(*param_1 + 0x394);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar2)();
    param_1[0x409] = 0;
    param_1[0x9f4] = 0;
    piVar5 = (int *)FUN_00c13920();
    iVar4 = (**(code **)(*piVar5 + 0x68))();
    if (((iVar4 == 3) && (iVar4 = FUN_00a81330(), iVar4 != 0)) &&
       (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
      FUN_00b80720();
    }
  case 3:
    param_1[0x469] = 1;
    FUN_00b94790(0x3f800000,0x3f800000);
    FUN_00a952e0(0,0x40800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 == 0) {
      return;
    }
    goto LAB_00b97c30;
  default:
    goto switchD_00b97a0f_default;
  }
  param_1[0x469] = 1;
  BehaviorAppBase::thunk_vf64();
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 == 0) {
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if ((fVar1 - (float)param_1[0x244] < 0.0) && (param_1[0x250] == 0)) {
      param_1[0x250] = 1;
      return;
    }
  }
  else {
LAB_00b97c30:
    (**(code **)(*param_1 + 0x388))(0);
    if ((*(byte *)(param_1 + 0x9f4) & 1) == 0) {
      FUN_00da0f50(0,0,0);
      return;
    }
  }
switchD_00b97a0f_default:
  return;
}

// 00B97C70  FUN_00b97c70  size=645  [callgraph]
void __fastcall FUN_00b97c70(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_20 [28];
  
  FUN_00b884c0();
  (**(code **)(*param_1 + 0x314))();
  uVar2 = 0x3e2aaaab;
  if (param_1[0x187] == 0) {
    if (param_1[0x994] != 0) {
      uVar2 = 0x3d888889;
    }
    param_1[0x994] = 0;
    FUN_00aa4080(*(undefined4 *)param_1[0x991],0,uVar2,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b86010(1);
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      FUN_00a81330();
      piVar4 = (int *)FUN_00a7c8a0();
      if ((piVar4 != (int *)0x0) && (iVar3 = (**(code **)(*piVar4 + 0x228))(), iVar3 != 0)) {
        iVar3 = FUN_00a81330();
        if (iVar3 != 0) {
          FUN_00c15010(auStack_20);
        }
        FUN_00a8e880(auStack_20);
        iVar3 = FUN_00b86410();
        if (iVar3 != 0) {
          (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
        }
      }
    }
    FUN_00b94fc0();
    param_1[0x3a1] = 0;
    param_1[0x9b5] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x469] = 1;
  iVar3 = FUN_00a8c760(5);
  if (iVar3 != 0) {
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      FUN_00a81330();
      piVar4 = (int *)FUN_00a7c8a0();
      if (((piVar4 != (int *)0x0) && (iVar3 = FUN_00b86410(), iVar3 != 0)) &&
         (iVar3 = (**(code **)(*piVar4 + 0x228))(), iVar3 != 0)) {
        FUN_00b7b270(0x3e99999a,0x393702d3,0x3e0efa35,0);
        goto LAB_00b97ea2;
      }
    }
    if (90000.0 < (float)param_1[0x34a]) {
      pcVar1 = *(code **)(*param_1 + 0x308);
      param_1[0x23d] = param_1[0x34c];
      (*pcVar1)(0x3e99999a,0x3ae4c388,0x3e8efa35,0);
    }
  }
LAB_00b97ea2:
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar3 = FUN_00a92f90();
  if ((*(int *)(iVar3 + 0xd0) + *(int *)(iVar3 + 0xc4) + *(int *)(iVar3 + 0xb8) != 0) &&
     (iVar3 = FUN_00e36060(0), iVar3 == 0)) {
    return;
  }
  (**(code **)(*param_1 + 0x388))(0);
  return;
}

// 00B97F00  FUN_00b97f00  size=650  [callgraph]
void __fastcall FUN_00b97f00(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_20 [28];
  
  FUN_00b884c0();
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    iVar3 = param_1[0x991];
    uVar2 = *(undefined4 *)(iVar3 + 0xc);
    if ((char)param_1[0x993] == '\x01') {
      uVar2 = *(undefined4 *)(iVar3 + 0x10);
    }
    else if ((char)param_1[0x993] == '\x02') {
      uVar2 = *(undefined4 *)(iVar3 + 0x14);
    }
    FUN_00aa4080(uVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b86010(1);
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      FUN_00a81330();
      piVar4 = (int *)FUN_00a7c8a0();
      if ((piVar4 != (int *)0x0) && (iVar3 = (**(code **)(*piVar4 + 0x228))(), iVar3 != 0)) {
        iVar3 = FUN_00a81330();
        if (iVar3 != 0) {
          FUN_00c15010(auStack_20);
        }
        FUN_00a8e880(auStack_20);
        iVar3 = FUN_00b86410();
        if (iVar3 != 0) {
          (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
        }
      }
    }
    FUN_00b94fc0();
    param_1[0x9b5] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x469] = 1;
  iVar3 = FUN_00a8c760(5);
  if (iVar3 != 0) {
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      FUN_00a81330();
      piVar4 = (int *)FUN_00a7c8a0();
      if (((piVar4 != (int *)0x0) && (iVar3 = FUN_00b86410(), iVar3 != 0)) &&
         (iVar3 = (**(code **)(*piVar4 + 0x228))(), iVar3 != 0)) {
        FUN_00b7b270(0x3e99999a,0x393702d3,0x3e0efa35,0);
        goto LAB_00b98120;
      }
    }
    if (90000.0 < (float)param_1[0x34a]) {
      pcVar1 = *(code **)(*param_1 + 0x308);
      param_1[0x23d] = param_1[0x34c];
      (*pcVar1)(0x3e99999a,0x3ae4c388,0x3e8efa35,0);
    }
  }
LAB_00b98120:
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar3 = FUN_00a92f90();
  if ((*(int *)(iVar3 + 0xd0) + *(int *)(iVar3 + 0xc4) + *(int *)(iVar3 + 0xb8) != 0) &&
     (iVar3 = FUN_00e36060(0), iVar3 == 0)) {
    return;
  }
  param_1[0x991] = param_1[0x992];
  param_1[0x994] = 1;
  FUN_00a8caf0(0x4f,0,0,0);
  return;
}

// 00B98190  FUN_00b98190  size=1181  [callgraph]
void __fastcall FUN_00b98190(int *param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float local_20 [7];
  
  local_20[0] = 5.49309e-43;
  local_20[1] = 5.5071e-43;
  local_20[2] = 5.52112e-43;
  (**(code **)(*param_1 + 0x314))();
  FUN_00e26e90();
  FUN_00e22f10(0);
  FUN_00b884c0();
  if (param_1[0x187] == 0) {
    param_1[0x250] = param_1[0x98a];
    param_1[0x248] = 0;
    param_1[0x98a] = param_1[0x98a] + 1;
    fVar5 = local_20[param_1[0x250]];
    param_1[0x2dd] = 0;
    switch(param_1[0x98f]) {
    case 0:
      param_1[0x98f] = 1;
      if (param_1[0x98c] != 0) {
        param_1[0x98f] = 2;
      }
      if (param_1[0x98e] != 0) {
        param_1[0x98f] = 0xc;
      }
      break;
    case 1:
      param_1[0x98f] = 3;
      if (param_1[0x98c] != 0) {
        param_1[0x98f] = 5;
      }
      break;
    case 2:
      param_1[0x98f] = 4;
      break;
    case 3:
      if (param_1[0x98c] != 0) {
        param_1[0x98f] = 10;
      }
      break;
    case 5:
      param_1[0x98f] = 6;
      break;
    case 10:
      param_1[0x98f] = 0xb;
      break;
    case 0xc:
      param_1[0x98f] = 0xd;
      break;
    case -1:
      param_1[0x98f] = 0;
    }
    iVar3 = param_1[0x98f];
    switch(iVar3) {
    case 0:
      fVar5 = 5.49309e-43;
      break;
    case 1:
      fVar5 = 5.5071e-43;
      break;
    case 2:
      fVar5 = 5.53513e-43;
      break;
    case 3:
      fVar5 = 5.52112e-43;
      break;
    case 4:
      fVar5 = 5.54914e-43;
      break;
    case 5:
      fVar5 = 5.56315e-43;
      break;
    case 6:
      fVar5 = 5.57717e-43;
      break;
    case 7:
    case 0xc:
      fVar5 = 5.59118e-43;
      break;
    case 8:
    case 0xd:
      fVar5 = 5.60519e-43;
      break;
    case 10:
      fVar5 = 5.66125e-43;
      break;
    case 0xb:
      fVar5 = 5.67526e-43;
    }
    param_1[0xcd4] = 0;
    if (((((iVar3 == 4) || (iVar3 == 6)) || (iVar3 == 0xb)) || (iVar3 == 0xd)) &&
       ((0.0 < (float)param_1[0xd07] && (param_1[0xea8] != 0)))) {
      *(undefined1 *)(param_1 + 0xb0c) = 2;
      param_1[0xb0b] = 0x42340000;
    }
    FUN_00aa4080(fVar5,0,0x3dcccccd,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b86010(1);
    iVar3 = FUN_00b86410();
    if (iVar3 != 0) {
      FUN_00b7b270(0x3f800000,0x393702d3,0x40490fdb,0);
    }
    FUN_00b94fc0();
    param_1[0x9b5] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_00b98567;
  param_1[0x469] = 1;
  iVar3 = FUN_00a8c760(5);
  if (iVar3 != 0) {
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      FUN_00a81330();
      piVar2 = (int *)FUN_00a7c8a0();
      if (((piVar2 != (int *)0x0) && (iVar3 = FUN_00b86410(), iVar3 != 0)) &&
         (iVar3 = (**(code **)(*piVar2 + 0x228))(), iVar3 != 0)) {
        FUN_00b7b270(0x3e99999a,0x393702d3,0x3e8efa35,0);
        goto LAB_00b984d0;
      }
    }
    if (90000.0 < (float)param_1[0x34a]) {
      pcVar1 = *(code **)(*param_1 + 0x308);
      param_1[0x23d] = param_1[0x34c];
      (*pcVar1)(0x3d4ccccd,0x3ae4c388,0x3c8efa35,0);
    }
  }
LAB_00b984d0:
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar3 = FUN_00a92f90();
  if ((*(int *)(iVar3 + 0xd0) + *(int *)(iVar3 + 0xc4) + *(int *)(iVar3 + 0xb8) == 0) ||
     (iVar3 = FUN_00e36060(0), iVar3 != 0)) {
    pcVar1 = *(code **)(*param_1 + 0x3ec);
    param_1[0xcd4] = 0;
    iVar3 = (*pcVar1)();
    if (iVar3 == 0) {
      (**(code **)(*param_1 + 0x388))(0);
    }
    else {
      FUN_00b8a510();
    }
  }
  else if (param_1[0x9a8] != 0) {
    iVar3 = param_1[0x463];
    FUN_00e26e90();
    *(undefined4 *)(iVar3 + 0xe4) = 0x3e19999a;
    *(undefined4 *)(iVar3 + 0xe8) = 0x3e19999a;
    *(undefined4 *)(iVar3 + 0xec) = 0x3e19999a;
  }
LAB_00b98567:
  iVar3 = FUN_00a8c760(0xb);
  if (iVar3 != 0) {
    iVar3 = FUN_00a12210(0xf00);
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      FUN_00a81330();
      iVar4 = FUN_00a7c8a0();
      if (iVar4 != 0) {
        iVar4 = FUN_00a81330();
        if (iVar4 != 0) {
          FUN_00c15010(local_20);
        }
        if (iVar3 != 0) {
          pcVar1 = *(code **)(*param_1 + 0x308);
          fVar5 = *(float *)(iVar3 + 0x48);
          param_1[0x14] =
               (int)((float)param_1[0x14] + (local_20[0] - *(float *)(iVar3 + 0x40)) * 0.3);
          param_1[0x16] = (int)((local_20[2] - fVar5) * 0.3 + (float)param_1[0x16]);
          (*pcVar1)(0x3e99999a,0x393702d3,0x3e8efa35,0);
        }
      }
    }
  }
  return;
}

// 00B986A0  FUN_00b986a0  size=1566  [callgraph]
void __fastcall FUN_00b986a0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  float afStack_20 [2];
  float fStack_18;
  
  (**(code **)(*param_1 + 0x314))();
  FUN_00b884c0();
  FUN_00e26e90();
  FUN_00e22f10(0);
  switch(param_1[0x187]) {
  case 0:
    param_1[0x248] = 0;
    param_1[0x250] = param_1[0x98a];
    param_1[0x98a] = param_1[0x98a] + 1;
    param_1[0x251] = 0;
    param_1[0x2dd] = 0;
    param_1[0x98f] = 9;
    FUN_00aa4080(0x191,0,0x3dcccccd,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b86010(1);
    FUN_00b7b270(0x3f800000,0x393702d3,0x40490fdb,0);
    FUN_00b94fc0();
    FUN_00b7d600();
    param_1[0xcd4] = 0;
    param_1[0x252] = 0;
    param_1[0x9b5] = 0;
    break;
  case 1:
    break;
  case 2:
    param_1[0x187] = 3;
    FUN_00aa4080(0x192,0,0x3d088889,0x3f800000,0,0,0x3f800000);
    param_1[0x248] = 0x42700000;
    param_1[0x250] = 0;
    param_1[0xd06] = 0x41f00000;
    param_1[0x249] = 0x3f800000;
    param_1[0x24a] = 0x42f00000;
    goto LAB_00b98967;
  case 3:
LAB_00b98967:
    iVar4 = param_1[0x249];
    param_1[0x469] = 1;
    iVar5 = FUN_00e26e90();
    if (iVar5 != 0) {
      FUN_00e36720(0,iVar4);
    }
    BehaviorAppBase::thunk_vf64();
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    param_1[0x24a] = (int)((float)param_1[0x24a] - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    iVar4 = FUN_00a8c760(5);
    if (iVar4 != 0) {
      piVar3 = (int *)FUN_00b7b200();
      if ((piVar3 == (int *)0x0) || (iVar4 = (**(code **)(*piVar3 + 0x228))(), iVar4 == 0)) {
        if (90000.0 < (float)param_1[0x34a]) {
          pcVar2 = *(code **)(*param_1 + 0x308);
          param_1[0x23d] = param_1[0x34c];
          (*pcVar2)(0x3d4ccccd,0x3ae4c388,0x3c0efa35,0);
        }
      }
      else {
        FUN_00b7b270(0x3e99999a,0x393702d3,0x3e8efa35,0);
      }
    }
    if (param_1[0x9f0] != 0) {
      param_1[0xd06] = 0x41f00000;
    }
    goto switchD_00b986f1_default;
  case 4:
    param_1[0x187] = 5;
    FUN_00aa4080(0x193,0,0x3d088889,0x3f800000,0x8000000,0,0x3f800000);
    FUN_00a8d280();
    goto LAB_00b98ae9;
  case 5:
LAB_00b98ae9:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar4 = FUN_00a8c760(5);
    if (iVar4 != 0) {
      piVar3 = (int *)FUN_00b7b200();
      if ((piVar3 == (int *)0x0) || (iVar4 = (**(code **)(*piVar3 + 0x228))(), iVar4 == 0)) {
        if (90000.0 < (float)param_1[0x34a]) {
          pcVar2 = *(code **)(*param_1 + 0x308);
          param_1[0x23d] = param_1[0x34c];
          (*pcVar2)(0x3d4ccccd,0x3ae4c388,0x3c8efa35,0);
        }
      }
      else {
        FUN_00b7b270(0x3e99999a,0x393702d3,0x3e8efa35,0);
      }
    }
    iVar4 = FUN_00a92f90();
    if ((*(int *)(iVar4 + 0xd0) + *(int *)(iVar4 + 0xc4) + *(int *)(iVar4 + 0xb8) == 0) ||
       (iVar4 = FUN_00e36060(0), iVar4 != 0)) {
      (**(code **)(*param_1 + 0x388))(0);
      param_1[0xcd4] = 0;
      goto switchD_00b986f1_default;
    }
    iVar4 = param_1[0x9a8];
    goto LAB_00b988d1;
  default:
    goto switchD_00b986f1_default;
  }
  param_1[0x469] = 1;
  iVar4 = FUN_00a8c760(5);
  if (iVar4 != 0) {
    piVar3 = (int *)FUN_00b7b200();
    if ((piVar3 == (int *)0x0) || (iVar4 = (**(code **)(*piVar3 + 0x228))(), iVar4 == 0)) {
      if (90000.0 < (float)param_1[0x34a]) {
        pcVar2 = *(code **)(*param_1 + 0x308);
        param_1[0x23d] = param_1[0x34c];
        (*pcVar2)(0x3d4ccccd,0x3ae4c388,0x3c8efa35,0);
      }
    }
    else {
      FUN_00b7b270(0x3e99999a,0x393702d3,0x3e8efa35,0);
    }
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar4 = FUN_00a92f90();
  if ((*(int *)(iVar4 + 0xd0) + *(int *)(iVar4 + 0xc4) + *(int *)(iVar4 + 0xb8) == 0) ||
     (iVar4 = FUN_00e36060(0), iVar4 != 0)) {
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x252] == 0) {
      param_1[0x187] = 4;
    }
  }
  else {
    iVar4 = param_1[0x9a8];
LAB_00b988d1:
    if (iVar4 != 0) {
      FUN_0041cc40(0x3e19999a);
    }
  }
switchD_00b986f1_default:
  iVar4 = FUN_00a8c760(0xb);
  if (iVar4 != 0) {
    iVar4 = FUN_00a12210(0xf00);
    iVar5 = FUN_00a81330();
    if (iVar5 != 0) {
      FUN_00a81330();
      iVar5 = FUN_00a7c8a0();
      if (iVar5 != 0) {
        iVar5 = FUN_00a81330();
        if (iVar5 != 0) {
          FUN_00c15010(afStack_20);
        }
        if (iVar4 != 0) {
          pcVar2 = *(code **)(*param_1 + 0x308);
          fVar1 = *(float *)(iVar4 + 0x48);
          param_1[0x14] =
               (int)((afStack_20[0] - *(float *)(iVar4 + 0x40)) * 0.3 + (float)param_1[0x14]);
          param_1[0x16] = (int)((fStack_18 - fVar1) * 0.3 + (float)param_1[0x16]);
          (*pcVar2)(0x3e99999a,0x393702d3,0x3e8efa35,0);
        }
      }
    }
  }
  return;
}

// 00B99330  FUN_00b99330  size=844  [callgraph]
void __fastcall FUN_00b99330(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  undefined4 auStack_14 [5];
  
  (**(code **)(*param_1 + 0x314))();
  if (0.0 < (float)param_1[0x24a]) {
    param_1[0x24a] = (int)((float)param_1[0x24a] - (float)param_1[0x244]);
  }
  auStack_14[0] = 0x3b1;
  auStack_14[1] = 0x3b2;
  auStack_14[2] = 0x3b3;
  auStack_14[3] = 0x3b4;
  auStack_14[4] = 0x3b5;
  FUN_00b884c0();
  if (param_1[0x187] == 0) {
    param_1[0x9a2] = param_1[0x9a2] + 1;
    if (4 < param_1[0x988]) {
      param_1[0x988] = 0;
      param_1[0x9a3] = 1;
    }
    iVar4 = param_1[0x988];
    if (iVar4 == 4) {
      param_1[0x9a3] = 1;
    }
    param_1[0x250] = iVar4;
    param_1[0x988] = iVar4 + 1;
    FUN_00aa4080(auStack_14[param_1[0x250]],0,0x3dcccccd,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x23d] = param_1[0x25];
    FUN_00b86010(1);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b94fc0();
    param_1[0x995] = param_1[0x995] | 2;
    param_1[0x225] = 0x3cf5c28f;
    param_1[0x9f4] = 0;
    param_1[0x248] = 0x3d75c28f;
    param_1[0x2dd] = 0;
    param_1[0x9b5] = 0;
    param_1[0x24a] = -0x40800000;
  }
  else if (param_1[0x187] != 1) goto LAB_00b99649;
  fVar5 = (float10)FUN_00fdc1f0();
  param_1[0x224] = (int)(float)(fVar5 * (float10)(float)param_1[0x224]);
  param_1[0x226] = (int)(float)(fVar5 * (float10)(float)param_1[0x226]);
  fVar5 = (float10)FUN_00fdc1f0();
  param_1[0x225] = (int)(float)(fVar5 * (float10)(float)param_1[0x225]);
  iVar4 = FUN_00a8c760(0x12);
  if (iVar4 != 0) {
    param_1[0x225] = (int)((float)param_1[0x225] - (float)param_1[0x244] * 0.004);
  }
  param_1[0x15] = (int)((float)param_1[0x248] * (float)param_1[0x244] + (float)param_1[0x15]);
  fVar5 = (float10)FUN_00fdc1f0();
  param_1[0x469] = 1;
  param_1[0x248] =
       (int)(float)(fVar5 * (float10)(float)param_1[0x248] -
                   (float10)(float)param_1[0x244] * (float10)0.005);
  param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
  iVar4 = FUN_00a81330();
  if (iVar4 == 0) {
LAB_00b995ae:
    if (90000.0 < (float)param_1[0x34a]) {
      pcVar2 = *(code **)(*param_1 + 0x308);
      param_1[0x23d] = param_1[0x34c];
      (*pcVar2)(0x3e99999a,0x3ae4c388,0x3e8efa35,0);
    }
  }
  else {
    FUN_00a81330();
    piVar3 = (int *)FUN_00a7c8a0();
    if (((piVar3 == (int *)0x0) || (iVar4 = FUN_00b86410(), iVar4 == 0)) ||
       (iVar4 = (**(code **)(*piVar3 + 0x228))(), iVar4 == 0)) goto LAB_00b995ae;
    FUN_00b8ced0(0x40800000,0x3f4ccccd,0x3da3d70a,0x3da3d70a);
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar4 = FUN_00a92f90();
  if ((*(int *)(iVar4 + 0xd0) + *(int *)(iVar4 + 0xc4) + *(int *)(iVar4 + 0xb8) == 0) ||
     (iVar4 = FUN_00e36060(0), iVar4 != 0)) {
    FUN_00a8caf0(0xb,0,0,0);
  }
LAB_00b99649:
  iVar4 = FUN_00a8c760(0x12);
  if ((iVar4 == 0) && (fVar1 = (float)param_1[0x24a], NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)))
  {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b99675. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x318))();
  return;
}

// 00B99960  FUN_00b99960  size=998  [callgraph]
void __fastcall FUN_00b99960(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  
  (**(code **)(*param_1 + 0x314))();
  iVar2 = FUN_00a8c760(0x12);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x318))();
  }
  FUN_00b884c0();
  switch(param_1[0x187]) {
  case 0:
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      iVar2 = FUN_00a7c8a0();
      pcVar1 = *(code **)(*param_1 + 0x308);
      fVar4 = (float10)fpatan((float10)*(float *)(iVar2 + 0x40) - (float10)(float)param_1[0x10],
                              (float10)*(float *)(iVar2 + 0x48) - (float10)(float)param_1[0x12]);
      param_1[0x23d] = (int)(float)fVar4;
      (*pcVar1)(0x3f800000,0x393702d3,0x40490fdb,0);
    }
    FUN_00aa4080(0x3b9,0,0x3e2aaaab,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x23d] = param_1[0x25];
    param_1[0x225] = 0x3e4ccccd;
    FUN_00b86010(1);
    FUN_00b94fc0();
    param_1[0x988] = param_1[0x988] + 1;
    param_1[0x409] = 0;
    if (5 < param_1[0x988]) {
      param_1[0x988] = 0;
    }
    param_1[0x995] = param_1[0x995] | 8;
    param_1[0x2dd] = 0;
    param_1[0x9b5] = 0;
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0x3ba,0,0x3d088889,0x3f800000,0,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    param_1[0x224] = (int)((float)param_1[0x224] * 0.97);
    param_1[0x226] = (int)((float)param_1[0x226] * 0.97);
    param_1[0x225] = (int)((float)param_1[0x225] * 0.994);
    param_1[0x409] = (int)((float)param_1[0x244] * -0.1 + (float)param_1[0x409]);
    FUN_00b94790(0x3f800000,0x3f800000);
    return;
  case 4:
    FUN_00aa4080(0x3bb,0,0x3d088889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar2 = FUN_00a92f90();
    if ((*(int *)(iVar2 + 0xd0) + *(int *)(iVar2 + 0xc4) + *(int *)(iVar2 + 0xb8) == 0) ||
       (iVar2 = FUN_00e36060(0), iVar2 != 0)) {
      (**(code **)(*param_1 + 0x388))(0);
      return;
    }
  default:
    goto switchD_00b999a4_default;
  }
  param_1[0x224] = (int)((float)param_1[0x224] * 0.97);
  param_1[0x226] = (int)((float)param_1[0x226] * 0.97);
  param_1[0x225] = (int)((float)param_1[0x225] * 0.994);
  iVar2 = FUN_00a8c760(0x12);
  if (iVar2 == 0) {
    param_1[0x409] = (int)((float)param_1[0x244] * -0.1 + (float)param_1[0x409]);
  }
  else {
    param_1[0x225] = (int)((float)param_1[0x225] - 0.005);
    piVar3 = (int *)FUN_00b7b200();
    if (((piVar3 == (int *)0x0) || (iVar2 = FUN_00b86410(), iVar2 == 0)) ||
       (iVar2 = (**(code **)(*piVar3 + 0x228))(), iVar2 == 0)) {
      if (90000.0 < (float)param_1[0x34a]) {
        pcVar1 = *(code **)(*param_1 + 0x308);
        param_1[0x23d] = param_1[0x34c];
        (*pcVar1)(0x3e99999a,0x3ae4c388,0x3e8efa35,0);
      }
    }
    else {
      FUN_00b8ced0(0x40800000,0x3fc00000,0x3dcccccd,0x3e99999a);
    }
  }
  param_1[0x469] = 1;
  param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar2 = FUN_00a92f90();
  if ((*(int *)(iVar2 + 0xd0) + *(int *)(iVar2 + 0xc4) + *(int *)(iVar2 + 0xb8) == 0) ||
     (iVar2 = FUN_00e36060(0), iVar2 != 0)) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_00b999a4_default:
  return;
}

// 00B99D60  FUN_00b99d60  size=1607  [callgraph]
void __fastcall FUN_00b99d60(int *param_1)

{
  float *pfVar1;
  float fVar2;
  code *pcVar3;
  int iVar4;
  float unaff_ESI;
  float10 fVar5;
  float *pfStack_9c;
  float *pfStack_98;
  float *pfStack_94;
  undefined1 auStack_84 [12];
  float fStack_78;
  float afStack_74 [2];
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [8];
  float fStack_60;
  undefined1 auStack_5c [24];
  float fStack_44;
  float fStack_3c;
  
  pfStack_94 = (float *)0xb99d78;
  (**(code **)(*param_1 + 0x314))();
  pfStack_94 = (float *)0x12;
  pfStack_98 = (float *)0xb99d81;
  iVar4 = FUN_00a8c760();
  if (iVar4 != 0) {
    pfStack_94 = (float *)0xb99d91;
    (**(code **)(*param_1 + 0x318))();
  }
  pfStack_94 = (float *)0xb99d98;
  FUN_00b884c0();
  switch(param_1[0x187]) {
  case 0:
    pfStack_94 = (float *)0xb99dc1;
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      pfStack_94 = (float *)0xb99dce;
      iVar4 = FUN_00a7c8a0();
      pcVar3 = *(code **)(*param_1 + 0x308);
      fVar5 = (float10)fpatan((float10)*(float *)(iVar4 + 0x40) - (float10)(float)param_1[0x10],
                              (float10)*(float *)(iVar4 + 0x48) - (float10)(float)param_1[0x12]);
      param_1[0x23d] = (int)(float)fVar5;
      pfStack_94 = (float *)0x0;
      pfStack_98 = (float *)0x40490fdb;
      pfStack_9c = (float *)0x393702d3;
      (*pcVar3)(0x3f800000);
    }
    pfStack_94 = (float *)0x3f800000;
    pfStack_98 = (float *)0x0;
    pfStack_9c = (float *)0x8000000;
    FUN_00aa4080(0x3bd,0,0x3e2aaaab,0x3f800000);
    param_1[0x23d] = param_1[0x25];
    pfStack_94 = (float *)0x1;
    pfStack_98 = (float *)0xb99e59;
    FUN_00b86010();
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x225] = 0x3e4ccccd;
    pfStack_94 = (float *)0xb99e72;
    FUN_00b94fc0();
    param_1[0x988] = param_1[0x988] + 1;
    param_1[0x409] = 0;
    param_1[0x995] = param_1[0x995] | 1;
    param_1[0x9f4] = 0;
    param_1[0x2dd] = 0;
    goto LAB_00b99e9d;
  case 1:
LAB_00b99e9d:
    pfStack_94 = (float *)0x12;
    param_1[0x224] = (int)((float)param_1[0x224] * 0.97);
    param_1[0x226] = (int)((float)param_1[0x226] * 0.97);
    param_1[0x225] = (int)((float)param_1[0x225] * 0.994);
    pfStack_98 = (float *)0xb99eda;
    iVar4 = FUN_00a8c760();
    if (iVar4 != 0) {
      param_1[0x225] = (int)((float)param_1[0x225] - 0.005);
    }
    pfStack_94 = (float *)0x0;
    pfStack_98 = (float *)0xb99ef9;
    fStack_78 = (float)FUN_00a959f0();
    if (18.0 < (float)(int)fStack_78) {
      pfStack_94 = (float *)0xb99f15;
      iVar4 = FUN_00b7b200();
      if (iVar4 == 0) {
        afStack_74[0] = 0.5235988;
      }
      else {
        pfStack_94 = &fStack_60;
        pfStack_98 = (float *)0xb99f25;
        FUN_00b7b230();
        pfStack_94 = (float *)(param_1 + 0x10);
        pfStack_98 = &fStack_60;
        pfStack_9c = &fStack_78;
        thunk_FUN_00dde510(afStack_74);
        param_1[0x25] = (int)fStack_78;
        afStack_74[0] = afStack_74[0] * -1.0;
      }
      param_1[0x24] = (int)afStack_74[0];
    }
    param_1[0x469] = 1;
    param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
    pfStack_94 = (float *)0x3f800000;
    pfStack_98 = (float *)0x3f800000;
    pfStack_9c = (float *)0xb99f8d;
    FUN_00b94790();
    pfStack_94 = (float *)0x0;
    pfStack_98 = (float *)0xb99f96;
    FUN_00a92f90();
    pfStack_98 = (float *)0xb99f9d;
    iVar4 = FUN_0085be10();
    if (iVar4 == 0) {
      return;
    }
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 2:
    pfStack_94 = (float *)0x3f800000;
    pfStack_98 = (float *)0x0;
    pfStack_9c = (float *)0x0;
    FUN_00aa4080(0x3be,0,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x41f00000;
    goto LAB_00b99ff6;
  case 3:
LAB_00b99ff6:
    pfStack_94 = (float *)0xb9a002;
    (**(code **)(*param_1 + 0x318))();
    param_1[0x224] = (int)((float)param_1[0x224] * 0.0);
    param_1[0x226] = (int)((float)param_1[0x226] * 0.0);
    param_1[0x225] = (int)((float)param_1[0x225] * 0.0);
    param_1[0x409] = (int)((float)param_1[0x244] * -0.03 + (float)param_1[0x409]);
    pfStack_94 = (float *)0x3f800000;
    pfStack_98 = (float *)0x3f800000;
    pfStack_9c = (float *)0xb9a059;
    FUN_00b94790();
    pfVar1 = (float *)(param_1 + 0x2f8);
    *pfVar1 = 0.0;
    param_1[0x2f9] = 0;
    param_1[0x2fa] = 0x3f333333;
    pfStack_9c = pfVar1;
    pfStack_98 = pfVar1;
    pfStack_94 = (float *)(param_1 + 4);
    D3DXVec3TransformNormal();
    param_1[0x14] = (int)((float)param_1[0x14] + *pfVar1);
    param_1[0x15] = (int)((float)param_1[0x15] + (float)param_1[0x2f9]);
    param_1[0x16] = (int)((float)param_1[0x2fa] + (float)param_1[0x16]);
    param_1[0x17] = (int)((float)param_1[0x2fb] + (float)param_1[0x17]);
    fVar2 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar2 - (float)param_1[0x244]);
    if (0.0 < (float)param_1[0x2f9]) {
      param_1[0x248] =
           (int)((fVar2 - (float)param_1[0x244]) - ((float)param_1[0x244] + (float)param_1[0x244]));
    }
    if ((float)param_1[0x248] < 0.0) {
      pcVar3 = *(code **)(*param_1 + 0x324);
      param_1[0x187] = param_1[0x187] + 1;
      iVar4 = (*pcVar3)();
      if (iVar4 == 0) {
        param_1[0x187] = 8;
      }
    }
    iVar4 = FUN_00a81330();
    if (iVar4 == 0) {
      return;
    }
    FUN_00a81330();
    iVar4 = FUN_00a7c8a0();
    if (iVar4 == 0) {
      return;
    }
    FUN_00b7b230(auStack_6c);
    D3DXMatrixInverse(auStack_5c,0,param_1 + 4);
    D3DXVec3TransformNormal(&stack0xffffff78,&fStack_78,auStack_68);
    pfStack_94 = (float *)((float)pfStack_94 + fStack_44);
    if (fStack_3c + unaff_ESI < 2.0) {
      return;
    }
    thunk_FUN_00dde510(&pfStack_9c,&pfStack_98,auStack_84,param_1 + 0x10);
    FUN_00a8db10(param_1 + 0x25,param_1[0x25],pfStack_98,0x3dcccccd,0x3ae4c388,0x3d567750);
    FUN_00a8db10(param_1 + 0x24,param_1[0x24],(float)pfStack_9c * -1.0,0x3dcccccd,0x3ae4c388,
                 0x3d567750);
    return;
  case 4:
    pfStack_94 = (float *)0x3f800000;
    pfStack_98 = (float *)0x0;
    pfStack_9c = (float *)0x8000000;
    FUN_00aa4080(0x3bf,0,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x24] = 0;
    goto LAB_00b9a26f;
  case 5:
LAB_00b9a26f:
    pfStack_94 = (float *)0x3f800000;
    pfStack_98 = (float *)0x3f800000;
    pfStack_9c = (float *)0xb9a280;
    FUN_00b94790();
    pfStack_94 = (float *)0x0;
    pfStack_98 = (float *)0xb9a289;
    FUN_00a92f90();
    pfStack_98 = (float *)0xb9a290;
    iVar4 = FUN_0085be10();
    if (iVar4 == 0) {
      return;
    }
    pfStack_94 = (float *)0x0;
    pfStack_98 = (float *)0xb9a2a6;
    (**(code **)(*param_1 + 0x388))();
    return;
  case 6:
    pfStack_94 = (float *)0x3f800000;
    pfStack_98 = (float *)0x0;
    pfStack_9c = (float *)0x8000000;
    FUN_00aa4080(0x3c0,0,0,0x3f800000);
    param_1[0x24] = 0;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x225] = 0x3e19999a;
    if (param_1[0x463] != 0) {
      pfStack_94 = (float *)0x0;
      pfStack_98 = (float *)0xb9a30b;
      FUN_0041cc40();
    }
    break;
  case 7:
  case 9:
    break;
  case 8:
    pfStack_94 = (float *)0x3f800000;
    pfStack_98 = (float *)0x0;
    pfStack_9c = (float *)0x8000000;
    FUN_00aa4080(0x3c1,0,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x24] = 0;
    param_1[0x225] = 0x3e19999a;
    break;
  default:
    goto switchD_00b99dab_default;
  }
  pfStack_94 = (float *)0x3f800000;
  pfStack_98 = (float *)0x3f800000;
  pfStack_9c = (float *)0xb9a328;
  FUN_00b94790();
  pfStack_94 = (float *)0x0;
  pfStack_98 = (float *)0xb9a331;
  FUN_00a92f90();
  pfStack_98 = (float *)0xb9a338;
  iVar4 = FUN_0085be10();
  if (iVar4 != 0) {
    pfStack_94 = (float *)0x0;
    pfStack_98 = (float *)0x0;
    pfStack_9c = (float *)0x0;
    FUN_00a8caf0(0xb);
    return;
  }
switchD_00b99dab_default:
  return;
}

// 00B9A950  FUN_00b9a950  size=1348  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00b9a950(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float unaff_EDI;
  int *piVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  (**(code **)(*param_1 + 0x314))();
  param_1[0x469] = 1;
  FUN_00b884c0();
  if (param_1[0x187] == 0) {
    if ((((param_1[0x4a7] != 0) && (iVar3 = FUN_00a81330(), iVar3 != 0)) &&
        (*(int *)(param_1[0x4a7] + 0x34) != 0)) ||
       (((param_1[0x4aa] != 0 && (iVar3 = FUN_00a81330(), iVar3 != 0)) &&
        (*(int *)(param_1[0x4aa] + 0x34) != 0)))) {
      FUN_00b7b270(0x3f800000,0x393702d3,0x40490fdb,0);
    }
    piVar1 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar1 + 0x68))();
    if ((iVar3 == 5) && (param_1[0x500] != 0)) {
      param_1[0x2dd] = 1;
      uVar4 = 0x12;
      if (param_1[0x186] == 100) {
        uVar4 = 0x13;
      }
      if (param_1[0x186] == 0x65) {
        uVar4 = 0x14;
      }
      if (90000.0 < (float)param_1[0x34a]) {
        fVar6 = (float10)FUN_00ddba30((float)param_1[0x34c] - (float)param_1[0x25]);
        fVar7 = (float10)0.61086524;
        if (fVar6 <= fVar7) {
          uVar4 = 0x22;
        }
        fVar8 = (float10)-0.61086524;
        if (fVar8 < fVar6 != (fVar8 == fVar6)) {
          uVar4 = 0x22;
        }
        if ((float10)2.5307274 < fVar6) {
          uVar4 = 0x12;
        }
        fVar9 = (float10)-2.5307274;
        if (fVar6 < fVar9) {
          uVar4 = 0x12;
        }
        if ((fVar7 < fVar6 != (fVar7 == fVar6)) && (fVar6 <= (float10)2.5307274)) {
          uVar4 = 0x13;
        }
        if ((fVar6 <= fVar8) && ((!NAN(fVar9) && !NAN(fVar6)) && fVar9 < fVar6 != (fVar9 == fVar6)))
        {
          uVar4 = 0x14;
        }
      }
      iVar3 = FUN_00a81330();
      iVar2 = 0;
      if (iVar3 != 0) {
        iVar2 = FUN_00a7c8a0();
      }
      FUN_00a9f3c0(iVar2 + 0x494,uVar4,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
    }
    else {
      param_1[0x2dd] = 0;
      uVar4 = 0x2bf;
      if (param_1[0x186] == 100) {
        uVar4 = 0x2c0;
      }
      if (param_1[0x186] == 0x65) {
        uVar4 = 0x2c1;
      }
      if (90000.0 < (float)param_1[0x34a]) {
        fVar6 = (float10)FUN_00ddba30((float)param_1[0x34c] - (float)param_1[0x25]);
        fVar7 = (float10)0.61086524;
        if (fVar6 <= fVar7) {
          uVar4 = 0x17d;
        }
        fVar8 = (float10)-0.61086524;
        if (fVar8 < fVar6 != (fVar8 == fVar6)) {
          uVar4 = 0x17d;
        }
        if ((float10)2.5307274 < fVar6) {
          uVar4 = 0x2bf;
        }
        fVar9 = (float10)-2.5307274;
        if (fVar6 < fVar9) {
          uVar4 = 0x2bf;
        }
        if ((fVar7 < fVar6 != (fVar7 == fVar6)) && (fVar6 <= (float10)2.5307274)) {
          uVar4 = 0x2c1;
        }
        if ((fVar6 <= fVar8) && ((!NAN(fVar9) && !NAN(fVar6)) && fVar9 < fVar6 != (fVar9 == fVar6)))
        {
          uVar4 = 0x2c0;
        }
      }
      FUN_00aa4080(uVar4,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    param_1[0x187] = param_1[0x187] + 1;
    uStack_20 = 0;
    uStack_1c = 0x3f800000;
    uStack_18 = 0;
    FUN_00b893e0(&uStack_20,1);
    piVar1 = param_1 + 0x2c;
    piVar5 = &DAT_01bea560;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar5 = *piVar1;
      piVar1 = piVar1 + 1;
      piVar5 = piVar5 + 1;
    }
    D3DXMatrixInverse(&DAT_01bea5a0,0,&DAT_01bea560);
    _DAT_01bea6c0 = 0;
    if ((((param_1[0x4a7] == 0) || (iVar3 = FUN_00a81330(), iVar3 == 0)) ||
        (*(int *)(param_1[0x4a7] + 0x34) == 0)) &&
       (((param_1[0x4aa] == 0 || (iVar3 = FUN_00a81330(), iVar3 == 0)) ||
        (*(int *)(param_1[0x4aa] + 0x34) == 0)))) {
      if (90000.0 < (float)param_1[0x34a]) {
        fVar6 = (float10)FUN_00ddba30((float)param_1[0x34c] + unaff_EDI);
        param_1[0x25] = (int)(float)fVar6;
      }
    }
    else {
      FUN_00b7b270(0x3e99999a,0x393702d3,0x3e860a92,0);
    }
    FUN_00b94fc0();
    (**(code **)(*param_1 + 0x220))(0x40e00000);
    param_1[0x9b5] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x469] = 1;
  FUN_00b94790(0x3f800000,0x3f800000);
  if ((((param_1[0x4a7] != 0) && (iVar3 = FUN_00a81330(), iVar3 != 0)) &&
      (*(int *)(param_1[0x4a7] + 0x34) != 0)) ||
     (((param_1[0x4aa] != 0 && (iVar3 = FUN_00a81330(), iVar3 != 0)) &&
      (*(int *)(param_1[0x4aa] + 0x34) != 0)))) {
    FUN_00b7b270(0x3e99999a,0x393702d3,0x3e8efa35,0);
  }
  iVar3 = FUN_00a92f90();
  if ((*(int *)(iVar3 + 0xd0) + *(int *)(iVar3 + 0xc4) + *(int *)(iVar3 + 0xb8) == 0) ||
     (iVar3 = FUN_00e36060(0), iVar3 != 0)) {
    (**(code **)(*param_1 + 0x388))(0);
  }
  return;
}

// 00B9AEA0  FUN_00b9aea0  size=808  [callgraph]
void __fastcall FUN_00b9aea0(int *param_1)

{
  code *pcVar1;
  float10 fVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  float10 fVar7;
  
  (**(code **)(*param_1 + 0x314))();
  FUN_00e26e90();
  FUN_00e22f10(0);
  FUN_00b884c0();
  if (param_1[0x187] == 0) {
    uVar6 = 0x2b2;
    sVar3 = FUN_00dde2d0(0,2);
    if ((sVar3 != 1) && (sVar3 == 2)) {
      uVar6 = 0x2b3;
    }
    FUN_00aa4080(uVar6,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b86010(1);
    FUN_00b7b270(0x3e99999a,0x393702d3,0x3f860a92,0);
    FUN_00b94fc0();
    param_1[0x248] = 0x40400000;
    param_1[0x249] = 0;
    param_1[0x9f4] = 0;
    param_1[0x9f6] = 0;
    param_1[0x988] = 0;
    FUN_00db3e80(0x41200000,0,&DAT_01bea1d0);
    iVar4 = param_1[0x463];
    FUN_00e26e90();
    *(undefined4 *)(iVar4 + 0xe4) = 0x3e19999a;
    *(undefined4 *)(iVar4 + 0xe8) = 0x3e19999a;
    *(undefined4 *)(iVar4 + 0xec) = 0x3e19999a;
    fVar7 = (float10)FUN_00ddba30((float)param_1[0x25] - (float)param_1[0x34d]);
    fVar2 = (float10)0;
    uVar6 = 2;
    if ((fVar2 < fVar7 != (fVar2 == fVar7)) && (fVar7 <= (float10)2.0943952)) {
      uVar6 = 0;
    }
    if ((fVar7 <= fVar2) && ((float10)-2.0943952 <= fVar7)) {
      uVar6 = 1;
    }
    FUN_00a92f90();
    Animation::Motion::Unit::setCameraNo(0,uVar6);
    param_1[0x9b5] = 0;
    param_1[0x2dd] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x469] = 1;
  iVar4 = FUN_00a8c760(5);
  if (iVar4 != 0) {
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      FUN_00a81330();
      piVar5 = (int *)FUN_00a7c8a0();
      if (((piVar5 != (int *)0x0) && (iVar4 = FUN_00b86410(), iVar4 != 0)) &&
         (iVar4 = (**(code **)(*piVar5 + 0x228))(), iVar4 != 0)) {
        FUN_00b7b270(0x3e99999a,0x393702d3,0x3e0efa35,0);
        goto LAB_00b9b135;
      }
    }
    if (90000.0 < (float)param_1[0x34a]) {
      pcVar1 = *(code **)(*param_1 + 0x308);
      param_1[0x23d] = param_1[0x34c];
      (*pcVar1)(0x3e99999a,0x3ae4c388,0x3e8efa35,0);
    }
  }
LAB_00b9b135:
  FUN_00b8d800(0x40800000,0x3f800000);
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar4 = FUN_00a92f90();
  if ((*(int *)(iVar4 + 0xd0) + *(int *)(iVar4 + 0xc4) + *(int *)(iVar4 + 0xb8) != 0) &&
     (iVar4 = FUN_00e36060(0), iVar4 == 0)) {
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    return;
  }
  (**(code **)(*param_1 + 0x388))(0);
  FUN_00dc1270(0x41700000,0);
  return;
}

// 00B9B1D0  FUN_00b9b1d0  size=1401  [callgraph]
void __fastcall FUN_00b9b1d0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  (**(code **)(*param_1 + 0x314))();
  iVar3 = FUN_00a8c760(0x12);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x318))();
  }
  FUN_00b884c0();
  switch(param_1[0x187]) {
  case 0:
    break;
  case 1:
    goto switchD_00b9b20f_caseD_1;
  case 2:
  case 3:
  case 4:
  case 5:
    return;
  case 6:
    pcVar2 = *(code **)(*param_1 + 0x1d4);
    param_1[0x187] = 7;
    (*pcVar2)(1);
  case 7:
    if ((*(byte *)(param_1 + 0x9f4) & 1) != 0) {
      FUN_00a952e0(0,0x40000000);
      FUN_00a952e0(0,0x41100000);
    }
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a92f90();
    if ((*(int *)(iVar3 + 0xd0) + *(int *)(iVar3 + 0xc4) + *(int *)(iVar3 + 0xb8) != 0) &&
       (iVar3 = FUN_00e36060(0), iVar3 == 0)) {
      return;
    }
    FUN_00a8caf0(4,2,0,0);
    (**(code **)(*param_1 + 0x220))(0x41200000);
    param_1[0xb17] = 0x41000000;
    param_1[0x250] = 0;
    param_1[0x988] = 0;
    return;
  default:
    return;
  }
  piVar4 = (int *)FUN_00c13920();
  iVar3 = (**(code **)(*piVar4 + 0x68))();
  if ((iVar3 == 2) && (param_1[0x186] == 0x6a)) {
    iVar3 = FUN_00b7d0c0();
    FUN_00a9f3c0(iVar3 + 0x494,0x15,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
    iVar3 = FUN_00b7d0c0();
    uVar11 = 0x3f800000;
    iVar3 = iVar3 + 0x494;
    uVar10 = 0;
    uVar9 = 0x8000000;
    uVar8 = 0x3f800000;
    uVar7 = 0x3d888889;
    uVar6 = 0;
    uVar5 = 0x3e;
    FUN_00b7d0c0(iVar3,0x3e,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
    FUN_00a9f3c0(iVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11);
  }
  else {
    uVar5 = 0x268;
    if (param_1[0x186] == 0x6c) {
      uVar5 = 0x269;
    }
    if (param_1[0x186] == 0x6b) {
      uVar5 = 0x294;
    }
    FUN_00aa4080(uVar5,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
  }
  param_1[0x187] = param_1[0x187] + 1;
  FUN_00b86010(1);
  FUN_00b7b270(0x3e99999a,0x393702d3,0x3f860a92,0);
  FUN_00b94fc0();
  param_1[0x248] = 0x40400000;
  param_1[0x2dd] = 0;
  param_1[0x9f4] = 0;
  param_1[0x249] = 0;
  param_1[0x9f6] = 0;
  param_1[0x988] = 0;
  param_1[0x9b5] = 0;
switchD_00b9b20f_caseD_1:
  param_1[0x469] = 1;
  iVar3 = FUN_00a8c760(5);
  if (iVar3 != 0) {
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      FUN_00a81330();
      piVar4 = (int *)FUN_00a7c8a0();
      if (((piVar4 != (int *)0x0) && (iVar3 = FUN_00b86410(), iVar3 != 0)) &&
         (iVar3 = (**(code **)(*piVar4 + 0x228))(), iVar3 != 0)) {
        FUN_00b7b270(0x3e99999a,0x393702d3,0x3e0efa35,0);
        goto LAB_00b9b452;
      }
    }
    if (90000.0 < (float)param_1[0x34a]) {
      pcVar2 = *(code **)(*param_1 + 0x308);
      param_1[0x23d] = param_1[0x34c];
      (*pcVar2)(0x3e99999a,0x3ae4c388,0x3e8efa35,0);
    }
  }
LAB_00b9b452:
  FUN_00b8d800(0x40800000,0x3f800000);
  iVar3 = FUN_00a92f90();
  if ((*(int *)(iVar3 + 0xd0) + *(int *)(iVar3 + 0xc4) + *(int *)(iVar3 + 0xb8) != 0) &&
     (iVar3 = FUN_00e36060(0), iVar3 == 0)) {
    iVar3 = param_1[0x186];
    if (iVar3 != 0x6b) {
      if ((iVar3 == 0x6c) || (iVar3 == 0x69)) {
        if ((param_1[0x33e] & param_1[0x388]) == 0) {
          param_1[0x249] = 0;
        }
        else {
          param_1[0x249] = (int)((float)param_1[0x244] + (float)param_1[0x249]);
          param_1[0x3a1] = 0;
        }
        if (((((param_1[0x9f4] & 0x801U) != 0) && ((param_1[0x9f4] & 0x400U) == 0)) &&
            (param_1[0x9f6] == 0)) &&
           ((((float)param_1[0x248] < 0.0 && (iVar3 = FUN_00a8c760(0xb), iVar3 != 0)) &&
            (fVar1 = (float)param_1[0x249], !NAN(fVar1) && 10.0 < fVar1 != (fVar1 == 10.0))))) {
          param_1[0x187] = 6;
          FUN_00aa4080(0x27b,0,0x3c888889,0x3f800000,0x8000000,0xbf800000,0x40000000);
        }
      }
      else {
        if ((param_1[0x33e] & param_1[0x389]) == 0) {
          fVar1 = 0.0;
        }
        else {
          fVar1 = (float)param_1[0x244] + (float)param_1[0x249];
        }
        param_1[0x249] = (int)fVar1;
        if ((((param_1[0x9f4] & 0x801U) != 0) && ((param_1[0x9f4] & 0x400U) == 0)) &&
           ((param_1[0x9f6] == 0 &&
            ((((float)param_1[0x248] < 0.0 && (iVar3 = FUN_00a8c760(0xb), iVar3 != 0)) &&
             (fVar1 = (float)param_1[0x249], !NAN(fVar1) && 10.0 < fVar1 != (fVar1 == 10.0))))))) {
          param_1[0x187] = 6;
          FUN_00aa4080(0x27a,0,0x3c888889,0x3f800000,0x8000000,0xbf800000,0x40000000);
        }
      }
    }
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    FUN_00b94790(0x3f800000,0x3f800000);
    return;
  }
  (**(code **)(*param_1 + 0x388))(0);
  return;
}

// 00B9B770  FUN_00b9b770  size=351  [callgraph]
void __fastcall FUN_00b9b770(int *param_1)

{
  int iVar1;
  
  FUN_00b884c0();
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x269,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b86010(1);
    FUN_00b7b270(0x3e99999a,0x393702d3,0x3f860a92,0);
    FUN_00b94fc0();
    param_1[0x248] = 0x40400000;
    param_1[0x9f4] = 0;
    param_1[0x9f6] = 0;
    param_1[0x988] = 0;
    param_1[0x9b5] = 0;
    param_1[0x2dd] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x469] = 1;
  iVar1 = FUN_00a8c760(5);
  if (iVar1 != 0) {
    FUN_00b7b270(0x3e99999a,0x393702d3,0x3e32b8c2,0);
  }
  iVar1 = FUN_00a92f90();
  if (*(int *)(iVar1 + 0xd0) + *(int *)(iVar1 + 0xc4) + *(int *)(iVar1 + 0xb8) != 0) {
    iVar1 = FUN_00e36060(0);
    if (iVar1 == 0) {
      FUN_00b94790(0x3f800000,0x3f800000);
      return;
    }
  }
  (**(code **)(*param_1 + 0x388))(0);
  return;
}

// 00B9BD60  FUN_00b9bd60  size=596  [callgraph]
void __fastcall FUN_00b9bd60(int *param_1)

{
  code *pcVar1;
  short sVar2;
  undefined **ppuVar3;
  int iVar4;
  int *piVar5;
  int local_10 [4];
  
  FUN_00b884c0();
  local_10[0] = 0x1cd;
  local_10[1] = 0x1cd;
  local_10[2] = 0x1ce;
  local_10[3] = 0x1cf;
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    sVar2 = FUN_00dde2d0(0,3);
    iVar4 = local_10[sVar2];
    if (param_1[0x186] == 0x70) {
      iVar4 = 0x1d2;
    }
    FUN_00aa4080(iVar4,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b86010(1);
    FUN_00b7b270(0x3e99999a,0x393702d3,0x3f860a92,0);
    FUN_00b94fc0();
    param_1[0x9f4] = 0;
    param_1[0x9f6] = 0;
    param_1[0x988] = 0;
    ppuVar3 = &PTR_DAT_018a80a8;
    do {
      piVar5 = (int *)*ppuVar3;
      if (*(int *)*ppuVar3 == iVar4) break;
      ppuVar3 = ppuVar3 + 1;
      piVar5 = (int *)0x0;
    } while ((int)ppuVar3 < 0x18a80d0);
    param_1[0x991] = (int)piVar5;
    param_1[0x2dd] = 0;
    param_1[0x9b5] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x469] = 1;
  iVar4 = FUN_00a8c760(5);
  if (iVar4 != 0) {
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      FUN_00a81330();
      piVar5 = (int *)FUN_00a7c8a0();
      if (((piVar5 != (int *)0x0) && (iVar4 = FUN_00b86410(), iVar4 != 0)) &&
         (iVar4 = (**(code **)(*piVar5 + 0x228))(), iVar4 != 0)) {
        FUN_00b7b270(0x3e99999a,0x393702d3,0x3e0efa35,0);
        goto LAB_00b9bf5b;
      }
    }
    if (90000.0 < (float)param_1[0x34a]) {
      pcVar1 = *(code **)(*param_1 + 0x308);
      param_1[0x23d] = param_1[0x34c];
      (*pcVar1)(0x3e99999a,0x3ae4c388,0x3e8efa35,0);
    }
  }
LAB_00b9bf5b:
  iVar4 = FUN_00a92f90();
  if ((*(int *)(iVar4 + 0xd0) + *(int *)(iVar4 + 0xc4) + *(int *)(iVar4 + 0xb8) != 0) &&
     (iVar4 = FUN_00e36060(0), iVar4 == 0)) {
    FUN_00b94790(0x3f800000,0x3f800000);
    return;
  }
  (**(code **)(*param_1 + 0x388))(0);
  return;
}

// 00B9BFD0  FUN_00b9bfd0  size=541  [callgraph]
void __fastcall FUN_00b9bfd0(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  FUN_00b884c0();
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    param_1[0x98a] = param_1[0x98a] + 1;
    uVar2 = 0x467;
    if (((DAT_01bea090 & 0x80000000) == 0) && (uVar2 = 0x474, param_1[0x98a] == 2)) {
      uVar2 = 0x475;
      param_1[0x98a] = 0;
    }
    FUN_00aa4080(uVar2,0,0x3e2aaaab,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b86010(1);
    FUN_00b7b270(0x3e99999a,0x393702d3,0x3f860a92,0);
    FUN_00b94fc0();
    param_1[0x9f4] = 0;
    param_1[0x9f6] = 0;
    param_1[0x988] = 0;
    param_1[0x991] = 0;
    param_1[0x9b5] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x469] = 1;
  iVar3 = FUN_00a8c760(5);
  if (iVar3 != 0) {
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      FUN_00a81330();
      piVar4 = (int *)FUN_00a7c8a0();
      if (piVar4 != (int *)0x0) {
        iVar3 = FUN_00b86410();
        if (iVar3 != 0) {
          iVar3 = (**(code **)(*piVar4 + 0x228))();
          if (iVar3 != 0) {
            FUN_00b7b270(0x3d4ccccd,0x393702d3,0x3d0efa35,0);
            goto LAB_00b9c19a;
          }
        }
      }
    }
    if (90000.0 < (float)param_1[0x34a]) {
      pcVar1 = *(code **)(*param_1 + 0x308);
      param_1[0x23d] = param_1[0x34c];
      (*pcVar1)(0x3d4ccccd,0x3ae4c388,0x3d0efa35,0);
    }
  }
LAB_00b9c19a:
  iVar3 = FUN_00a92f90();
  if (*(int *)(iVar3 + 0xd0) + *(int *)(iVar3 + 0xc4) + *(int *)(iVar3 + 0xb8) != 0) {
    iVar3 = FUN_00e36060(0);
    if (iVar3 == 0) {
      FUN_00b94790(0x3f800000,0x3f800000);
      return;
    }
  }
  (**(code **)(*param_1 + 0x388))(0);
  return;
}

// 00B9C1F0  FUN_00b9c1f0  size=1806  [callgraph]
void __fastcall FUN_00b9c1f0(int *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  float10 fVar5;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  FUN_00b884c0();
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    param_1[0x248] = 0;
    param_1[0x988] = 0;
    param_1[0x98a] = 1;
    FUN_00aa4080(0x188,0,0x3dcccccd,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    iVar2 = FUN_00a81330();
    if (iVar2 == 0) {
      FUN_00b86010(1);
    }
    FUN_00b7b270(0x3f800000,0x393702d3,0x40490fdb,0);
    FUN_00b94fc0();
    iVar2 = param_1[0x463];
    FUN_00e26e90();
    *(undefined4 *)(iVar2 + 0xe4) = 0x3e19999a;
    *(undefined4 *)(iVar2 + 0xe8) = 0x3e19999a;
    *(undefined4 *)(iVar2 + 0xec) = 0x3e19999a;
    FUN_00db8600(0x41a00000);
    FUN_00db85a0(0x428c0000);
    uStack_50 = 0xbf8147ae;
    uStack_4c = 0x3f828f5c;
    uStack_48 = 0x3fee147b;
    FUN_00db84e0(param_1[0x13c],0xffffffff,&uStack_50);
    uStack_b0 = 0xbca3d70a;
    uStack_ac = 0x3f1eb852;
    uStack_a8 = 0x3d8f5c29;
    FUN_00db8520(param_1[0x13c],0xffffffff,&uStack_b0);
    FUN_00db85a0(0x42200000);
    uStack_30 = 0x3fa00000;
    uStack_2c = 0x3f8147ae;
    uStack_28 = 0xbf028f5c;
    FUN_00db84e0(param_1[0x13c],0xffffffff,&uStack_30);
    uStack_90 = 0xbeae147b;
    uStack_8c = 0x3fa7ae14;
    uStack_88 = 0x3f9c28f6;
    FUN_00db8520(param_1[0x13c],0xffffffff,&uStack_90);
    fVar4 = (float10)FUN_00ddba30((float)param_1[0x25] - (float)param_1[0x34d]);
    fVar5 = (float10)1.5707964;
    if ((fVar4 <= (float10)0) || (fVar5 < fVar4)) {
      if (((float10)0 < fVar4) || (fVar4 <= (float10)-1.5707964)) {
        if ((fVar4 <= (float10)-3.1415927) || ((float10)-1.5707964 < fVar4)) {
          if ((fVar4 <= (float10)3.1415927) && (fVar5 < fVar4 != (fVar5 == fVar4))) {
            uStack_40 = 0x3fa147ae;
            uStack_3c = 0x3f91eb85;
            uStack_38 = 0x400c28f6;
            FUN_00db84e0(param_1[0x13c],0xffffffff,&uStack_40);
            uStack_20 = 0xbe800000;
            uStack_1c = 0x3f851eb8;
            uStack_18 = 0x3f000000;
            FUN_00db8520(param_1[0x13c],0xffffffff,&uStack_20);
          }
        }
        else {
          uStack_80 = 0xbfb70a3d;
          uStack_7c = 0x3f6b851f;
          uStack_78 = 0x3fe51eb8;
          FUN_00db84e0(param_1[0x13c],0xffffffff,&uStack_80);
          uStack_60 = 0x3ec7ae14;
          uStack_5c = 0x3f851eb8;
          uStack_58 = 0x3edc28f6;
          FUN_00db8520(param_1[0x13c],0xffffffff,&uStack_60);
        }
      }
      else {
        uStack_c0 = 0xbfd851ec;
        uStack_bc = 0x3fc8f5c3;
        uStack_b8 = 0xbfc28f5c;
        FUN_00db84e0(param_1[0x13c],0xffffffff,&uStack_c0);
        uStack_a0 = 0x3d4ccccd;
        uStack_9c = 0x3f851eb8;
        uStack_98 = 0x3f6e147b;
        FUN_00db8520(param_1[0x13c],0xffffffff,&uStack_a0);
      }
    }
    else {
      uStack_d0 = 0x3fae147b;
      uStack_cc = 0x3fd5c28f;
      uStack_c8 = 0xbf59999a;
      FUN_00db84e0(param_1[0x13c],0xffffffff,&uStack_d0);
      uStack_70 = 0xbe8a3d71;
      uStack_6c = 0x3f851eb8;
      uStack_68 = 0x3f6e147b;
      FUN_00db8520(param_1[0x13c],0xffffffff,&uStack_70);
    }
    param_1[0x9b5] = 0;
    param_1[0x2dd] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x469] = 1;
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00a81330();
    iVar2 = FUN_00a7c8a0();
    if (iVar2 != 0) {
      iVar2 = FUN_00a81330();
      if (iVar2 != 0) {
        FUN_00c15010(&fStack_e0);
      }
      FUN_00a8e880(&fStack_e0);
      (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e32b8c2,0);
      fStack_f0 = fStack_e0 - (float)param_1[0x10];
      fStack_ec = fStack_dc - (float)param_1[0x11];
      fStack_e8 = fStack_d8 - (float)param_1[0x12];
      fStack_e4 = fStack_d4 - (float)param_1[0x13];
      fVar1 = fStack_e8 * fStack_e8 + fStack_ec * fStack_ec + fStack_f0 * fStack_f0;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&fStack_f0,&fStack_f0);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fStack_f0 = 0.0;
        fStack_ec = 1.0;
        fStack_e8 = 0.0;
      }
      piVar3 = param_1 + 0x488;
      if (param_1[0x99b] == 0) {
        piVar3 = param_1 + 0x46c;
      }
      if (((fStack_d8 - (float)param_1[0x12]) * (fStack_d8 - (float)param_1[0x12]) +
           (fStack_dc - (float)param_1[0x11]) * (fStack_dc - (float)param_1[0x11]) +
           (fStack_e0 - (float)param_1[0x10]) * (fStack_e0 - (float)param_1[0x10]) <=
           ((float)piVar3[4] + 2.0) * ((float)piVar3[4] + 2.0)) &&
         (iVar2 = FUN_00a952e0(0,0x41800000), iVar2 != 0)) {
        if ((float)param_1[0xd15] <= 0.0) {
          param_1[0xd0f] = 0x41a00000;
          param_1[0xd10] = 0x3e4ccccd;
        }
        FUN_00db8600(0x41a00000);
      }
    }
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar2 = FUN_00a92f90();
  if ((*(int *)(iVar2 + 0xd0) + *(int *)(iVar2 + 0xc4) + *(int *)(iVar2 + 0xb8) == 0) ||
     (iVar2 = FUN_00e36060(0), iVar2 != 0)) {
    (**(code **)(*param_1 + 0x388))(0);
  }
  return;
}

// 00B9C900  FUN_00b9c900  size=419  [callgraph]
void __fastcall FUN_00b9c900(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x314))();
  FUN_00b884c0();
  if (param_1[0x187] == 0) {
    param_1[0x250] = 0;
    FUN_00aa4080(0x29e,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x25] = param_1[0x97f];
    param_1[0x23d] = param_1[0x97f];
    FUN_00b86010(1);
    FUN_00b7b270(0x3f800000,0x393702d3,0x40490fdb,0);
    FUN_00b94fc0();
    param_1[0x988] = param_1[0x988] + 1;
    if (5 < param_1[0x988]) {
      param_1[0x988] = 0;
    }
    if ((0.0 < (float)param_1[0xd07]) && (param_1[0xea8] != 0)) {
      *(undefined1 *)(param_1 + 0xb0c) = 2;
      param_1[0xb0b] = 0x42340000;
    }
    param_1[0x9b5] = 0;
    param_1[0x2dd] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x469] = 1;
  param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
  iVar1 = FUN_00a8c760(5);
  if (iVar1 != 0) {
    FUN_00b7b270(0x3dcccccd,0x3ae4c388,0x3e32b8c2,0);
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar1 = FUN_00a92f90();
  if ((*(int *)(iVar1 + 0xd0) + *(int *)(iVar1 + 0xc4) + *(int *)(iVar1 + 0xb8) != 0) &&
     (iVar1 = FUN_00e36060(0), iVar1 == 0)) {
    return;
  }
  (**(code **)(*param_1 + 0x388))(0);
  return;
}

// 00B9CAB0  FUN_00b9cab0  size=412  [callgraph]
void __fastcall FUN_00b9cab0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    param_1[0x250] = 0;
    FUN_00aa4080(0x29f,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x25] = param_1[0x97f];
    param_1[0x23d] = param_1[0x97f];
    FUN_00b86010(1);
    FUN_00b7b270(0x3f800000,0x393702d3,0x40490fdb,0);
    FUN_00b94fc0();
    param_1[0x988] = param_1[0x988] + 1;
    if (5 < param_1[0x988]) {
      param_1[0x988] = 0;
    }
    if ((0.0 < (float)param_1[0xd07]) && (param_1[0xea8] != 0)) {
      *(undefined1 *)(param_1 + 0xb0c) = 2;
      param_1[0xb0b] = 0x42340000;
    }
    param_1[0x2dd] = 0;
    param_1[0x9b5] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x469] = 1;
  param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
  iVar1 = FUN_00a8c760(5);
  if (iVar1 != 0) {
    FUN_00b7b270(0x3e99999a,0x393702d3,0x3e8efa35,0);
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar1 = FUN_00a92f90();
  if ((*(int *)(iVar1 + 0xd0) + *(int *)(iVar1 + 0xc4) + *(int *)(iVar1 + 0xb8) != 0) &&
     (iVar1 = FUN_00e36060(0), iVar1 == 0)) {
    return;
  }
  (**(code **)(*param_1 + 0x388))(0);
  return;
}

// 00B9CF00  FUN_00b9cf00  size=367  [callgraph]
void __fastcall FUN_00b9cf00(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x314))();
  FUN_00b884c0();
  if (param_1[0x187] == 0) {
    param_1[0x250] = 0;
    FUN_00aa4080(0x2c3,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x25] = param_1[0x97f];
    param_1[0x23d] = param_1[0x97f];
    FUN_00b86010(1);
    FUN_00b7b270(0x3f800000,0x393702d3,0x40490fdb,0);
    FUN_00b94fc0();
    param_1[0x988] = 0;
    param_1[0x9b5] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x469] = 1;
  param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
  iVar1 = FUN_00a8c760(5);
  if (iVar1 != 0) {
    FUN_00b7b270(0x3e99999a,0x393702d3,0x3e8efa35,0);
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar1 = FUN_00a92f90();
  if ((*(int *)(iVar1 + 0xd0) + *(int *)(iVar1 + 0xc4) + *(int *)(iVar1 + 0xb8) != 0) &&
     (iVar1 = FUN_00e36060(0), iVar1 == 0)) {
    return;
  }
  (**(code **)(*param_1 + 0x388))(0);
  return;
}

// 00B9D240  FUN_00b9d240  size=494  [callgraph]
void __fastcall FUN_00b9d240(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  
  (**(code **)(*param_1 + 0x314))();
  param_1[0xee8] = 1;
  FUN_00b884c0();
  if (param_1[0x187] == 0) {
    param_1[0x250] = 0;
    FUN_00aa4080(0x2a9,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b86010(1);
    FUN_00b7b270(0x3f800000,0x393702d3,0x40490fdb,0);
    FUN_00b94fc0();
    param_1[0x2dd] = 0;
    param_1[0x9b5] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x469] = 1;
  iVar2 = FUN_00a8c760(5);
  if (iVar2 != 0) {
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      FUN_00a81330();
      piVar3 = (int *)FUN_00a7c8a0();
      if (((piVar3 != (int *)0x0) && (iVar2 = FUN_00b86410(), iVar2 != 0)) &&
         (iVar2 = (**(code **)(*piVar3 + 0x228))(), iVar2 != 0)) {
        FUN_00b7b270(0x3e99999a,0x393702d3,0x3e8efa35,0);
        goto LAB_00b9d3de;
      }
    }
    if (90000.0 < (float)param_1[0x34a]) {
      pcVar1 = *(code **)(*param_1 + 0x308);
      param_1[0x23d] = param_1[0x34c];
      (*pcVar1)(0x3e99999a,0x3ae4c388,0x3e8efa35,0);
    }
  }
LAB_00b9d3de:
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar2 = FUN_00a92f90();
  if ((*(int *)(iVar2 + 0xd0) + *(int *)(iVar2 + 0xc4) + *(int *)(iVar2 + 0xb8) != 0) &&
     (iVar2 = FUN_00e36060(0), iVar2 == 0)) {
    return;
  }
  (**(code **)(*param_1 + 0x388))(0);
  return;
}

// 00B9D430  FUN_00b9d430  size=480  [callgraph]
void __fastcall FUN_00b9d430(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  
  (**(code **)(*param_1 + 0x314))();
  param_1[0xee8] = 1;
  if (param_1[0x187] == 0) {
    param_1[0x250] = 0;
    FUN_00aa4080(0x4b,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b86010(1);
    FUN_00b7b270(0x3f800000,0x393702d3,0x40490fdb,0);
    FUN_00b94fc0();
    param_1[0x9f4] = 0;
    param_1[0x2dd] = 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x469] = 1;
  iVar2 = FUN_00a8c760(5);
  if (iVar2 != 0) {
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      FUN_00a81330();
      piVar3 = (int *)FUN_00a7c8a0();
      if (((piVar3 != (int *)0x0) && (iVar2 = FUN_00b86410(), iVar2 != 0)) &&
         (iVar2 = (**(code **)(*piVar3 + 0x228))(), iVar2 != 0)) {
        FUN_00b7b270(0x3e99999a,0x393702d3,0x3e8efa35,0);
        goto LAB_00b9d5c0;
      }
    }
    if (90000.0 < (float)param_1[0x34a]) {
      pcVar1 = *(code **)(*param_1 + 0x308);
      param_1[0x23d] = param_1[0x34c];
      (*pcVar1)(0x3e99999a,0x3ae4c388,0x3e8efa35,0);
    }
  }
LAB_00b9d5c0:
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar2 = FUN_00a92f90();
  if ((*(int *)(iVar2 + 0xd0) + *(int *)(iVar2 + 0xc4) + *(int *)(iVar2 + 0xb8) != 0) &&
     (iVar2 = FUN_00e36060(0), iVar2 == 0)) {
    return;
  }
  (**(code **)(*param_1 + 0x388))(0);
  return;
}

// 00B9D610  FUN_00b9d610  size=287  [callgraph]
undefined4 __fastcall FUN_00b9d610(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((DAT_01bea090 & 0x40000) == 0) {
    iVar1 = FUN_00b876d0();
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x2790) = 0;
      FUN_00a8caf0(0x8a,0,0,0);
      *(undefined4 *)(param_1 + 0x2620) = 0;
      return 1;
    }
    iVar1 = FUN_00b8f1b0();
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00c13920();
      iVar1 = (**(code **)(*piVar2 + 0x6c))();
      if (iVar1 != 1) {
        piVar2 = (int *)FUN_00c13920();
        iVar1 = (**(code **)(*piVar2 + 0x6c))();
        if (iVar1 != 2) {
          piVar2 = (int *)FUN_00c13920();
          iVar1 = (**(code **)(*piVar2 + 0x6c))();
          if (iVar1 != 3) {
            piVar2 = (int *)FUN_00c13920();
            iVar1 = (**(code **)(*piVar2 + 0x6c))();
            if (iVar1 != 4) {
              piVar2 = (int *)FUN_00c13920();
              iVar1 = (**(code **)(*piVar2 + 0x6c))();
              if (iVar1 != 7) {
                piVar2 = (int *)FUN_00c13920();
                iVar1 = (**(code **)(*piVar2 + 0x6c))();
                if (iVar1 != 5) {
                  piVar2 = (int *)FUN_00c13920();
                  iVar1 = (**(code **)(*piVar2 + 0x6c))();
                  if (iVar1 != 6) {
                    return 0;
                  }
                }
                FUN_00a8caf0(0x86,0,0,0);
                *(undefined4 *)(param_1 + 0x2620) = 0;
                return 1;
              }
            }
          }
        }
      }
      FUN_00a8caf0(0x80,0,0,0);
      return 1;
    }
  }
  return 0;
}

// 00B9D730  FUN_00b9d730  size=415  [callgraph]
void __fastcall FUN_00b9d730(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  undefined1 auStack_20 [28];
  
  if (param_1[0x2dd] != 0) {
    param_1[0x4fe] = 0;
  }
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    FUN_00a94bc0(8,0x3e088889);
    iVar3 = FUN_00a81330();
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar2 + 0x494,0,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b94fc0();
    param_1[0x250] = 0;
    param_1[0x502] = 0x701;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar3 = FUN_00b7b310();
  if ((iVar3 == 0) || (iVar3 = FUN_00a81330(), iVar3 == 0)) {
    if (param_1[0x504] != 0) goto LAB_00b9d86f;
    fVar1 = (float)param_1[0x24a];
  }
  else {
    FUN_00c15010(auStack_20);
    FUN_00a8e880(auStack_20);
    fVar1 = (float)param_1[0x23d];
    param_1[0x24a] = (int)fVar1;
  }
  fVar4 = (float10)FUN_00ddba30(fVar1 - (float)param_1[0x25]);
  fVar4 = (float10)FUN_00ddba30((float)(fVar4 * (float10)0.3 + (float10)(float)param_1[0x25]));
  param_1[0x25] = (int)(float)fVar4;
LAB_00b9d86f:
  param_1[0x9b7] = 0x40400000;
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar3 = FUN_00a92f90();
  if ((*(int *)(iVar3 + 0xd0) + *(int *)(iVar3 + 0xc4) + *(int *)(iVar3 + 0xb8) != 0) &&
     (iVar3 = FUN_00e36060(0), iVar3 == 0)) {
    return;
  }
  FUN_00a8caf0(0x7d,0,0,0);
  return;
}

// 00B9D8D0  FUN_00b9d8d0  size=977  [callgraph]
void __fastcall FUN_00b9d8d0(int *param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float fVar7;
  float fVar8;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (param_1[0x2dd] != 0) {
    param_1[0x4fe] = 0;
  }
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    FUN_00b94fc0();
    FUN_00a94bc0(8,0x3e088889);
    FUN_00a9f560("GREKAMAE",0x3e088889,0,0);
    iVar2 = FUN_00a81330();
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = FUN_00a7c8a0();
    }
    FUN_00a94a40(iVar1 + 0x494,0xffffffff,0,1,0,0,1,0x3e088889,0);
    iVar2 = FUN_00a81330();
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = FUN_00a7c8a0();
    }
    FUN_00a94a40(iVar1 + 0x494,0xffffffff,0,0,0,0,2,0x3e088889,0);
    iVar2 = FUN_00a81330();
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = FUN_00a7c8a0();
    }
    FUN_00a94a40(iVar1 + 0x494,0xffffffff,0,0xffffffff,0,0,3,0x3e088889,0);
    FUN_00a947e0(0,(float)param_1[0x9e3] * 0.95492965,0,0);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x9b7] = 0x40400000;
  FUN_00a947e0(0,(float)param_1[0x9e3] * 0.95492965,0,0);
  FUN_00b94790(0x3f800000,0x3f800000);
  switchD_0080dbae::default();
  uStack_20 = 0x3e4ccccd;
  puVar5 = &uStack_20;
  uStack_1c = 0x3fe00000;
  uStack_18 = 0x3e99999a;
  puVar6 = puVar5;
  D3DXVec3TransformNormal(puVar5,puVar5,param_1 + 4);
  iVar2 = FUN_00a12210(0xf00);
  uStack_20 = *(undefined4 *)(iVar2 + 0x4c);
  fVar3 = (float10)FUN_00ddba30((float)param_1[0x9e3] - 0.34906584);
  FUN_00b8f5b0(&stack0xffffffd4,(float)fVar3,param_1[0xcff]);
  fVar7 = (float)param_1[0xcfd];
  fVar8 = (float)param_1[0xcfe] * -1.0;
  fVar3 = (float10)FUN_00da7500(puVar5,puVar6,fVar7,fVar8);
  fVar7 = (float)(fVar3 * (float10)fVar7);
  fVar3 = (float10)FUN_00da7570(puVar5,puVar6,fVar7);
  fVar3 = fVar3 * (float10)fVar8;
  fVar8 = (float)fVar3;
  fVar4 = (float10)200.0;
  if (fVar4 < (float10)(float)param_1[0x344] != (fVar4 == (float10)(float)param_1[0x344])) {
    fVar3 = (float10)FUN_00ddba30((float)(((float10)(float)param_1[0x344] - fVar4) *
                                          (float10)0.00125 * fVar3 + (float10)(float)param_1[0x25]))
    ;
    param_1[0x25] = (int)(float)fVar3;
    fVar3 = (float10)fVar8;
  }
  if ((float)param_1[0x344] <= -200.0) {
    fVar3 = (float10)FUN_00ddba30((float)(((float10)(float)param_1[0x344] + (float10)200.0) *
                                          (float10)0.00125 * fVar3 + (float10)(float)param_1[0x25]))
    ;
    param_1[0x25] = (int)(float)fVar3;
  }
  fVar8 = (float)param_1[0x345];
  if (!NAN(fVar8) && 200.0 < fVar8 != (fVar8 == 200.0)) {
    fVar3 = (float10)FUN_00ddba30(((float)param_1[0x345] - 200.0) * 0.00125 * fVar7 +
                                  (float)param_1[0x9e3]);
    param_1[0x9e3] = (int)(float)fVar3;
  }
  if ((float)param_1[0x345] <= -200.0) {
    fVar3 = (float10)FUN_00ddba30(((float)param_1[0x345] + 200.0) * 0.00125 * fVar7 +
                                  (float)param_1[0x9e3]);
    param_1[0x9e3] = (int)(float)fVar3;
  }
  if ((float)param_1[0x9e3] < -0.87266463) {
    param_1[0x9e3] = -0x40a0990d;
  }
  if ((float)param_1[0x9e3] <= 1.0471976) {
    return;
  }
  param_1[0x9e3] = 0x3f860a92;
  return;
}

// 00B9DCB0  FUN_00b9dcb0  size=1775  [callgraph]
void __fastcall FUN_00b9dcb0(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float fVar8;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (param_1[0x2dd] != 0) {
    param_1[0x4fe] = 0;
  }
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    FUN_00b94fc0();
    FUN_00a9f4c0("GUNKAMAE",0x3e088889,0x2000,0);
    iVar3 = FUN_00a81330();
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = FUN_00a7c8a0();
    }
    FUN_00a94a40(iVar2 + 0x494,0xffffffff,0,0,1,0,1,0x3e088889,0x2000);
    iVar3 = FUN_00a81330();
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = FUN_00a7c8a0();
    }
    FUN_00a94a40(iVar2 + 0x494,0xffffffff,0,0,0,0,2,0x3e088889,0x2000);
    iVar3 = FUN_00a81330();
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = FUN_00a7c8a0();
    }
    FUN_00a94a40(iVar2 + 0x494,0xffffffff,0,0,0xffffffff,0,3,0x3e088889,0x2000);
    iVar3 = FUN_00a81330();
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = FUN_00a7c8a0();
    }
    FUN_00a94a40(iVar2 + 0x494,0xffffffff,0,0,1,1,4,0x3e088889,0x2000);
    iVar3 = FUN_00a81330();
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = FUN_00a7c8a0();
    }
    FUN_00a94a40(iVar2 + 0x494,0xffffffff,0,0,0,1,5,0x3e088889,0x2000);
    iVar3 = FUN_00a81330();
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = FUN_00a7c8a0();
    }
    FUN_00a94a40(iVar2 + 0x494,0xffffffff,0,0,0xffffffff,1,6,0x3e088889,0x2000);
    iVar3 = FUN_00a81330();
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = FUN_00a7c8a0();
    }
    FUN_00a94a40(iVar2 + 0x494,0xffffffff,0,0,1,0xffffffff,7,0x3e088889,0x2000);
    iVar3 = FUN_00a81330();
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = FUN_00a7c8a0();
    }
    FUN_00a94a40(iVar2 + 0x494,0xffffffff,0,0,0,0xffffffff,8,0x3e088889,0x2000);
    iVar3 = FUN_00a81330();
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = FUN_00a7c8a0();
    }
    FUN_00a94a40(iVar2 + 0x494,0xffffffff,0,0,0xffffffff,0xffffffff,9,0x3e088889,0x2000);
    iVar3 = FUN_00a81330();
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = FUN_00a7c8a0();
    }
    FUN_00a94a40(iVar2 + 0x494,0xffffffff,0,1,1,0,0xd,0x3e088889,0x2000);
    iVar3 = FUN_00a81330();
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = FUN_00a7c8a0();
    }
    FUN_00a94a40(iVar2 + 0x494,0xffffffff,0,1,0,0,0xe,0x3e088889,0x2000);
    iVar3 = FUN_00a81330();
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = FUN_00a7c8a0();
    }
    FUN_00a94a40(iVar2 + 0x494,0xffffffff,0,1,0xffffffff,0,0xf,0x3e088889,0x2000);
    iVar3 = FUN_00a81330();
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = FUN_00a7c8a0();
    }
    FUN_00a94a40(iVar2 + 0x494,0xffffffff,0,0xffffffff,1,0,10,0x3e088889,0x2000);
    iVar3 = FUN_00a81330();
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = FUN_00a7c8a0();
    }
    FUN_00a94a40(iVar2 + 0x494,0xffffffff,0,0xffffffff,0,0,0xb,0x3e088889,0x2000);
    iVar3 = FUN_00a81330();
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = FUN_00a7c8a0();
    }
    FUN_00a94a40(iVar2 + 0x494,0xffffffff,0,0xffffffff,0xffffffff,0,0xc,0x3e088889,0x2000);
    FUN_00a947e0(0,(float)param_1[0x342] * 0.001,(float)param_1[0x9e3] * 0.95492965,
                 (float)param_1[0x343] * -0.001);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x9b7] = 0x40400000;
  FUN_00a947e0(0,(float)param_1[0x342] * 0.001,(float)param_1[0x9e3] * 0.95492965,
               (float)param_1[0x343] * -0.001);
  FUN_00b94790(0x3f800000,0x3f800000);
  uStack_20 = 0x3e4ccccd;
  puVar6 = &uStack_20;
  uStack_1c = 0x3fe00000;
  uStack_18 = 0x3e99999a;
  puVar7 = puVar6;
  D3DXVec3TransformNormal(puVar6,puVar6,param_1 + 4);
  iVar3 = FUN_00a12210(0xf00);
  uStack_20 = *(undefined4 *)(iVar3 + 0x4c);
  fVar4 = (float10)FUN_00ddba30((float)param_1[0x9e3] - 0.34906584);
  FUN_00b8f5b0(&stack0xffffffd4,(float)fVar4,param_1[0xcff]);
  fVar8 = (float)param_1[0xcfd];
  fVar1 = (float)param_1[0xcfe];
  fVar4 = (float10)FUN_00da7500();
  fVar8 = (float)(fVar4 * (float10)fVar8);
  fVar4 = (float10)FUN_00da7570(puVar6,puVar7,fVar8);
  fVar4 = fVar4 * (float10)(fVar1 * -1.0);
  fVar5 = (float10)200.0;
  if (fVar5 < (float10)(float)param_1[0x344] != (fVar5 == (float10)(float)param_1[0x344])) {
    fVar5 = (float10)FUN_00ddba30((float)(((float10)(float)param_1[0x344] - fVar5) *
                                          (float10)0.00125 * fVar4 + (float10)(float)param_1[0x25]))
    ;
    param_1[0x25] = (int)(float)fVar5;
    fVar4 = (float10)(float)fVar4;
  }
  if ((float)param_1[0x344] <= -200.0) {
    fVar4 = (float10)FUN_00ddba30((float)(((float10)(float)param_1[0x344] + (float10)200.0) *
                                          (float10)0.00125 * fVar4 + (float10)(float)param_1[0x25]))
    ;
    param_1[0x25] = (int)(float)fVar4;
  }
  fVar1 = (float)param_1[0x345];
  if (!NAN(fVar1) && 200.0 < fVar1 != (fVar1 == 200.0)) {
    fVar4 = (float10)FUN_00ddba30(((float)param_1[0x345] - 200.0) * 0.00125 * fVar8 +
                                  (float)param_1[0x9e3]);
    param_1[0x9e3] = (int)(float)fVar4;
  }
  if ((float)param_1[0x345] <= -200.0) {
    fVar4 = (float10)FUN_00ddba30(((float)param_1[0x345] + 200.0) * 0.00125 * fVar8 +
                                  (float)param_1[0x9e3]);
    param_1[0x9e3] = (int)(float)fVar4;
  }
  if ((float)param_1[0x9e3] < -0.87266463) {
    param_1[0x9e3] = -0x40a0990d;
  }
  if ((float)param_1[0x9e3] <= 1.0471976) {
    return;
  }
  param_1[0x9e3] = 0x3f860a92;
  return;
}

// 00B9E3A0  FUN_00b9e3a0  size=262  [callgraph]
void __fastcall FUN_00b9e3a0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1[0x2dd] != 0) {
    param_1[0x4fe] = 0;
  }
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    uVar3 = 0x15;
    if (param_1[0x2dd] != 0) {
      uVar3 = 0x16;
    }
    iVar2 = FUN_00a81330();
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar1 + 0x494,uVar3,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b94fc0();
    param_1[0x250] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x9b7] = 0x40400000;
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar2 = FUN_00a92f90();
  if ((*(int *)(iVar2 + 0xd0) + *(int *)(iVar2 + 0xc4) + *(int *)(iVar2 + 0xb8) != 0) &&
     (iVar2 = FUN_00e36060(0), iVar2 == 0)) {
    return;
  }
  (**(code **)(*param_1 + 0x388))(0);
  return;
}

// 00B9E4B0  FUN_00b9e4b0  size=780  [callgraph]
void __fastcall FUN_00b9e4b0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  float fStack_38;
  undefined1 auStack_34 [4];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined1 auStack_20 [28];
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x4fe] = 0;
  (*pcVar1)();
  if (param_1[0x187] == 0) {
    FUN_00a94bc0(8,0x3dcccccd);
    FUN_00a9f560("GUNKAMAE",0x3dcccccd,0x8000000,0);
    iVar4 = FUN_00a81330();
    iVar2 = 0;
    if (iVar4 != 0) {
      iVar2 = FUN_00a7c8a0();
    }
    FUN_00a94a40(iVar2 + 0x494,0xffffffff,0,1,0,0,0x19,0x3dcccccd,0x8000000);
    iVar4 = FUN_00a81330();
    iVar2 = 0;
    if (iVar4 != 0) {
      iVar2 = FUN_00a7c8a0();
    }
    FUN_00a94a40(iVar2 + 0x494,0xffffffff,0,0,0,0,0,0x3dcccccd,0x8000000);
    iVar4 = FUN_00a81330();
    iVar2 = 0;
    if (iVar4 != 0) {
      iVar2 = FUN_00a7c8a0();
    }
    FUN_00a94a40(iVar2 + 0x494,0xffffffff,0,0xffffffff,0,0,0x18,0x3dcccccd,0x8000000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b94fc0();
    param_1[0x250] = 0;
    piVar3 = (int *)FUN_00c13920();
    (**(code **)(*piVar3 + 0x6c))();
    param_1[0x502] = 0x701;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00a947e0(0,(float)param_1[0x9e3] * 1.2732395,0,0);
  iVar4 = FUN_00b7b310();
  if ((iVar4 == 0) || (iVar4 = FUN_00a81330(), iVar4 == 0)) {
    if (param_1[0x504] != 0) goto LAB_00b9e726;
  }
  else {
    FUN_00c15010(auStack_20);
    FUN_00a8e880(auStack_20);
    param_1[0x249] = param_1[0x23d];
    fStack_30 = 0.0;
    fStack_2c = 1.5;
    fStack_28 = -0.5;
    D3DXVec3TransformNormal(&fStack_30,&fStack_30,param_1 + 4);
    fStack_30 = (float)param_1[0x10] + fStack_30;
    fStack_2c = (float)param_1[0x11] + fStack_2c;
    fStack_28 = (float)param_1[0x12] + fStack_28;
    thunk_FUN_00dde510(&fStack_38,auStack_34,auStack_20,&fStack_30);
    param_1[0x9e3] = (int)(fStack_38 * -1.0);
  }
  fVar5 = (float10)FUN_00ddba30((float)param_1[0x249] - (float)param_1[0x25]);
  fVar5 = (float10)FUN_00ddba30((float)(fVar5 * (float10)0.3 + (float10)(float)param_1[0x25]));
  param_1[0x25] = (int)(float)fVar5;
LAB_00b9e726:
  param_1[0x9b7] = 0x40400000;
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar4 = FUN_00a92f90();
  if ((*(int *)(iVar4 + 0xd0) + *(int *)(iVar4 + 0xc4) + *(int *)(iVar4 + 0xb8) == 0) ||
     (iVar4 = FUN_00e36060(0), iVar4 != 0)) {
    FUN_00a8caf0(0x83,0,0,0);
    if ((param_1[0x33e] & param_1[0x38f]) != 0) {
      param_1[0x504] = 0;
    }
    if (param_1[0x504] == 1) {
      FUN_00a8caf0(0x85,0,0,0);
    }
  }
  return;
}

// 00B9E7C0  FUN_00b9e7c0  size=243  [callgraph]
void __fastcall FUN_00b9e7c0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    uVar3 = 2;
    if (param_1[0x2dd] != 0) {
      uVar3 = 7;
    }
    iVar2 = FUN_00a81330();
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar1 + 0x494,uVar3,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b94fc0();
    param_1[0x250] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x9b7] = 0x40400000;
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar2 = FUN_00a92f90();
  if ((*(int *)(iVar2 + 0xd0) + *(int *)(iVar2 + 0xc4) + *(int *)(iVar2 + 0xb8) != 0) &&
     (iVar2 = FUN_00e36060(0), iVar2 == 0)) {
    return;
  }
  (**(code **)(*param_1 + 0x388))(0);
  return;
}

// 00B9E8C0  FUN_00b9e8c0  size=394  [callgraph]
void __fastcall FUN_00b9e8c0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x2e0] = 1;
  (*pcVar1)();
  if (param_1[0x187] == 0) {
    iVar4 = FUN_00a81330();
    iVar2 = 0;
    if (iVar4 != 0) {
      iVar2 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar2 + 0x494,0x10,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b94fc0();
    param_1[0x9b5] = 0;
    param_1[0x250] = 0;
    param_1[0x502] = 0x701;
    piVar3 = (int *)FUN_00c13920();
    iVar4 = (**(code **)(*piVar3 + 0x6c))();
    if (iVar4 == 8) {
      iVar4 = FUN_00a81330();
      iVar2 = 0;
      if (iVar4 != 0) {
        iVar2 = FUN_00a7c8a0();
      }
      iVar4 = FUN_00a81330();
      if (iVar4 != 0) {
        FUN_00a7c8a0();
      }
      FUN_00a9f3c0(iVar2 + 0x494,0x21,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
      piVar3 = (int *)FUN_00c209f0();
      (**(code **)(*piVar3 + 0x14))(8);
    }
    param_1[0x2dd] = 1;
    FUN_00b7fa30(1);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x9b7] = 0x40400000;
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    FUN_00a8caf0(0x8b,0,0,0);
  }
  return;
}

// 00B9EA50  FUN_00b9ea50  size=312  [callgraph]
void __fastcall FUN_00b9ea50(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x2e0] = 1;
  (*pcVar1)();
  iVar5 = 0;
  if (param_1[0x187] == 0) {
    iVar2 = FUN_00a81330();
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar3 + 0x494,0,0,0x3d888889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b94fc0();
    param_1[0x250] = 0;
    param_1[0x502] = 0x701;
    piVar4 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar4 + 0x6c))();
    if (iVar2 == 8) {
      iVar2 = FUN_00a81330();
      if (iVar2 != 0) {
        iVar5 = FUN_00a7c8a0();
      }
      iVar2 = FUN_00a81330();
      if (iVar2 != 0) {
        FUN_00a7c8a0();
      }
      FUN_00a9f3c0(iVar5 + 0x494,0x11,0,0x3d888889,0x3f800000,0,0,0x3f800000);
    }
    param_1[0x2dd] = 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x9b7] = 0x40400000;
  FUN_00b94790(0x3f800000,0x3f800000);
  return;
}

// 00B9EB90  FUN_00b9eb90  size=824  [callgraph]
void __fastcall FUN_00b9eb90(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_20 [28];
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x2e1] = 1;
  (*pcVar1)();
  switch(param_1[0x187]) {
  case 0:
    iVar5 = FUN_00a81330();
    iVar2 = 0;
    if (iVar5 != 0) {
      iVar2 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar2 + 0x494,1,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b94fc0();
    param_1[0x250] = 0;
    piVar4 = (int *)FUN_00c13920();
    iVar5 = (**(code **)(*piVar4 + 0x6c))();
    if (iVar5 == 8) {
      iVar5 = FUN_00b7d110();
      uVar11 = 0x3f800000;
      iVar5 = iVar5 + 0x494;
      uVar12 = 0;
      uVar10 = 0x8000000;
      uVar9 = 0x3f800000;
      uVar8 = 0x3d888889;
      uVar7 = 0;
      uVar6 = 0x12;
      FUN_00b7d110(iVar5,0x12,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
      FUN_00a9f3c0(iVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar12,uVar11);
    }
  case 1:
    param_1[0x9b7] = 0x40400000;
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    iVar5 = FUN_00a81330();
    iVar2 = 0;
    if (iVar5 != 0) {
      iVar2 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar2 + 0x494,2,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    piVar4 = (int *)FUN_00c13920();
    iVar5 = (**(code **)(*piVar4 + 0x6c))();
    if (iVar5 == 8) {
      iVar5 = FUN_00b7d110();
      uVar11 = 0x3f800000;
      iVar5 = iVar5 + 0x494;
      uVar12 = 0;
      uVar10 = 0;
      uVar9 = 0x3f800000;
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 0x13;
      FUN_00b7d110(iVar5,0x13,0,0,0x3f800000,0,0,0x3f800000);
      FUN_00a9f3c0(iVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar12,uVar11);
    }
  case 3:
    param_1[0x9b7] = 0x40400000;
    FUN_00b94790(0x3f800000,0x3f800000);
    break;
  case 4:
    iVar5 = 4;
    iVar2 = FUN_00b8afd0(auStack_20);
    if (iVar2 == 2) {
      iVar5 = 3;
    }
    iVar2 = FUN_00a81330();
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar3 + 0x494,iVar5,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    piVar4 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar4 + 0x6c))();
    if (iVar2 == 8) {
      iVar2 = FUN_00b7d110();
      uVar12 = 0x3f800000;
      iVar5 = iVar5 + 0x11;
      uVar10 = 0;
      iVar2 = iVar2 + 0x494;
      uVar9 = 0x8000000;
      uVar8 = 0x3f800000;
      uVar7 = 0x3d888889;
      uVar6 = 0;
      FUN_00b7d110(iVar2,iVar5,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
      FUN_00a9f3c0(iVar2,iVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar12);
    }
  case 5:
    param_1[0x9b7] = 0x40400000;
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      FUN_00a8caf0(0x8b,0,0,0);
    }
  }
  pcVar1 = *(code **)(*param_1 + 0x308);
  param_1[0x23d] = param_1[0x34c];
  (*pcVar1)(0x3dcccccd,0x3ae4c388,0x3e0efa35,0);
  return;
}

// 00B9EEE0  FUN_00b9eee0  size=825  [callgraph]
void __fastcall FUN_00b9eee0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_20 [28];
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x2e1] = 1;
  (*pcVar1)();
  switch(param_1[0x187]) {
  case 0:
    iVar5 = FUN_00a81330();
    iVar2 = 0;
    if (iVar5 != 0) {
      iVar2 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar2 + 0x494,5,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b94fc0();
    param_1[0x250] = 0;
    piVar4 = (int *)FUN_00c13920();
    iVar5 = (**(code **)(*piVar4 + 0x6c))();
    if (iVar5 == 8) {
      iVar5 = FUN_00b7d110();
      uVar11 = 0x3f800000;
      iVar5 = iVar5 + 0x494;
      uVar12 = 0;
      uVar10 = 0x8000000;
      uVar9 = 0x3f800000;
      uVar8 = 0x3d888889;
      uVar7 = 0;
      uVar6 = 0x16;
      FUN_00b7d110(iVar5,0x16,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
      FUN_00a9f3c0(iVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar12,uVar11);
    }
  case 1:
    param_1[0x9b7] = 0x40400000;
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    iVar5 = FUN_00a81330();
    iVar2 = 0;
    if (iVar5 != 0) {
      iVar2 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar2 + 0x494,6,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    piVar4 = (int *)FUN_00c13920();
    iVar5 = (**(code **)(*piVar4 + 0x6c))();
    if (iVar5 == 8) {
      iVar5 = FUN_00b7d110();
      uVar11 = 0x3f800000;
      iVar5 = iVar5 + 0x494;
      uVar12 = 0;
      uVar10 = 0;
      uVar9 = 0x3f800000;
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 0x17;
      FUN_00b7d110(iVar5,0x17,0,0,0x3f800000,0,0,0x3f800000);
      FUN_00a9f3c0(iVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar12,uVar11);
    }
  case 3:
    param_1[0x9b7] = 0x40400000;
    FUN_00b94790(0x3f800000,0x3f800000);
    break;
  case 4:
    iVar5 = 8;
    iVar2 = FUN_00b8afd0(auStack_20);
    if (iVar2 == 2) {
      iVar5 = 7;
    }
    iVar2 = FUN_00a81330();
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar3 + 0x494,iVar5,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    piVar4 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar4 + 0x6c))();
    if (iVar2 == 8) {
      iVar2 = FUN_00b7d110();
      uVar12 = 0x3f800000;
      iVar5 = iVar5 + 0x11;
      uVar10 = 0;
      iVar2 = iVar2 + 0x494;
      uVar9 = 0x8000000;
      uVar8 = 0x3f800000;
      uVar7 = 0x3d888889;
      uVar6 = 0;
      FUN_00b7d110(iVar2,iVar5,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
      FUN_00a9f3c0(iVar2,iVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar12);
    }
  case 5:
    param_1[0x9b7] = 0x40400000;
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      FUN_00a8caf0(0x8b,0,0,0);
    }
  }
  pcVar1 = *(code **)(*param_1 + 0x308);
  param_1[0x23d] = param_1[0x34c];
  (*pcVar1)(0x3d75c28f,0x3ae4c388,0x3d8efa35,0);
  return;
}

// 00B9F3C0  FUN_00b9f3c0  size=484  [callgraph]
void __fastcall FUN_00b9f3c0(int *param_1)

{
  code *pcVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x2e0] = 1;
  (*pcVar1)();
  if (param_1[0x187] == 0) {
    iVar5 = FUN_00a81330();
    iVar3 = 0;
    if (iVar5 != 0) {
      iVar3 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar3 + 0x494,0xb,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b94fc0();
    param_1[0x250] = 0;
    param_1[0x502] = 0x701;
    piVar4 = (int *)FUN_00c13920();
    iVar5 = (**(code **)(*piVar4 + 0x6c))();
    if (iVar5 == 8) {
      iVar5 = FUN_00a81330();
      iVar3 = 0;
      if (iVar5 != 0) {
        iVar3 = FUN_00a7c8a0();
      }
      iVar5 = FUN_00a81330();
      if (iVar5 != 0) {
        FUN_00a7c8a0();
      }
      FUN_00a9f3c0(iVar3 + 0x494,0x1c,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
    }
    param_1[0x9e5] = 0;
    param_1[0x9e6] = param_1[0x9e7];
    param_1[0x251] = 0;
    param_1[0x248] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x9b7] = 0x40400000;
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar5 = FUN_00a94ce0(0);
  if (iVar5 != 0) {
    FUN_00a8caf0(0x91,0,0,0);
  }
  if (param_1[0x251] == 0) {
    fVar6 = (float10)FUN_00ddba30((float)param_1[0x244] * 0.034906585 + (float)param_1[0x25]);
    param_1[0x25] = (int)(float)fVar6;
    fVar2 = (float)param_1[0x244] * 0.034906585 + (float)param_1[0x248];
    param_1[0x248] = (int)fVar2;
    if (1.5707964 <= fVar2) {
      param_1[0x251] = 1;
    }
  }
  return;
}

// 00B9F5B0  FUN_00b9f5b0  size=349  [callgraph]
void __fastcall FUN_00b9f5b0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x2e0] = 1;
  (*pcVar1)();
  if (param_1[0x187] == 0) {
    iVar4 = FUN_00a81330();
    iVar2 = 0;
    if (iVar4 != 0) {
      iVar2 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar2 + 0x494,0xf,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b94fc0();
    param_1[0x250] = 0;
    param_1[0x502] = 0x701;
    piVar3 = (int *)FUN_00c13920();
    iVar4 = (**(code **)(*piVar3 + 0x6c))();
    if (iVar4 == 8) {
      iVar4 = FUN_00a81330();
      iVar2 = 0;
      if (iVar4 != 0) {
        iVar2 = FUN_00a7c8a0();
      }
      iVar4 = FUN_00a81330();
      if (iVar4 != 0) {
        FUN_00a7c8a0();
      }
      FUN_00a9f3c0(iVar2 + 0x494,0x20,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
    }
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x9b7] = 0x40400000;
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    FUN_00a8caf0(0x8b,0,0,0);
  }
  return;
}

// 00B9F710  FUN_00b9f710  size=318  [callgraph]
void __fastcall FUN_00b9f710(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x2e0] = 1;
  (*pcVar1)();
  if (param_1[0x187] == 0) {
    iVar2 = FUN_00a81330();
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar3 + 0x494,0xc,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b94fc0();
    param_1[0x250] = 0;
    param_1[0x502] = 0x701;
    piVar4 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar4 + 0x6c))();
    if (iVar2 == 8) {
      iVar2 = FUN_00a81330();
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = FUN_00a7c8a0();
      }
      iVar2 = FUN_00a81330();
      if (iVar2 != 0) {
        FUN_00a7c8a0();
      }
      FUN_00a9f3c0(iVar3 + 0x494,0x1d,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
    }
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x9b7] = 0x40400000;
  FUN_00b94790(0x3f800000,0x3f800000);
  return;
}

// 00B9F850  FUN_00b9f850  size=755  [callgraph]
void __fastcall FUN_00b9f850(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar1 = (float)param_1[0x9e6];
  param_1[0x2e1] = 1;
  param_1[0x9e6] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] < 0.0) {
    param_1[0x9e5] = 1;
    param_1[0x9e6] = -0x40800000;
    param_1[0x9e4] = 1;
  }
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    iVar5 = 0xd;
    if (param_1[0x186] == 0x93) {
      iVar5 = 0xe;
    }
    iVar2 = FUN_00a81330();
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar3 + 0x494,iVar5,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b94fc0();
    param_1[0x250] = 0;
    param_1[0x502] = 0x701;
    piVar4 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar4 + 0x6c))();
    if (iVar2 == 8) {
      iVar2 = FUN_00a81330();
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = FUN_00a7c8a0();
      }
      iVar2 = FUN_00a81330();
      if (iVar2 != 0) {
        FUN_00a7c8a0();
      }
      FUN_00a9f3c0(iVar3 + 0x494,iVar5 + 0x11,0,0x3d088889,0x3f800000,0,0,0x3f800000);
    }
    param_1[0x248] = 0;
LAB_00b9f9c1:
    param_1[0x9b7] = 0x40400000;
    FUN_00b94790(0x3f800000,0x3f800000);
  }
  else if (param_1[0x187] == 1) goto LAB_00b9f9c1;
  param_1[0x248] = (int)((float)param_1[0x244] + (float)param_1[0x248]);
  fVar1 = (float)param_1[0x25];
  fVar6 = (float10)FUN_00ddba30((float)param_1[0x25] + 3.1415927);
  fVar7 = (float10)FUN_00ddba30((float)param_1[0x34c] - fVar1);
  fVar6 = (float10)FUN_00ddba30((float)param_1[0x34c] - (float)fVar6);
  if (90000.0 < (float)param_1[0x34a]) {
    fVar1 = (float)fVar7 * (float)fVar7;
    if (param_1[0x186] == 0x92) {
      if (fVar1 < 1.0966228 != (fVar1 == 1.0966228)) {
        fVar7 = (float10)FUN_00ddba30((float)param_1[0x244] * 0.008726646 + (float)param_1[0x25]);
        param_1[0x25] = (int)(float)fVar7;
        fVar6 = (float10)(float)fVar6;
      }
      if (fVar6 * fVar6 < (float10)1.0966228 != (fVar6 * fVar6 == (float10)1.0966228)) {
        fVar1 = (float)param_1[0x25] - (float)param_1[0x244] * 0.008726646;
LAB_00b9facd:
        fVar6 = (float10)FUN_00ddba30(fVar1);
        param_1[0x25] = (int)(float)fVar6;
        return;
      }
    }
    else {
      if (fVar1 < 1.0966228 != (fVar1 == 1.0966228)) {
        fVar7 = (float10)FUN_00ddba30((float)param_1[0x25] - (float)param_1[0x244] * 0.008726646);
        param_1[0x25] = (int)(float)fVar7;
        fVar6 = (float10)(float)fVar6;
      }
      if (fVar6 * fVar6 < (float10)1.0966228 != (fVar6 * fVar6 == (float10)1.0966228)) {
        fVar1 = (float)param_1[0x244] * 0.008726646 + (float)param_1[0x25];
        goto LAB_00b9facd;
      }
    }
  }
  return;
}

// 00B9FED0  FUN_00b9fed0  size=2056  [callgraph]
void __fastcall FUN_00b9fed0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = 0;
  (**(code **)(*param_1 + 0x314))();
  switch(param_1[0x187]) {
  case 0:
    param_1[0x250] = param_1[0x98a];
    param_1[0x248] = 0;
    iVar5 = param_1[0x98a] + 1;
    param_1[0x98a] = iVar5;
    if (3 < iVar5) {
      param_1[0x98a] = 0;
    }
    param_1[0x2dd] = 0;
    switch(param_1[0x98f]) {
    case 2:
      param_1[0x98f] = 4;
      break;
    case 3:
      param_1[0x98f] = 9;
      break;
    case 5:
      param_1[0x98f] = 6;
      break;
    case 10:
      param_1[0x98f] = 0xb;
    }
    iVar5 = 0;
    switch(param_1[0x98f]) {
    case 4:
      iVar5 = 6;
      break;
    case 6:
      iVar5 = 9;
      break;
    case 9:
      iVar5 = 3;
      break;
    case 0xb:
      iVar5 = 0xc;
    }
    iVar2 = FUN_00a81330();
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar3 + 0x494,iVar5,0,0x3e088889,0x3f800000,0x8000000,0,0x3f800000);
    FUN_00b94fc0();
    iVar2 = FUN_00a81330();
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = FUN_00a7c8a0();
    }
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar3 + 0x494,iVar5 + 0x29,0,0x3e088889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b86010(1);
    iVar5 = FUN_00b86410();
    if (iVar5 != 0) {
      FUN_00b7b270(0x3f800000,0x393702d3,0x40490fdb,0);
    }
    FUN_00b8aae0();
    param_1[0x251] = 0;
  case 1:
    iVar2 = 3;
    param_1[0x469] = 1;
    iVar5 = FUN_00a8c760(5);
    if (iVar5 != 0) {
      piVar4 = (int *)FUN_00b7b200();
      if (((piVar4 == (int *)0x0) || (iVar5 = FUN_00b86410(), iVar5 == 0)) ||
         (iVar5 = (**(code **)(*piVar4 + 0x228))(), iVar5 == 0)) {
        if (90000.0 < (float)param_1[0x34a]) {
          pcVar1 = *(code **)(*param_1 + 0x308);
          param_1[0x23d] = param_1[0x34c];
          (*pcVar1)(0x3e99999a,0x3ae4c388,0x3e8efa35,0);
        }
      }
      else {
        FUN_00b7b270(0x3e99999a,0x393702d3,0x3e8efa35,0);
      }
    }
    FUN_00b94790(0x3f800000,0x3f800000);
    uVar6 = 0;
    FUN_00a92f90(0);
    iVar5 = FUN_0085be10(uVar6);
    if (iVar5 != 0) {
      param_1[0x187] = 5;
      if (param_1[0x98f] == 6) {
        iVar2 = 2;
      }
      if (iVar2 <= param_1[0x251]) {
        param_1[0x187] = 2;
        return;
      }
    }
    break;
  case 2:
    param_1[0x187] = 3;
    param_1[0x250] = 0;
    param_1[0x251] = 0;
  case 3:
    switch(param_1[0x98f]) {
    case 4:
      iVar5 = 7;
      break;
    case 6:
      iVar5 = 10;
      break;
    case 9:
      iVar5 = 4;
      break;
    case 0xb:
      iVar5 = 0xd;
    }
    iVar2 = FUN_00a81330();
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar3 + 0x494,iVar5,0,0,0x3f800000,0x8000000,0,0x3f800000);
    iVar2 = FUN_00a81330();
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = FUN_00a7c8a0();
    }
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar3 + 0x494,iVar5 + 0x29,0,0,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b86010(1);
    iVar5 = FUN_00b86410();
    if (iVar5 != 0) {
      FUN_00b7b270(0x3f800000,0x393702d3,0x40490fdb,0);
    }
    FUN_00a8d280();
    goto LAB_00ba0318;
  case 4:
LAB_00ba0318:
    iVar2 = 3;
    param_1[0x469] = 1;
    iVar5 = FUN_00a8c760(5);
    if (iVar5 != 0) {
      iVar5 = FUN_00a81330();
      if (iVar5 != 0) {
        FUN_00a81330();
        piVar4 = (int *)FUN_00a7c8a0();
        if (((piVar4 != (int *)0x0) && (iVar5 = FUN_00b86410(), iVar5 != 0)) &&
           (iVar5 = (**(code **)(*piVar4 + 0x228))(), iVar5 != 0)) {
          FUN_00b7b270(0x3e99999a,0x393702d3,0x3e8efa35,0);
          goto LAB_00ba03f1;
        }
      }
      if (90000.0 < (float)param_1[0x34a]) {
        pcVar1 = *(code **)(*param_1 + 0x308);
        param_1[0x23d] = param_1[0x34c];
        (*pcVar1)(0x3e99999a,0x3ae4c388,0x3e8efa35,0);
      }
    }
LAB_00ba03f1:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar5 = FUN_00a92f90();
    if ((*(int *)(iVar5 + 0xd0) + *(int *)(iVar5 + 0xc4) + *(int *)(iVar5 + 0xb8) != 0) &&
       (iVar5 = FUN_00e36060(0), iVar5 == 0)) {
      return;
    }
    param_1[0x250] = param_1[0x250] + 1;
    iVar5 = param_1[0x250];
    param_1[0x187] = 5;
    if (param_1[0x98f] == 4) {
      iVar2 = 1;
    }
    if (param_1[0x98f] == 6) {
      iVar2 = 1;
    }
    if (iVar5 != 1) {
      if (iVar5 == 2) {
        iVar2 = iVar2 + 1;
      }
      else if (iVar5 == 3) {
        iVar2 = iVar2 + 2;
      }
      else if (iVar5 == 4) {
        iVar2 = iVar2 + 3;
      }
      else {
        if (iVar5 != 5) goto LAB_00ba0495;
        iVar2 = iVar2 + 4;
      }
    }
    if (iVar2 <= param_1[0x251]) {
      param_1[0x187] = 3;
    }
LAB_00ba0495:
    param_1[0x251] = 0;
    return;
  case 5:
    switch(param_1[0x98f]) {
    case 4:
      iVar5 = 8;
      break;
    case 6:
      iVar5 = 0xb;
      break;
    case 9:
      iVar5 = 5;
      break;
    case 0xb:
      iVar5 = 0xe;
    }
    iVar2 = FUN_00a81330();
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar3 + 0x494,iVar5,0,0,0x3f800000,0x8000000,0,0x3f800000);
    iVar2 = FUN_00a81330();
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = FUN_00a7c8a0();
    }
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar3 + 0x494,iVar5 + 0x29,0,0,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b86010(1);
    iVar5 = FUN_00b86410();
    if (iVar5 != 0) {
      FUN_00b7b270(0x3f800000,0x393702d3,0x40490fdb,0);
    }
  case 6:
    param_1[0x469] = 1;
    iVar5 = FUN_00a8c760(5);
    if (iVar5 != 0) {
      piVar4 = (int *)FUN_00b7b200();
      if (((piVar4 == (int *)0x0) || (iVar5 = FUN_00b86410(), iVar5 == 0)) ||
         (iVar5 = (**(code **)(*piVar4 + 0x228))(), iVar5 == 0)) {
        if (90000.0 < (float)param_1[0x34a]) {
          pcVar1 = *(code **)(*param_1 + 0x308);
          param_1[0x23d] = param_1[0x34c];
          (*pcVar1)(0x3e99999a,0x3ae4c388,0x3e8efa35,0);
        }
      }
      else {
        FUN_00b7b270(0x3e99999a,0x393702d3,0x3e8efa35,0);
      }
    }
    FUN_00b94790(0x3f800000,0x3f800000);
    uVar6 = 0;
    FUN_00a92f90(0);
    iVar5 = FUN_0085be10(uVar6);
    if (iVar5 != 0) {
      iVar5 = (**(code **)(*param_1 + 0x3ec))();
      if (iVar5 != 0) {
        FUN_00b8a510();
        return;
      }
      (**(code **)(*param_1 + 0x388))(0);
    }
  }
  return;
}

// 00BA0780  FUN_00ba0780  size=1277  [callgraph]
void __fastcall FUN_00ba0780(int *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  
  (**(code **)(*param_1 + 0x314))();
  switch(param_1[0x187]) {
  case 0:
    param_1[0x248] = 0;
    param_1[0x250] = param_1[0x98a];
    param_1[0x98a] = 0;
    param_1[0x2dd] = 0;
    iVar2 = FUN_00a81330();
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar1 + 0x494,0x12,0,0x3e088889,0x3f800000,0x8000000,0,0x3f800000);
    FUN_00b94fc0();
    iVar2 = FUN_00a81330();
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = FUN_00a7c8a0();
    }
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar1 + 0x494,0x3b,0,0x3e088889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b86010(1);
    iVar2 = FUN_00b86410();
    if (iVar2 != 0) {
      FUN_00b7b270(0x3f800000,0x393702d3,0x40490fdb,0);
    }
    FUN_00b8aae0();
    param_1[0x251] = 0;
  case 1:
    param_1[0x469] = 1;
    FUN_00b94790(0x3f800000,0x3f800000);
    uVar5 = 0;
    FUN_00a92f90(0);
    iVar2 = FUN_0085be10(uVar5);
    if (iVar2 != 0) {
      param_1[0x187] = 5;
      iVar2 = 3;
      if (param_1[0x98f] == 6) {
        iVar2 = 2;
      }
      if (iVar2 <= param_1[0x251]) {
        param_1[0x187] = 2;
        return;
      }
    }
    break;
  case 2:
    param_1[0x187] = 3;
    param_1[0x250] = 0;
    param_1[0x251] = 0;
  case 3:
    iVar2 = FUN_00a81330();
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar1 + 0x494,0x13,0,0,0x3f800000,0x8000000,0,0x3f800000);
    iVar2 = FUN_00a81330();
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = FUN_00a7c8a0();
    }
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar1 + 0x494,0x3c,0,0,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b86010(1);
    iVar2 = FUN_00b86410();
    if (iVar2 != 0) {
      FUN_00b7b270(0x3f800000,0x393702d3,0x40490fdb,0);
    }
    FUN_00a8d280();
switchD_00ba07a6_caseD_4:
    param_1[0x469] = 1;
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar2 = FUN_00a92f90();
    if ((*(int *)(iVar2 + 0xd0) + *(int *)(iVar2 + 0xc4) + *(int *)(iVar2 + 0xb8) == 0) ||
       (iVar2 = FUN_00e36060(0), iVar2 != 0)) {
      param_1[0x250] = param_1[0x250] + 1;
      iVar2 = param_1[0x250];
      param_1[0x187] = 5;
      if (iVar2 == 1) {
        bVar3 = SBORROW4(param_1[0x251],1);
        iVar2 = param_1[0x251] + -1;
      }
      else {
        if (iVar2 != 2) {
          if (iVar2 == 3) {
            bVar4 = SBORROW4(param_1[0x251],3);
            bVar3 = param_1[0x251] + -3 < 0;
          }
          else if (iVar2 == 4) {
            bVar4 = SBORROW4(param_1[0x251],4);
            bVar3 = param_1[0x251] + -4 < 0;
          }
          else {
            if (iVar2 != 5) goto LAB_00ba0b1a;
            bVar4 = SBORROW4(param_1[0x251],5);
            bVar3 = param_1[0x251] + -5 < 0;
          }
          if (bVar4 == bVar3) {
            param_1[0x187] = 3;
          }
          goto LAB_00ba0b1a;
        }
        bVar3 = SBORROW4(param_1[0x251],2);
        iVar2 = param_1[0x251] + -2;
      }
      if (bVar3 == iVar2 < 0) {
        param_1[0x187] = 3;
        param_1[0x251] = 0;
        return;
      }
LAB_00ba0b1a:
      param_1[0x251] = 0;
      return;
    }
    break;
  case 4:
    goto switchD_00ba07a6_caseD_4;
  case 5:
    iVar2 = FUN_00a81330();
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar1 + 0x494,0x14,0,0,0x3f800000,0x8000000,0,0x3f800000);
    iVar2 = FUN_00a81330();
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = FUN_00a7c8a0();
    }
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar1 + 0x494,0x3d,0,0,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b86010(1);
    iVar2 = FUN_00b86410();
    if (iVar2 != 0) {
      FUN_00b7b270(0x3f800000,0x393702d3,0x40490fdb,0);
    }
    FUN_00a8d280();
  case 6:
    param_1[0x469] = 1;
    FUN_00b94790(0x3f800000,0x3f800000);
    uVar5 = 0;
    FUN_00a92f90(0);
    iVar2 = FUN_0085be10(uVar5);
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*param_1 + 0x3ec))();
      if (iVar2 == 0) {
        (**(code **)(*param_1 + 0x388))(0);
        return;
      }
      FUN_00b8a510();
      return;
    }
  default:
    break;
  }
  return;
}

// 00BA0FF0  FUN_00ba0ff0  size=2100  [callgraph]
void __fastcall FUN_00ba0ff0(int *param_1)

{
  code *pcVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  (**(code **)(*param_1 + 0x314))();
  iVar3 = FUN_00a8c760(0x12);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x318))();
  }
  switch(param_1[0x187]) {
  case 0:
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      iVar3 = FUN_00a7c8a0();
      pcVar1 = *(code **)(*param_1 + 0x308);
      fVar6 = (float10)fpatan((float10)*(float *)(iVar3 + 0x40) - (float10)(float)param_1[0x10],
                              (float10)*(float *)(iVar3 + 0x48) - (float10)(float)param_1[0x12]);
      param_1[0x23d] = (int)(float)fVar6;
      (*pcVar1)(0x3f800000,0x393702d3,0x40490fdb,0);
    }
    iVar3 = FUN_00a81330();
    iVar5 = 0;
    if (iVar3 != 0) {
      iVar5 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar5 + 0x494,0x18,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
    iVar3 = FUN_00a81330();
    iVar5 = 0;
    if (iVar3 != 0) {
      iVar5 = FUN_00a7c8a0();
    }
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar5 + 0x494,0x41,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x23d] = param_1[0x25];
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x225] = 0;
    FUN_00b86010(1);
    FUN_00b94fc0();
    param_1[0x409] = 0;
    param_1[0x2f8] = 0;
    param_1[0x2f9] = 0;
    param_1[0x2fa] = 0;
    param_1[0x988] = param_1[0x988] + 1;
    param_1[0x2f9] = 0x3d75c290;
    if (5 < param_1[0x988]) {
      param_1[0x988] = 0;
    }
    param_1[0x995] = param_1[0x995] | 8;
    param_1[0x2dd] = 0;
    break;
  case 1:
    break;
  case 2:
    iVar3 = FUN_00a81330();
    iVar5 = 0;
    if (iVar3 != 0) {
      iVar5 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar5 + 0x494,0x19,0,0x3d088889,0x3f800000,0,0,0x3f800000);
    iVar3 = FUN_00a81330();
    iVar5 = 0;
    if (iVar3 != 0) {
      iVar5 = FUN_00a7c8a0();
    }
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar5 + 0x494,0x42,0,0x3d088889,0x3f800000,0,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x409] = 0;
  case 3:
    param_1[0x224] = (int)((float)param_1[0x224] * 0.97);
    param_1[0x226] = (int)((float)param_1[0x226] * 0.97);
    param_1[0x225] = (int)((float)param_1[0x225] * 0.994);
    param_1[0x409] = (int)((float)param_1[0x244] * -0.18 + (float)param_1[0x409]);
    FUN_00b94790(0x3f800000,0x3f800000);
    return;
  case 4:
    iVar3 = FUN_00a81330();
    iVar5 = 0;
    if (iVar3 != 0) {
      iVar5 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar5 + 0x494,0x1a,0,0x3d088889,0x3f800000,0x8000000,0,0x3f800000);
    iVar3 = FUN_00a81330();
    iVar5 = 0;
    if (iVar3 != 0) {
      iVar5 = FUN_00a7c8a0();
    }
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar5 + 0x494,0x43,0,0x3d088889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a92f90();
    if ((*(int *)(iVar3 + 0xd0) + *(int *)(iVar3 + 0xc4) + *(int *)(iVar3 + 0xb8) == 0) ||
       (iVar3 = FUN_00e36060(0), iVar3 != 0)) {
      (**(code **)(*param_1 + 0x388))(0);
      return;
    }
  default:
    goto switchD_00ba1032_default;
  }
  iVar3 = FUN_00a8c760(0x12);
  if (iVar3 == 0) {
    param_1[0x409] = (int)((float)param_1[0x244] * -0.18 + (float)param_1[0x409]);
    piVar4 = (int *)FUN_00b7b200();
    if (((piVar4 == (int *)0x0) || (iVar3 = FUN_00b86410(), iVar3 == 0)) ||
       (iVar3 = (**(code **)(*piVar4 + 0x228))(), iVar3 == 0)) {
      if (90000.0 < (float)param_1[0x34a]) {
        pcVar1 = *(code **)(*param_1 + 0x308);
        param_1[0x23d] = param_1[0x34c];
        (*pcVar1)(0x3e99999a,0x3ae4c388,0x3e8efa35,0);
      }
    }
    else {
      FUN_00b7b230(&fStack_20);
      fStack_30 = 0.0;
      fStack_2c = 0.0;
      fStack_28 = 1.0;
      D3DXVec3TransformNormal(&fStack_30,&fStack_30,param_1 + 4);
      param_1[0x408] = (int)(fStack_20 - (fStack_30 + (float)param_1[0x10]));
      param_1[0x409] = (int)(fStack_1c - ((float)param_1[0x11] + fStack_2c));
      param_1[0x40a] = (int)(fStack_18 - ((float)param_1[0x12] + fStack_28));
      param_1[0x40b] = (int)(fStack_14 - fStack_24);
      if (0.0 < (float)param_1[0x409]) {
        param_1[0x408] = 0;
        param_1[0x409] = 0;
        param_1[0x40a] = 0;
      }
      param_1[0x409] = 0;
      fVar2 = (float)param_1[0x409] * (float)param_1[0x409] +
              (float)param_1[0x408] * (float)param_1[0x408] +
              (float)param_1[0x40a] * (float)param_1[0x40a];
      if (fVar2 < 9.0 == (fVar2 == 9.0)) {
        param_1[0x408] = 0;
        param_1[0x409] = 0;
        param_1[0x40a] = 0;
      }
      else {
        fVar6 = (float10)FUN_00fdc1f0();
        param_1[0x408] = (int)(float)((float10)(float)param_1[0x408] * fVar6);
        param_1[0x409] = (int)(float)((float10)(float)param_1[0x409] * fVar6);
        param_1[0x40a] = (int)(float)((float10)(float)param_1[0x40a] * fVar6);
        param_1[0x40b] = (int)(float)(fVar6 * (float10)(float)param_1[0x40b]);
      }
    }
  }
  else {
    piVar4 = (int *)FUN_00b7b200();
    if (((piVar4 == (int *)0x0) || (iVar3 = FUN_00b86410(), iVar3 == 0)) ||
       (iVar3 = (**(code **)(*piVar4 + 0x228))(), iVar3 == 0)) {
      if (90000.0 < (float)param_1[0x34a]) {
        pcVar1 = *(code **)(*param_1 + 0x308);
        param_1[0x23d] = param_1[0x34c];
        (*pcVar1)(0x3e99999a,0x3ae4c388,0x3e8efa35,0);
      }
    }
    else {
      FUN_00b7b230(&fStack_20);
      fStack_30 = 0.0;
      fStack_2c = 0.0;
      fStack_28 = 1.0;
      D3DXVec3TransformNormal(&fStack_30,&fStack_30,param_1 + 4);
      param_1[0x408] = (int)(fStack_20 - (fStack_30 + (float)param_1[0x10]));
      param_1[0x409] = (int)(fStack_1c - ((float)param_1[0x11] + fStack_2c));
      param_1[0x40a] = (int)(fStack_18 - ((float)param_1[0x12] + fStack_28));
      param_1[0x40b] = (int)(fStack_14 - fStack_24);
      if (0.0 < (float)param_1[0x409]) {
        param_1[0x408] = 0;
        param_1[0x409] = 0;
        param_1[0x40a] = 0;
      }
      param_1[0x409] = 0;
      fVar2 = (float)param_1[0x40a] * (float)param_1[0x40a] +
              (float)param_1[0x408] * (float)param_1[0x408] +
              (float)param_1[0x409] * (float)param_1[0x409];
      if (fVar2 < 9.0 == (fVar2 == 9.0)) {
        param_1[0x408] = 0;
        param_1[0x409] = 0;
        param_1[0x40a] = 0;
      }
      else {
        fVar6 = (float10)FUN_00fdc1f0();
        param_1[0x408] = (int)(float)((float10)(float)param_1[0x408] * fVar6);
        param_1[0x409] = (int)(float)((float10)(float)param_1[0x409] * fVar6);
        param_1[0x40a] = (int)(float)((float10)(float)param_1[0x40a] * fVar6);
        param_1[0x40b] = (int)(float)(fVar6 * (float10)(float)param_1[0x40b]);
      }
    }
    param_1[0x409] = (int)((float)param_1[0x409] + (float)param_1[0x2f9]);
    fVar6 = (float10)FUN_00fdc1f0();
    param_1[0x2f9] = (int)(float)(fVar6 * (float10)(float)param_1[0x2f9]);
  }
  param_1[0x469] = 1;
  param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar3 = FUN_00a92f90();
  if ((*(int *)(iVar3 + 0xd0) + *(int *)(iVar3 + 0xc4) + *(int *)(iVar3 + 0xb8) == 0) ||
     (iVar3 = FUN_00e36060(0), iVar3 != 0)) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_00ba1032_default:
  return;
}

// 00BA1840  FUN_00ba1840  size=673  [callgraph]
void __fastcall FUN_00ba1840(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  (**(code **)(*param_1 + 0x1d4))(1);
  param_1[0x2de] = 1;
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    param_1[0x2de] = 0;
  }
  (**(code **)(*param_1 + 800))(0x3c888889);
  iVar2 = FUN_00b8cd60();
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*param_1 + 0x34c))();
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x314))();
      param_1[0x224] = (int)((float)param_1[0x224] * 0.0);
      param_1[0x225] = (int)((float)param_1[0x225] * 0.0);
      param_1[0x226] = (int)((float)param_1[0x226] * 0.0);
      param_1[0x227] = (int)((float)param_1[0x227] * 0.0);
      param_1[0x408] = (int)((float)param_1[0x408] * 0.0);
      param_1[0x409] = (int)((float)param_1[0x409] * 0.0);
      param_1[0x40a] = (int)((float)param_1[0x40a] * 0.0);
      param_1[0x40b] = (int)((float)param_1[0x40b] * 0.0);
      FUN_00a8caf0(0xb,0,0,0);
      return;
    }
    if ((param_1[0x389] & param_1[0x33e]) == 0) {
      fVar1 = 0.0;
    }
    else {
      fVar1 = (float)param_1[0x244] + (float)param_1[0x3f7];
    }
    param_1[0x3f7] = (int)fVar1;
    iVar2 = FUN_00a81330();
    if ((((iVar2 == 0) || (iVar2 = FUN_00a7c8a0(), iVar2 == 0)) || (param_1[0x187] == 0)) ||
       ((3 < param_1[0x187] || (*(int *)(iVar2 + 0x980) == 0)))) {
      iVar2 = FUN_00b89f30();
      if (iVar2 != 0) {
        iVar2 = FUN_00a81330();
        if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
          FUN_00b80720();
        }
        FUN_00b7e090(0);
        return;
      }
      iVar2 = FUN_00a8c760(1);
      if ((iVar2 != 0) && (((param_1[0x389] & param_1[0x33f]) != 0 || (param_1[0x95b] != 0)))) {
        param_1[0x95b] = 0;
        param_1[0x988] = 0;
        FUN_00a8caf0(0xa2,0,0,0);
        return;
      }
      iVar2 = FUN_00a8c760(1);
      if ((((iVar2 == 0) || (param_1[0x9a3] != 0)) || ((*(byte *)(param_1 + 0x995) & 2) != 0)) ||
         (((param_1[0x33f] & param_1[0x388]) == 0 && (param_1[0x95a] == 0)))) {
        uVar5 = 1;
        uVar3 = FUN_00a8c760(0x11);
        uVar4 = FUN_00a8c760(0x1c);
        iVar2 = FUN_00b94500(uVar4,uVar3,uVar5);
        if (iVar2 != 0) {
          param_1[0x995] = param_1[0x995] | 0x40;
          iVar2 = FUN_00b7d0c0();
          if (iVar2 != 0) {
            FUN_00b80720();
            return;
          }
        }
      }
      else {
        param_1[0x95a] = 0;
        param_1[0x988] = 0;
        FUN_00a8caf0(0x5b,0,0,0);
        iVar2 = FUN_00b80980();
        if (iVar2 != 0) {
          FUN_00a8caf0(0xb1,0,0,0);
        }
        iVar2 = FUN_00b7d0c0();
        if (iVar2 != 0) {
          FUN_00b80720();
          return;
        }
      }
    }
    else {
      param_1[0x187] = 4;
    }
  }
  return;
}

// 00BA1AF0  FUN_00ba1af0  size=314  [callgraph]
void __fastcall FUN_00ba1af0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (**(code **)(*param_1 + 0x1d4))(1);
  iVar1 = (**(code **)(*param_1 + 800))(0x3c888889);
  if (iVar1 != 0) {
    if (param_1[0x186] == 0xa3) {
      FUN_00a8caf0(0xa4,0,0,0);
      return;
    }
    FUN_00a8caf0(0xa0,0,0,0);
    return;
  }
  iVar1 = FUN_00b8cd60();
  if ((iVar1 == 0) && (param_1[0x186] != 0)) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      FUN_00a7c8a0();
    }
    iVar1 = FUN_00b89f30();
    if (iVar1 != 0) {
      FUN_00b7e090(0);
      return;
    }
    iVar1 = FUN_00a8c760(1);
    if ((((iVar1 == 0) || (param_1[0x9a3] != 0)) || ((*(byte *)(param_1 + 0x995) & 2) != 0)) ||
       (((param_1[0x33f] & param_1[0x388]) == 0 && (param_1[0x95a] == 0)))) {
      uVar4 = 1;
      uVar2 = FUN_00a8c760(0x11);
      uVar3 = FUN_00a8c760(0x1c);
      FUN_00b94500(uVar3,uVar2,uVar4);
    }
    else {
      param_1[0x95a] = 0;
      param_1[0x988] = 0;
      FUN_00a8caf0(0x5b,0,0,0);
      iVar1 = FUN_00b80980();
      if (iVar1 != 0) {
        FUN_00a8caf0(0xb1,0,0,0);
        return;
      }
    }
  }
  return;
}

// 00BA1C30  FUN_00ba1c30  size=334  [callgraph]
void __fastcall FUN_00ba1c30(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    param_1[0x248] = 0;
    param_1[0x250] = param_1[0x98a];
    param_1[0x2dd] = 0;
    uVar3 = 0x17;
    if (param_1[0x186] == 0xa3) {
      uVar3 = 0x19;
    }
    iVar2 = FUN_00a81330();
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar1 + 0x494,uVar3,0,0,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b94ed0();
    param_1[0x995] = param_1[0x995] & 0xfffffffb;
    FUN_00b8aae0();
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      iVar2 = FUN_00a7c8a0();
      if (iVar2 != 0) {
        if (*(int *)(iVar2 + 0x618) == 1) {
          FUN_00a8caf0(1,4,0,0);
        }
        if (*(int *)(iVar2 + 0x618) == 2) {
          FUN_00a8caf0(1,4,0,0);
        }
      }
    }
    param_1[0x24] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar2 = FUN_00a92f90();
  if (*(int *)(iVar2 + 0xd0) + *(int *)(iVar2 + 0xc4) + *(int *)(iVar2 + 0xb8) != 0) {
    FUN_00e36060(0);
  }
  return;
}

// 00BA1D80  FUN_00ba1d80  size=377  [callgraph]
void __fastcall FUN_00ba1d80(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    param_1[0x995] = param_1[0x995] & 0xfffffffb;
    param_1[0x248] = 0;
    param_1[0x250] = param_1[0x98a];
    param_1[0x2dd] = 0;
    uVar3 = 0x18;
    if (param_1[0x186] == 0xa4) {
      uVar3 = 0x1a;
    }
    if (param_1[0x186] == 0xa5) {
      uVar3 = 0x1b;
    }
    iVar2 = FUN_00a81330();
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar1 + 0x494,uVar3,0,0,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b94ed0();
    FUN_00b8aae0();
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      iVar2 = FUN_00a7c8a0();
      if (iVar2 != 0) {
        if (*(int *)(iVar2 + 0x618) == 1) {
          FUN_00a8caf0(1,4,0,0);
        }
        if (*(int *)(iVar2 + 0x618) == 2) {
          FUN_00a8caf0(1,4,0,0);
        }
      }
    }
    param_1[0x24] = 0;
  }
  else if (param_1[0x187] != 1) {
    FUN_00b8aae0();
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar2 = FUN_00a92f90();
  if (*(int *)(iVar2 + 0xd0) + *(int *)(iVar2 + 0xc4) + *(int *)(iVar2 + 0xb8) != 0) {
    iVar2 = FUN_00e36060(0);
    if (iVar2 == 0) goto LAB_00ba1ef1;
  }
  (**(code **)(*param_1 + 0x388))(0);
LAB_00ba1ef1:
  FUN_00b8aae0();
  return;
}

// 00BA1F00  FUN_00ba1f00  size=1696  [callgraph]
void __fastcall FUN_00ba1f00(int *param_1)

{
  float *pfVar1;
  float fVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  undefined4 uVar7;
  float fStack_a8;
  float fStack_a4;
  float afStack_a0 [2];
  undefined1 auStack_98 [8];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [76];
  
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    FUN_00a7c8a0();
  }
  FUN_00a12210(0);
  (**(code **)(*param_1 + 0x314))();
  iVar4 = FUN_00a8c760(0x12);
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x318))();
  }
  switch(param_1[0x187]) {
  case 0:
    param_1[0x250] = 0;
    iVar4 = FUN_00a81330();
    if ((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
      FUN_00b80720();
    }
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      iVar4 = FUN_00a7c8a0();
      pcVar3 = *(code **)(*param_1 + 0x308);
      fVar6 = (float10)fpatan((float10)*(float *)(iVar4 + 0x40) - (float10)(float)param_1[0x10],
                              (float10)*(float *)(iVar4 + 0x48) - (float10)(float)param_1[0x12]);
      param_1[0x23d] = (int)(float)fVar6;
      (*pcVar3)(0x3f800000,0x393702d3,0x40490fdb,0);
    }
    param_1[0x248] = 0;
    param_1[0x2dd] = 0;
    iVar4 = FUN_00a81330();
    iVar5 = 0;
    if (iVar4 != 0) {
      iVar5 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar5 + 0x494,0x13,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b86010(1);
    FUN_00b94fc0();
    FUN_00b8aae0();
    param_1[0x409] = 0;
    param_1[0x9f1] = 0;
    param_1[0x24a] = 0;
  case 1:
    pcVar3 = *(code **)(*param_1 + 0x318);
    param_1[0x469] = 1;
    (*pcVar3)();
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      FUN_00a81330();
      iVar4 = FUN_00a7c8a0();
      if (iVar4 != 0) {
        iVar4 = FUN_00a81330();
        if (iVar4 != 0) {
          FUN_00c15010(afStack_a0);
        }
        thunk_FUN_00dde510(&fStack_a4,&fStack_a8,afStack_a0,param_1 + 0x10);
        param_1[0x25] = (int)fStack_a8;
        param_1[0x24a] = (int)(fStack_a4 * -1.0);
      }
    }
    param_1[0x24] = 0;
    FUN_00b94790(0x3f800000,0x3f800000);
    uVar7 = 0;
    FUN_00a92f90(0);
    iVar4 = FUN_0085be10(uVar7);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    iVar4 = FUN_00a8c760(5);
    if (iVar4 != 0) {
      afStack_a0[0] = (float)param_1[0x24a];
      pfVar1 = (float *)(param_1 + 0x2f8);
      *pfVar1 = 0.0;
      param_1[0x2f9] = 0;
      uStack_58 = 0;
      uStack_5c = 0;
      uStack_60 = 0;
      uStack_64 = 0;
      uStack_6c = 0;
      uStack_70 = 0;
      uStack_74 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_84 = 0;
      uStack_88 = 0;
      uStack_8c = 0;
      param_1[0x2fa] = param_1[0x9ed];
      uStack_54 = 0x3f800000;
      uStack_68 = 0x3f800000;
      uStack_7c = 0x3f800000;
      uStack_90 = 0x3f800000;
      if ((float)param_1[0x25] != 0.0) {
        D3DXMatrixRotationY(auStack_50,param_1[0x25]);
        D3DXMatrixMultiply(auStack_98,&uStack_58,auStack_98);
      }
      if (afStack_a0[0] != 0.0) {
        D3DXMatrixRotationX(auStack_50,afStack_a0[0]);
        D3DXMatrixMultiply(auStack_98,&uStack_58,auStack_98);
      }
      D3DXVec3TransformNormal(pfVar1,pfVar1,&uStack_90);
      fVar2 = (float)param_1[0x244];
      param_1[0x14] = (int)((float)param_1[0x14] + fVar2 * *pfVar1);
      param_1[0x15] = (int)(fVar2 * (float)param_1[0x2f9] + (float)param_1[0x15]);
      param_1[0x16] = (int)(fVar2 * (float)param_1[0x2fa] + (float)param_1[0x16]);
      param_1[0x17] = (int)((float)param_1[0x2fb] * fVar2 + (float)param_1[0x17]);
      iVar4 = FUN_00b7b200();
      if (iVar4 != 0) {
        FUN_00b7b230(afStack_a0);
        thunk_FUN_00dde510(&fStack_a8,&fStack_a4,afStack_a0,param_1 + 0x10);
        FUN_00a8db10(param_1 + 0x25,param_1[0x25],fStack_a4,0x3dcccccd,0x3ae4c388,0x3d567750);
        FUN_00a8db10(param_1 + 0x24a,param_1[0x24a],fStack_a8 - 1.0,0x3dcccccd,0x3ae4c388,0x3d567750
                    );
        FUN_00b8aae0();
        return;
      }
    }
    break;
  case 2:
    param_1[0x2dd] = 0;
    iVar4 = FUN_00a81330();
    iVar5 = 0;
    if (iVar4 != 0) {
      iVar5 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar5 + 0x494,0x15,0,0x3d088889,0x3f800000,0,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    param_1[0x9f1] = 0;
  case 3:
    pcVar3 = *(code **)(*param_1 + 0x318);
    param_1[0x469] = 1;
    (*pcVar3)();
    param_1[0x224] = (int)((float)param_1[0x224] * 0.0);
    param_1[0x226] = (int)((float)param_1[0x226] * 0.0);
    param_1[0x225] = (int)((float)param_1[0x225] * 0.0);
    param_1[0x409] = (int)((float)param_1[0x244] * -0.03 + (float)param_1[0x409]);
    FUN_00b94790(0x3f800000,0x3f800000);
    fVar2 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar2 - (float)param_1[0x244]);
    if (fVar2 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = 6;
      FUN_00b8aae0();
      return;
    }
    break;
  case 4:
    param_1[0x2dd] = 0;
    iVar4 = FUN_00a81330();
    iVar5 = 0;
    if (iVar4 != 0) {
      iVar5 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar5 + 0x494,0x14,0,0,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x24] = 0;
  case 5:
    param_1[0x469] = 1;
    FUN_00b94790(0x3f800000,0x3f800000);
    uVar7 = 0;
    FUN_00a92f90(0);
    iVar4 = FUN_0085be10(uVar7);
    if (iVar4 != 0) {
      FUN_00a8caf0(0xa3,0,0,0);
      iVar4 = (**(code **)(*param_1 + 800))(0x3c888889);
      if (iVar4 != 0) {
        FUN_00a8caf0(0xa4,0,0,0);
        FUN_00b8aae0();
        return;
      }
    }
    break;
  case 6:
    param_1[0x2dd] = 0;
    param_1[0x24] = 0;
    param_1[0x187] = 7;
    param_1[0x224] = param_1[0x2f8];
    param_1[0x225] = param_1[0x2f9];
    param_1[0x226] = param_1[0x2fa];
    param_1[0x227] = param_1[0x2fb];
    param_1[0x224] = 0;
    param_1[0x226] = 0;
  case 7:
    (**(code **)(*param_1 + 0x314))();
    param_1[0x469] = 1;
    FUN_00b94790(0x3f800000,0x3f800000);
  }
  FUN_00b8aae0();
  return;
}

// 00BA2F20  FUN_00ba2f20  size=382  [callgraph]
void __fastcall FUN_00ba2f20(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    param_1[0x2dd] = 0;
    iVar3 = 0x17;
    if (param_1[0x186] == 0xac) {
      iVar3 = 0x18;
    }
    iVar1 = FUN_00a81330();
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar2 + 0x494,iVar3,0,0x3d4ccccd,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b94fc0();
    FUN_00b8aae0();
    iVar1 = FUN_00a81330();
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = FUN_00a7c8a0();
    }
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar2 + 0x494,iVar3 + 0x1a,0,0x3d4ccccd,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x98a] = param_1[0x98a] + 1;
    if (2 < param_1[0x98a]) {
      param_1[0x98a] = 0;
    }
    param_1[0x2dd] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar3 = FUN_00a92f90();
  if ((*(int *)(iVar3 + 0xd0) + *(int *)(iVar3 + 0xc4) + *(int *)(iVar3 + 0xb8) != 0) &&
     (iVar3 = FUN_00e36060(0), iVar3 == 0)) {
    return;
  }
  FUN_00a8caf0(0xaa,0,0,0);
  return;
}

// 00BA30A0  FUN_00ba30a0  size=1698  [callgraph]
void __fastcall FUN_00ba30a0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  float10 fVar7;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  (**(code **)(*param_1 + 0x314))();
  iVar3 = FUN_00a8c760(0x12);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x318))();
  }
  switch(param_1[0x187]) {
  case 0:
    param_1[0x995] = param_1[0x995] | 4;
    iVar3 = FUN_00a81330();
    iVar6 = 0;
    if (iVar3 != 0) {
      iVar3 = FUN_00a7c8a0();
      pcVar2 = *(code **)(*param_1 + 0x308);
      fVar7 = (float10)fpatan((float10)*(float *)(iVar3 + 0x40) - (float10)(float)param_1[0x10],
                              (float10)*(float *)(iVar3 + 0x48) - (float10)(float)param_1[0x12]);
      param_1[0x23d] = (int)(float)fVar7;
      (*pcVar2)(0x3f800000,0x393702d3,0x40490fdb,0);
    }
    iVar3 = FUN_00a81330();
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar4 + 0x494,0xf,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x23d] = param_1[0x25];
    FUN_00b86010(1);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x225] = 0x3e19999a;
    FUN_00b94fc0();
    param_1[0x995] = param_1[0x995] | 4;
    param_1[0x2dd] = 0;
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      iVar6 = FUN_00a7c8a0();
    }
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar6 + 0x494,0x29,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
    break;
  case 1:
    break;
  case 2:
    iVar3 = FUN_00a81330();
    iVar6 = 0;
    if (iVar3 != 0) {
      iVar6 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar6 + 0x494,0x11,0,0,0x3f800000,0,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x409] = 0;
    iVar3 = FUN_00a81330();
    iVar6 = 0;
    if (iVar3 != 0) {
      iVar6 = FUN_00a7c8a0();
    }
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar6 + 0x494,0x2b,0,0,0x3f800000,0x8000000,0,0x3f800000);
  case 3:
    param_1[0x224] = (int)((float)param_1[0x224] * 0.97);
    param_1[0x226] = (int)((float)param_1[0x226] * 0.97);
    param_1[0x225] = (int)((float)param_1[0x225] * 0.994);
    param_1[0x409] = (int)((float)param_1[0x244] * -0.15 + (float)param_1[0x409]);
    FUN_00b94790(0x3f800000,0x3f800000);
    return;
  case 4:
    iVar3 = FUN_00a81330();
    iVar6 = 0;
    if (iVar3 != 0) {
      iVar6 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar6 + 0x494,0x10,0,0,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    iVar3 = FUN_00a81330();
    iVar6 = 0;
    if (iVar3 != 0) {
      iVar6 = FUN_00a7c8a0();
    }
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar6 + 0x494,0x2a,0,0,0x3f800000,0x8000000,0,0x3f800000);
  case 5:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a92f90();
    if ((*(int *)(iVar3 + 0xd0) + *(int *)(iVar3 + 0xc4) + *(int *)(iVar3 + 0xb8) == 0) ||
       (iVar3 = FUN_00e36060(0), iVar3 != 0)) {
      (**(code **)(*param_1 + 0x388))(0);
      return;
    }
  default:
    goto switchD_00ba30e2_default;
  }
  iVar3 = FUN_00a959f0(0);
  if ((float)iVar3 < 60.0) {
    param_1[0x225] = (int)((float)param_1[0x244] * 0.01 + (float)param_1[0x225]);
  }
  param_1[0x469] = 1;
  param_1[0x224] = (int)((float)param_1[0x224] * 0.97);
  param_1[0x226] = (int)((float)param_1[0x226] * 0.97);
  param_1[0x225] = (int)((float)param_1[0x225] * 0.94);
  param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
  iVar3 = FUN_00a81330();
  if (iVar3 == 0) {
LAB_00ba3443:
    if (90000.0 < (float)param_1[0x34a]) {
      pcVar2 = *(code **)(*param_1 + 0x308);
      param_1[0x23d] = param_1[0x34c];
      (*pcVar2)(0x3e99999a,0x3ae4c388,0x3e8efa35,0);
    }
  }
  else {
    FUN_00a81330();
    piVar5 = (int *)FUN_00a7c8a0();
    if (((piVar5 == (int *)0x0) || (iVar3 = FUN_00b86410(), iVar3 == 0)) ||
       (iVar3 = (**(code **)(*piVar5 + 0x228))(), iVar3 == 0)) goto LAB_00ba3443;
    FUN_00b7b230(&fStack_20);
    fStack_30 = 0.0;
    fStack_2c = 0.0;
    fStack_28 = 1.5;
    D3DXVec3TransformNormal(&fStack_30,&fStack_30,param_1 + 4);
    param_1[0x408] = (int)(fStack_20 - ((float)param_1[0x10] + fStack_30));
    param_1[0x409] = (int)(fStack_1c - ((float)param_1[0x11] + fStack_2c));
    param_1[0x40a] = (int)(fStack_18 - ((float)param_1[0x12] + fStack_28));
    param_1[0x40b] = (int)(fStack_14 - fStack_24);
    if (0.0 < (float)param_1[0x409]) {
      param_1[0x408] = 0;
      param_1[0x409] = 0;
      param_1[0x40a] = 0;
    }
    param_1[0x409] = 0;
    fVar1 = (float)param_1[0x40a] * (float)param_1[0x40a] +
            (float)param_1[0x408] * (float)param_1[0x408] +
            (float)param_1[0x409] * (float)param_1[0x409];
    if (fVar1 < 9.0 == (fVar1 == 9.0)) {
      param_1[0x408] = 0;
      param_1[0x409] = 0;
      param_1[0x40a] = 0;
    }
    else {
      fVar7 = (float10)FUN_00fdc1f0();
      param_1[0x408] = (int)(float)(fVar7 * (float10)(float)param_1[0x408]);
      param_1[0x409] = (int)(float)(fVar7 * (float10)(float)param_1[0x409]);
      param_1[0x40a] = (int)(float)(fVar7 * (float10)(float)param_1[0x40a]);
      param_1[0x40b] = (int)(float)(fVar7 * (float10)(float)param_1[0x40b]);
    }
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar3 = FUN_00a8c760(0xb);
  if ((iVar3 != 0) &&
     (fVar1 = (float)param_1[0x3f7], !NAN(fVar1) && 15.0 < fVar1 != (fVar1 == 15.0))) {
    FUN_00a8caf0(0xae,0,0,0);
  }
  iVar3 = FUN_00a92f90();
  if ((*(int *)(iVar3 + 0xd0) + *(int *)(iVar3 + 0xc4) + *(int *)(iVar3 + 0xb8) == 0) ||
     (iVar3 = FUN_00e36060(0), iVar3 != 0)) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_00ba30e2_default:
  return;
}

// 00BA3760  FUN_00ba3760  size=1888  [callgraph]
void __fastcall FUN_00ba3760(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  float unaff_ESI;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float afStack_20 [7];
  
  (**(code **)(*param_1 + 0x314))();
  iVar3 = FUN_00a8c760(0x12);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x318))();
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00b94fc0();
    iVar3 = FUN_00b7d0c0();
    FUN_00a9f3c0(iVar3 + 0x494,0x12,0,0x3d088889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x409] = 0;
    param_1[0x225] = 0x3dcccccd;
    iVar3 = FUN_00b7d0c0();
    uVar11 = 0x3f800000;
    iVar3 = iVar3 + 0x494;
    uVar10 = 0;
    uVar9 = 0x8000000;
    uVar8 = 0x3f800000;
    uVar7 = 0x3d088889;
    uVar6 = 0;
    uVar12 = 0x2c;
    FUN_00b7d0c0(iVar3,0x2c,0,0x3d088889,0x3f800000,0x8000000,0,0x3f800000);
    FUN_00a9f3c0(iVar3,uVar12,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11);
  case 1:
    param_1[0x224] = (int)((float)param_1[0x224] * 0.97);
    param_1[0x226] = (int)((float)param_1[0x226] * 0.97);
    param_1[0x225] = (int)(((float)param_1[0x244] * 0.005 + (float)param_1[0x225]) * 0.994);
    FUN_00b94790(0x3f800000,0x3f800000);
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    goto LAB_00ba38b2;
  case 2:
    iVar3 = FUN_00b7d0c0();
    FUN_00a9f3c0(iVar3 + 0x494,0x15,0,0x3d088889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x409] = 0;
    iVar3 = FUN_00b7d0c0();
    uVar11 = 0x3f800000;
    iVar3 = iVar3 + 0x494;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0x3f800000;
    uVar7 = 0x3d088889;
    uVar6 = 0;
    uVar12 = 0x2f;
    FUN_00b7d0c0(iVar3,0x2f,0,0x3d088889,0x3f800000,0,0,0x3f800000);
    FUN_00a9f3c0(iVar3,uVar12,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11);
    param_1[0x248] = 0x42700000;
    FUN_00a8d280();
    goto LAB_00ba3977;
  case 3:
LAB_00ba3977:
    (**(code **)(*param_1 + 0x318))();
    param_1[0x224] = (int)((float)param_1[0x224] * 0.97);
    param_1[0x226] = (int)((float)param_1[0x226] * 0.97);
    param_1[0x225] = (int)((float)param_1[0x225] * 0.994);
    FUN_00b94790(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = 4;
    }
    uVar12 = 0;
    FUN_00a92f90(0);
    iVar3 = FUN_0085be10(uVar12);
    if (iVar3 != 0) {
      iVar3 = FUN_00b7d0c0();
      FUN_00a9f3c0(iVar3 + 0x494,0x15,0,0,0x3f800000,0x8000000,0,0x3f800000);
      FUN_00a8d280();
      return;
    }
    break;
  case 4:
    iVar3 = FUN_00b7d0c0();
    FUN_00a9f3c0(iVar3 + 0x494,0x16,0,0x3d088889,0x3f800000,0,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x409] = 0;
    iVar3 = FUN_00b7d0c0();
    uVar11 = 0x3f800000;
    iVar3 = iVar3 + 0x494;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0x3f800000;
    uVar7 = 0x3d088889;
    uVar6 = 0;
    uVar12 = 0x30;
    FUN_00b7d0c0(iVar3,0x30,0,0x3d088889,0x3f800000,0,0,0x3f800000);
    FUN_00a9f3c0(iVar3,uVar12,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11);
    param_1[0x248] = 0x41200000;
    param_1[0x225] = 0x3e4ccccd;
  case 5:
    param_1[0x224] = (int)((float)param_1[0x224] * 0.97);
    param_1[0x226] = (int)((float)param_1[0x226] * 0.97);
    param_1[0x225] = (int)((float)param_1[0x225] * 0.994);
    FUN_00b94790(0x3f800000,0x3f800000);
LAB_00ba38b2:
    uVar12 = 0;
    FUN_00a92f90(0);
    iVar3 = FUN_0085be10(uVar12);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 6:
    iVar3 = FUN_00b7d0c0();
    FUN_00a9f3c0(iVar3 + 0x494,0x14,0,0x3d088889,0x3f800000,0,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x409] = 0;
    iVar3 = FUN_00b7d0c0();
    uVar11 = 0x3f800000;
    iVar3 = iVar3 + 0x494;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0x3f800000;
    uVar7 = 0x3d088889;
    uVar6 = 0;
    uVar12 = 0x2e;
    FUN_00b7d0c0(iVar3,0x2e,0,0x3d088889,0x3f800000,0,0,0x3f800000);
    FUN_00a9f3c0(iVar3,uVar12,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11);
  case 7:
    param_1[0x224] = (int)((float)param_1[0x224] * 0.97);
    param_1[0x226] = (int)((float)param_1[0x226] * 0.97);
    param_1[0x225] = (int)((float)param_1[0x225] * 0.994);
    param_1[0x409] = (int)((float)param_1[0x244] * -0.15 + (float)param_1[0x409]);
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      FUN_00a81330();
      piVar4 = (int *)FUN_00a7c8a0();
      if (((piVar4 != (int *)0x0) && (iVar3 = FUN_00b86410(), iVar3 != 0)) &&
         (iVar3 = (**(code **)(*piVar4 + 0x228))(), iVar3 != 0)) {
        FUN_00b7b230(afStack_20);
        fStack_30 = 0.0;
        fStack_2c = 0.0;
        fStack_28 = 2.0;
        D3DXVec3TransformNormal(&fStack_30,&fStack_30,param_1 + 4);
        param_1[0x408] = (int)(fStack_2c - ((float)param_1[0x10] + unaff_ESI));
        param_1[0x409] = (int)(fStack_28 - ((float)param_1[0x11] + fStack_38));
        param_1[0x40a] = (int)(fStack_24 - ((float)param_1[0x12] + fStack_34));
        param_1[0x40b] = (int)(afStack_20[0] - fStack_30);
        if (0.0 < (float)param_1[0x409]) {
          param_1[0x408] = 0;
          param_1[0x409] = 0;
          param_1[0x40a] = 0;
        }
        param_1[0x409] = 0;
        fVar1 = (float)param_1[0x40a] * (float)param_1[0x40a] +
                (float)param_1[0x408] * (float)param_1[0x408] +
                (float)param_1[0x409] * (float)param_1[0x409];
        if (fVar1 < 9.0 == (fVar1 == 9.0)) {
          param_1[0x408] = 0;
          param_1[0x409] = 0;
          param_1[0x40a] = 0;
          return;
        }
        fVar5 = (float10)FUN_00fdc1f0();
        param_1[0x408] = (int)(float)((float10)(float)param_1[0x408] * fVar5);
        param_1[0x409] = (int)(float)((float10)(float)param_1[0x409] * fVar5);
        param_1[0x40a] = (int)(float)((float10)(float)param_1[0x40a] * fVar5);
        param_1[0x40b] = (int)(float)(fVar5 * (float10)(float)param_1[0x40b]);
        return;
      }
    }
    if (90000.0 < (float)param_1[0x34a]) {
      pcVar2 = *(code **)(*param_1 + 0x308);
      param_1[0x23d] = param_1[0x34c];
      (*pcVar2)(0x3e99999a,0x3ae4c388,0x3e8efa35,0);
      return;
    }
    break;
  case 8:
    iVar3 = FUN_00b7d0c0();
    FUN_00a9f3c0(iVar3 + 0x494,0x13,0,0,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    iVar3 = FUN_00b7d0c0();
    uVar11 = 0x3f800000;
    iVar3 = iVar3 + 0x494;
    uVar10 = 0;
    uVar9 = 0x8000000;
    uVar8 = 0x3f800000;
    uVar7 = 0;
    uVar6 = 0;
    uVar12 = 0x2d;
    FUN_00b7d0c0(iVar3,0x2d,0,0,0x3f800000,0x8000000,0,0x3f800000);
    FUN_00a9f3c0(iVar3,uVar12,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11);
  case 9:
    FUN_00b94790(0x3f800000,0x3f800000);
    uVar12 = 0;
    FUN_00a92f90(0);
    iVar3 = FUN_0085be10(uVar12);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x388))(0);
      return;
    }
  }
  return;
}

// 00BA3EF0  FUN_00ba3ef0  size=1303  [callgraph]
void __fastcall FUN_00ba3ef0(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  int unaff_EDI;
  float10 fVar7;
  float10 fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  float fStack_3cc;
  float fStack_3c8;
  float fStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  float fStack_3b0;
  float fStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined1 auStack_38c [16];
  undefined4 uStack_37c;
  undefined4 uStack_378;
  float fStack_370;
  float fStack_36c;
  float fStack_368;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined1 auStack_34c [4];
  undefined4 uStack_348;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 *puStack_334;
  undefined4 uStack_330;
  undefined1 uStack_32c;
  undefined1 uStack_32b;
  undefined4 uStack_328;
  uint uStack_2b0;
  uint uStack_2ac;
  undefined4 uStack_23c;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_1dc;
  
  iVar2 = FUN_00a81330();
  if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
    uVar3 = DAT_01bea010 & 0x80000003;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
    }
    if (uVar3 != 1) {
      uVar4 = FUN_00b7f840();
      piVar5 = (int *)FUN_0094e5e0(uVar4);
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0x30))();
      }
    }
    iVar2 = FUN_00a81330();
    fStack_3c4 = 0.0;
    if (iVar2 != 0) {
      fStack_3c4 = (float)FUN_00a7c8a0();
    }
    iVar2 = FUN_00a12210(0x800);
    if (iVar2 != 0) {
      fStack_3b0 = SQRT(*(float *)(iVar2 + 0x14) * *(float *)(iVar2 + 0x14) +
                        *(float *)(iVar2 + 0x10) * *(float *)(iVar2 + 0x10) +
                        *(float *)(iVar2 + 0x18) * *(float *)(iVar2 + 0x18));
      fStack_3ac = SQRT(*(float *)(iVar2 + 0x20) * *(float *)(iVar2 + 0x20) +
                        *(float *)(iVar2 + 0x24) * *(float *)(iVar2 + 0x24) +
                        *(float *)(iVar2 + 0x28) * *(float *)(iVar2 + 0x28));
      fVar1 = SQRT(*(float *)(iVar2 + 0x38) * *(float *)(iVar2 + 0x38) +
                   *(float *)(iVar2 + 0x34) * *(float *)(iVar2 + 0x34) +
                   *(float *)(iVar2 + 0x30) * *(float *)(iVar2 + 0x30));
      fStack_3cc = *(float *)(iVar2 + 0x28) / fVar1;
      fStack_3c8 = *(float *)(iVar2 + 0x38) / fVar1;
      fVar7 = (float10)FUN_00ddbaa0(-(*(float *)(iVar2 + 0x18) / fVar1));
      fVar8 = (float10)fpatan((float10)fStack_3cc,(float10)fStack_3c8);
      fStack_370 = (float)fVar8;
      fStack_36c = (float)fVar7;
      fVar7 = (float10)fpatan((float10)*(float *)(iVar2 + 0x14) / (float10)fStack_3ac,
                              (float10)*(float *)(iVar2 + 0x10) / (float10)fStack_3b0);
      fStack_368 = (float)fVar7;
      fStack_3b0 = *(float *)(iVar2 + 0x40);
      fStack_3ac = *(float *)(iVar2 + 0x44);
      uStack_3a8 = *(undefined4 *)(iVar2 + 0x48);
      uStack_3a4 = *(undefined4 *)(iVar2 + 0x4c);
      uStack_3c0 = 0;
      uStack_3bc = 0;
      uStack_3b8 = 0x43480000;
      puVar12 = &uStack_3c0;
      D3DXVec3TransformNormal(puVar12,puVar12,(float *)(iVar2 + 0x10));
      fStack_3cc = *(float *)(iVar2 + 0x40) + fStack_3cc;
      fStack_3c8 = *(float *)(iVar2 + 0x44) + fStack_3c8;
      fStack_3c4 = *(float *)(iVar2 + 0x48) + fStack_3c4;
      FUN_004105d0();
      FUN_00410710();
      FUN_0041cf30();
      uStack_228 = 0xe;
      uStack_338 = 0x31002;
      uStack_22c = 0x27;
      (**(code **)(**(int **)(param_1 + 0x754) + 4))(200);
      uVar4 = FUN_00fdbc60();
      uVar11 = 200;
      uVar6 = (**(code **)(**(int **)(param_1 + 0x754) + 0xc))(200);
      uVar10 = 200;
      (**(code **)(**(int **)(param_1 + 0x754) + 0x14))(200);
      uVar9 = 200;
      uStack_32c = (**(code **)(**(int **)(param_1 + 0x754) + 0x1c))(200);
      uStack_338 = uVar4;
      puStack_334 = puVar12;
      uStack_330 = uVar6;
      piVar5 = (int *)FUN_00c13920();
      iVar2 = (**(code **)(*piVar5 + 0x6c))();
      if (iVar2 == 6) {
        uStack_348 = 0x310e1;
        uStack_23c = 0x48;
        (**(code **)(**(int **)(param_1 + 0x754) + 4))(0xc9);
        uVar4 = FUN_00fdbc60();
        uVar6 = (**(code **)(**(int **)(param_1 + 0x754) + 0xc))(0xc9);
        uVar11 = (**(code **)(**(int **)(param_1 + 0x754) + 0x14))(0xc9);
        uStack_32c = (**(code **)(**(int **)(param_1 + 0x754) + 0x1c))(0xc9);
        uStack_338 = uVar4;
        puStack_334 = puVar12;
        uStack_330 = uVar6;
      }
      uStack_1dc = FUN_009f8b40(uVar9,uVar10,uVar11);
      uStack_2ac = uStack_2ac | 0x2008800;
      uStack_328 = *(undefined4 *)(param_1 + 0x4f0);
      uStack_2b0 = uStack_2b0 | 0x10300000;
      uStack_32b = 10;
      uStack_33c = 0x55;
      uVar4 = FUN_00a7c7f0();
      FUN_00a7c960(uVar4);
      uVar4 = 0x3f800000;
      piVar5 = (int *)FUN_00c13920();
      iVar2 = (**(code **)(*piVar5 + 0x6c))();
      if (iVar2 == 6) {
        uVar4 = 0x3f19999a;
      }
      if (*(int *)(param_1 + 0x1410) == 0) {
        FUN_0043fe30(&fStack_3cc,param_1 + 0x2760,auStack_38c,uVar4,0x43480000);
      }
      else {
        FUN_00416e30(&fStack_3cc,&stack0xfffffc24,auStack_38c,uVar4,0x43480000);
      }
      piVar5 = (int *)FUN_00c13920();
      iVar2 = (**(code **)(*piVar5 + 0x6c))();
      if (iVar2 == 6) {
        iVar2 = FUN_00a81330();
        if ((iVar2 != 0) && (iVar2 = FUN_00a81330(), iVar2 != 0)) {
          FUN_0043fed0(iVar2,*(undefined2 *)(param_1 + 0x26f4),param_1 + 10000);
        }
        if ((*(int *)(param_1 + 0x1410) != 0) && (iVar2 = FUN_00a81330(), iVar2 != 0)) {
          FUN_0043fed0(iVar2,*(undefined2 *)(param_1 + 0x1374),param_1 + 0x1390);
        }
      }
      FUN_00ad3be0(*(undefined4 *)(unaff_EDI + 0x4f0),auStack_34c);
      uStack_35c = 0;
      uStack_358 = 0;
      uStack_3a8 = 0xffffffff;
      uStack_354 = 0;
      uStack_3a4 = 0xffffffff;
      fStack_3b0 = 0.0;
      uStack_3a0 = 0xffffffff;
      fStack_3ac = 0.0;
      uStack_350 = 0xffffffff;
      uStack_394 = 0xffffffff;
      uStack_39c = 0xfffffffe;
      uStack_398 = 0;
      uStack_378 = 0;
      uStack_390 = 0x1010001;
      uStack_37c = 8;
      FUN_00c5e350(param_1,&fStack_3b0,&uStack_37c);
    }
  }
  return;
}

// 00BA4410  FUN_00ba4410  size=1191  [callgraph]
void __thiscall FUN_00ba4410(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uStack_3e0;
  float fStack_3dc;
  float fStack_3d8;
  float fStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined1 auStack_3a0 [4];
  float fStack_39c;
  float fStack_398;
  float fStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined1 auStack_378 [4];
  undefined1 auStack_374 [4];
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  float fStack_35c;
  float fStack_358;
  float fStack_354;
  uint uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  char *pcStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined2 uStack_31c;
  undefined4 uStack_318;
  uint uStack_2a0;
  uint uStack_29c;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined2 uStack_1c4;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      uVar2 = DAT_01bea010 & 0x80000003;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
      }
      if (uVar2 != 1) {
        uVar3 = FUN_00b7f840();
        piVar4 = (int *)FUN_0094e5e0(uVar3);
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 0x30))();
        }
      }
      iVar1 = FUN_00a12210(0x701);
      uStack_390 = param_2;
      uStack_38c = *(undefined4 *)(param_1 + 0x94);
      uStack_388 = 0;
      uStack_3e0 = *(undefined4 *)(iVar1 + 0x40);
      fStack_3dc = *(float *)(iVar1 + 0x44);
      fStack_3d8 = *(float *)(iVar1 + 0x48);
      fStack_3d4 = *(float *)(iVar1 + 0x4c);
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        iVar1 = FUN_00a7c8a0();
        if (iVar1 != 0) {
          iVar1 = FUN_00a81330();
          iVar5 = 0;
          if (iVar1 != 0) {
            iVar5 = FUN_00a7c8a0();
          }
          uStack_3e0 = *(undefined4 *)(iVar5 + 0x40);
          fStack_3dc = *(float *)(iVar5 + 0x44);
          fStack_3d8 = *(float *)(iVar5 + 0x48);
          fStack_3d4 = *(float *)(iVar5 + 0x4c);
        }
      }
      FUN_00a8d230(&uStack_3b0);
      iVar1 = FUN_009f8b40();
      uStack_370 = uStack_3b0;
      uStack_350 = iVar1 << 0x10 | 6;
      uStack_36c = uStack_3ac;
      uStack_368 = uStack_3a8;
      uStack_364 = uStack_3a4;
      uStack_360 = uStack_3e0;
      fStack_35c = fStack_3dc;
      fStack_358 = fStack_3d8;
      uStack_34c = 0;
      fStack_354 = fStack_3d4;
      uStack_348 = 0;
      uStack_344 = 0;
      pcStack_340 = "throw grenade";
      uStack_33c = 0;
      iVar1 = RayCastSingleHitWork::RayCastSingleHitWork_2
                        (auStack_3a0,0,auStack_378,auStack_374,&uStack_370);
      if (iVar1 != 0) {
        fStack_3dc = fStack_39c;
        fStack_3d8 = fStack_398;
        fStack_3d4 = fStack_394;
      }
      uStack_3d0 = 0;
      uStack_3cc = 0;
      uStack_3c8 = 0x41700000;
      D3DXVec3TransformNormal(&uStack_3d0,&uStack_3d0,param_1 + 0x10);
      fStack_3dc = *(float *)(param_1 + 0x40) + fStack_3dc;
      fStack_3d8 = *(float *)(param_1 + 0x44) + fStack_3d8;
      fStack_3d4 = *(float *)(param_1 + 0x48) + fStack_3d4;
      FUN_004105d0();
      FUN_00410710();
      FUN_0041cf30();
      uStack_228 = 0x11;
      uStack_338 = 0x31011;
      uStack_22c = 0x26;
      uStack_1cc = FUN_009f8b40();
      uStack_2a0 = uStack_2a0 | 0x10000000;
      uStack_29c = uStack_29c | 0x8800;
      uStack_328 = 0;
      uStack_320 = 0x1e;
      uStack_324 = 0x96;
      uStack_31c = 0xa00;
      uStack_32c = 0x57;
      piVar4 = (int *)FUN_00c13920();
      iVar1 = (**(code **)(*piVar4 + 0x6c))();
      if (iVar1 == 2) {
        uStack_2a0 = uStack_2a0 | 0x20;
        uStack_228 = 0x29;
        uStack_338 = 0x31031;
        uStack_22c = 0x52;
        uStack_32c = 0x59;
      }
      piVar4 = (int *)FUN_00c13920();
      iVar1 = (**(code **)(*piVar4 + 0x6c))();
      if (iVar1 == 3) {
        uStack_228 = 0x29;
        uStack_338 = 0x31041;
        uStack_22c = 0x53;
        uStack_32c = 0x5a;
      }
      piVar4 = (int *)FUN_00c13920();
      iVar1 = (**(code **)(*piVar4 + 0x6c))();
      if (iVar1 == 4) {
        uStack_2a0 = uStack_2a0 | 0x20000;
        uStack_338 = 0x31051;
        uStack_22c = 0x51;
        uStack_32c = 0x58;
      }
      piVar4 = (int *)FUN_00c13920();
      iVar1 = (**(code **)(*piVar4 + 0x6c))();
      if (iVar1 == 7) {
        uStack_228 = 0x10;
        uStack_338 = 0x310a1;
      }
      uStack_318 = *(undefined4 *)(param_1 + 0x4f0);
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
      FUN_00416e30(&stack0xfffffc14,&fStack_3dc,&fStack_39c,param_3,0x44480000);
      iVar5 = FUN_00a81330();
      iVar1 = param_1 + 0x11a8;
      if (iVar5 == 0) {
        iVar1 = param_1 + 0x1198;
      }
      FUN_00a7c940(iVar1);
      uStack_1c8 = FUN_00a81330();
      uStack_1bc = 0;
      uStack_1b8 = 0;
      uStack_1b4 = 0;
      uStack_1b0 = uStack_390;
      uStack_1c4 = 0;
      iVar1 = FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),&uStack_33c);
      piVar4 = (int *)FUN_00c13920();
      iVar5 = (**(code **)(*piVar4 + 0x6c))();
      if (iVar5 == 7) {
        FUN_00b8f230(*(undefined4 *)(iVar1 + 0x4f0));
      }
    }
  }
  return;
}

// 00BA48C0  FUN_00ba48c0  size=1503  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00ba48c0(int *param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  float fStack_8;
  float local_4;
  
  local_4 = (float)param_1[0x343];
  if (local_4 < -1000.0) {
    local_4 = -1000.0;
  }
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x998] = 1;
  (*pcVar1)();
  iVar4 = param_1[0x1d9];
  if (*(int *)(iVar4 + 0x104) != 1) {
    *(undefined4 *)(iVar4 + 0x104) = 1;
    *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 4) = 0;
  }
  fStack_8 = 0.0;
  param_1[0xe02] = 0;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x4ae,0,0,0x3f800000,0,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x22a] = 0x3e99999a;
    param_1[0x988] = 0;
    param_1[0xfa9] = 0;
    _DAT_01bea6c0 = 0;
    iVar4 = FUN_00a93610(0);
    *(undefined4 *)(iVar4 + 0x594) = 0x3f000000;
    *(undefined4 *)(iVar4 + 0x590) = 0x3dcccccd;
    iVar4 = param_1[0x463];
    param_1[0xfaa] = 0;
    param_1[0x4ff] = 1;
    param_1[0xfab] = 0x3f9c61aa;
    param_1[0xfac] = 0x3f4ccccd;
    FUN_00e26e90();
    *(undefined4 *)(iVar4 + 0xe4) = 0;
    *(undefined4 *)(iVar4 + 0xe8) = 0;
    *(undefined4 *)(iVar4 + 0xec) = 0;
    break;
  case 1:
    break;
  case 2:
    param_1[0x187] = 3;
    FUN_00a9f4c0(&DAT_016484fc,0x3e888889,0,0);
    FUN_00a9f600(0xffffffff,0,0,0,0xffffffff,0x4af,0x3d888889,0);
    FUN_00a9f600(0xffffffff,0,0,0,0,0x4ae,0x3d888889,0);
    FUN_00a9f600(0xffffffff,0,0,0,1,0x4b0,0x3d888889,0);
    iVar4 = param_1[0x463];
    param_1[0x249] = 0;
    param_1[0x22a] = 0x3e99999a;
    param_1[0x24a] = 0;
    param_1[0x24b] = 0;
    FUN_00e26e90();
    *(undefined4 *)(iVar4 + 0xe4) = 0;
    *(undefined4 *)(iVar4 + 0xe8) = 0;
    *(undefined4 *)(iVar4 + 0xec) = 0;
    goto LAB_00ba4afb;
  case 3:
LAB_00ba4afb:
    FUN_00b8f840(0x3d4ccccd);
    FUN_00b94790(0x3f800000,0x3f800000);
    fVar3 = _DAT_018a80e0;
    fVar2 = _DAT_018a80e0 * 0.15;
    param_1[0xfa9] = (int)fVar2;
    if (200.0 < local_4) {
      param_1[0xfa9] = (int)(fVar2 - (local_4 - 200.0) * 0.00125 * 0.04 * fVar3);
    }
    FUN_00b7cf60((float)param_1[0xfa9] * (float)param_1[0x244],param_1[0x25]);
    param_1[0x249] = 0;
    fVar2 = _DAT_018a80e0;
    if (200.0 < (float)param_1[0x342]) {
      param_1[0x249] = (int)(((float)param_1[0x342] - 200.0) * 0.00125 * -0.13 * _DAT_018a80e0);
      fStack_8 = -1.0;
    }
    if ((float)param_1[0x342] < -200.0) {
      param_1[0x249] =
           (int)(((float)param_1[0x342] + 200.0) * -0.00125 * 0.13 * fVar2 + (float)param_1[0x249]);
      fStack_8 = 1.0;
    }
    fVar5 = (float10)FUN_00ddba30((float)param_1[0x25] + 1.5707964);
    FUN_00b7cf60((float)param_1[0x244] * (float)param_1[0x249],(float)fVar5);
    fVar2 = (fStack_8 - (float)param_1[0x24a]) * 0.08 + (float)param_1[0x24a];
    param_1[0x24a] = (int)fVar2;
    FUN_00a947e0(0,0,0,fVar2);
    if ((float)param_1[0x225] < 0.0) {
      param_1[0x22a] = 0x3a03126f;
    }
    if (0.0 < (float)param_1[0x225] != ((float)param_1[0x225] == 0.0)) {
      param_1[0x22a] = 0x3c23d70a;
    }
    param_1[0x24b] = (int)((float)param_1[0x244] + (float)param_1[0x24b]);
    return;
  case 4:
    param_1[0x187] = 5;
    FUN_00aa4080(0x4b1,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
    iVar4 = param_1[0x463];
    param_1[0x249] = 0;
    param_1[0x22a] = 0x3e99999a;
    param_1[0x24a] = 0;
    FUN_00e26e90();
    *(undefined4 *)(iVar4 + 0xe4) = 0;
    *(undefined4 *)(iVar4 + 0xe8) = 0;
    *(undefined4 *)(iVar4 + 0xec) = 0;
    goto LAB_00ba4d40;
  case 5:
LAB_00ba4d40:
    FUN_00b8f840(0x3d4ccccd);
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = 2;
    }
    fVar3 = _DAT_018a80e0;
    fVar2 = _DAT_018a80e0 * 0.15;
    param_1[0xfa9] = (int)fVar2;
    if (200.0 < local_4) {
      param_1[0xfa9] = (int)(fVar2 - (local_4 - 200.0) * 0.00125 * 0.06 * fVar3);
    }
    FUN_00b7cf60((float)param_1[0xfa9] * (float)param_1[0x244],param_1[0x25]);
    param_1[0x249] = 0;
    fVar2 = _DAT_018a80e0;
    if (200.0 < (float)param_1[0x342]) {
      param_1[0x249] = (int)(((float)param_1[0x342] - 200.0) * 0.00125 * -0.13 * _DAT_018a80e0);
    }
    if ((float)param_1[0x342] < -200.0) {
      param_1[0x249] =
           (int)(((float)param_1[0x342] + 200.0) * -0.00125 * 0.13 * fVar2 + (float)param_1[0x249]);
    }
    fVar5 = (float10)FUN_00ddba30((float)param_1[0x25] + 1.5707964);
    FUN_00b7cf60((float)param_1[0x244] * (float)param_1[0x249],(float)fVar5);
    return;
  default:
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
  return;
}

// 00BA4EC0  FUN_00ba4ec0  size=893  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00ba4ec0(int *param_1)

{
  code *pcVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x998] = 1;
  (*pcVar1)();
  iVar3 = param_1[0x1d9];
  if (*(int *)(iVar3 + 0x104) != 1) {
    *(undefined4 *)(iVar3 + 0x104) = 1;
    *(undefined4 *)(*(int *)(iVar3 + 0xd0) + 4) = 0;
  }
  param_1[0xe02] = 0;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x4b6,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x22a] = 0x3e4ccccd;
    param_1[0x225] = 0x3e851eb8;
    if ((float)param_1[0x11] < 65.0) {
      param_1[0x225] = 0x3e947ae1;
    }
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0xfa9] = (int)((float)param_1[0xfa9] * 0.94);
    (*pcVar1)(0x41700000);
    iVar3 = param_1[0x463];
    FUN_00e26e90();
    *(undefined4 *)(iVar3 + 0xe4) = 0;
    *(undefined4 *)(iVar3 + 0xe8) = 0;
    *(undefined4 *)(iVar3 + 0xec) = 0;
    param_1[0xfb4] = param_1[0xfb0];
    param_1[0xfb5] = param_1[0xfb1];
    param_1[0xfb6] = param_1[0xfb2];
    param_1[0xfb7] = param_1[0xfb3];
    FUN_00b893e0(param_1 + 0xfb0,1);
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0x4b7,0,0x3d088889,0x3f800000,0,0,0x3f800000);
    iVar3 = param_1[0x463];
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00e26e90();
    *(undefined4 *)(iVar3 + 0xe4) = 0;
    *(undefined4 *)(iVar3 + 0xe8) = 0;
    *(undefined4 *)(iVar3 + 0xec) = 0;
    goto LAB_00ba5126;
  case 3:
LAB_00ba5126:
    FUN_00b94790(0x3f800000,0x3f800000);
    FUN_00b7cf60((float)param_1[0xfa9] * (float)param_1[0x244],param_1[0x25]);
    param_1[0x249] = 0;
    fVar2 = _DAT_018a80e0;
    if (200.0 < (float)param_1[0x342]) {
      param_1[0x249] = (int)(((float)param_1[0x342] - 200.0) * 0.00125 * -0.08 * _DAT_018a80e0);
    }
    if ((float)param_1[0x342] < -200.0) {
      param_1[0x249] =
           (int)(((float)param_1[0x342] + 200.0) * -0.00125 * 0.085 * fVar2 + (float)param_1[0x249])
      ;
    }
    goto LAB_00ba51d4;
  default:
    goto switchD_00ba4f14_default;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
  FUN_00b7cf60((float)param_1[0xfa9] * (float)param_1[0x244],param_1[0x25]);
  param_1[0x249] = 0;
  fVar2 = _DAT_018a80e0;
  if (200.0 < (float)param_1[0x342]) {
    param_1[0x249] = (int)(((float)param_1[0x342] - 200.0) * 0.00125 * -0.08 * _DAT_018a80e0);
  }
  if ((float)param_1[0x342] < -200.0) {
    param_1[0x249] =
         (int)(((float)param_1[0x342] + 200.0) * -0.00125 * 0.08 * fVar2 + (float)param_1[0x249]);
  }
LAB_00ba51d4:
  fVar4 = (float10)FUN_00ddba30((float)param_1[0x25] + 1.5707964);
  FUN_00b7cf60((float)param_1[0x249] * (float)param_1[0x244],(float)fVar4);
switchD_00ba4f14_default:
  if ((float)param_1[0x225] < 0.0) {
    param_1[0x22a] = 0x3ba3d70a;
  }
  if (0.0 < (float)param_1[0x225] != ((float)param_1[0x225] == 0.0)) {
    param_1[0x22a] = 0x3c03126f;
  }
  return;
}

// 00BA5730  FUN_00ba5730  size=538  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00ba5730(int *param_1)

{
  code *pcVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x998] = 1;
  (*pcVar1)();
  iVar3 = param_1[0x1d9];
  if (*(int *)(iVar3 + 0x104) != 1) {
    *(undefined4 *)(iVar3 + 0x104) = 1;
    *(undefined4 *)(*(int *)(iVar3 + 0xd0) + 4) = 0;
  }
  pcVar1 = *(code **)(*param_1 + 0x220);
  param_1[0xe02] = 0;
  (*pcVar1)(0x40800000);
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x4b9,0,0x3d088889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x22a] = 0x3f000000;
    iVar3 = param_1[0x463];
    param_1[0xfa9] = (int)((float)param_1[0xfa9] * 0.7);
    FUN_00e26e90();
    *(undefined4 *)(iVar3 + 0xe4) = 0;
    *(undefined4 *)(iVar3 + 0xe8) = 0;
    *(undefined4 *)(iVar3 + 0xec) = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00b8f840(0x3d4ccccd);
  fVar4 = (float10)FUN_00fdc1f0();
  param_1[0xfa9] = (int)(float)(fVar4 * (float10)(float)param_1[0xfa9]);
  FUN_00b94790(0x3f800000,0x3f800000);
  FUN_00b7cf60((float)param_1[0x244] * (float)param_1[0xfa9],param_1[0x25]);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00a8caf0(0x38,2,0,0);
    param_1[0x22a] = 0x3e99999a;
  }
  param_1[0x249] = 0;
  fVar2 = _DAT_018a80e0;
  if (200.0 < (float)param_1[0x342]) {
    param_1[0x249] = (int)(((float)param_1[0x342] - 200.0) * 0.00125 * -0.13 * _DAT_018a80e0);
  }
  if ((float)param_1[0x342] < -200.0) {
    param_1[0x249] =
         (int)(((float)param_1[0x342] + 200.0) * -0.00125 * 0.13 * fVar2 + (float)param_1[0x249]);
  }
  fVar4 = (float10)FUN_00ddba30((float)param_1[0x25] + 1.5707964);
  FUN_00b7cf60((float)param_1[0x249] * (float)param_1[0x244],(float)fVar4);
  return;
}

// 00BA5950  FUN_00ba5950  size=970  [callgraph]
void __fastcall FUN_00ba5950(int *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float *pfStack_78;
  float fStack_74;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float afStack_48 [4];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  pcVar3 = *(code **)(*param_1 + 0x314);
  param_1[0x998] = 1;
  fStack_74 = 1.711349e-38;
  (*pcVar3)();
  switch(param_1[0x187]) {
  case 0:
    fStack_74 = 1.0;
    pfStack_78 = (float *)0x0;
    FUN_00aa4080(0x4bd,0,0,0x3f800000,0);
    iVar5 = param_1[0x463];
    if (iVar5 != 0) {
      fStack_74 = 1.711361e-38;
      FUN_00e26e90();
      *(undefined4 *)(iVar5 + 0xe4) = 0;
      *(undefined4 *)(iVar5 + 0xe8) = 0;
      *(undefined4 *)(iVar5 + 0xec) = 0;
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x988] = 0;
    fStack_74 = 1.7113676e-38;
    FUN_00a7c950();
  case 1:
    fStack_74 = 1.0;
    pfStack_78 = (float *)0x3f800000;
    FUN_00b94790();
    return;
  case 2:
    fStack_74 = 1.0;
    pfStack_78 = (float *)0x0;
    FUN_00aa4080(0x4bd,0,0x3d088889,0x3f800000,0);
    param_1[0x187] = param_1[0x187] + 1;
    if (((DAT_018b9174 == 0xa15) && (126.0 < (float)param_1[0x12])) &&
       ((float)param_1[0x12] < 150.0)) {
      fStack_74 = 0.0;
      pfStack_78 = (float *)0xbf;
      (**(code **)(*param_1 + 0x3e0))();
    }
    param_1[0x248] = 0;
  case 3:
    param_1[0x248] = (int)((float)param_1[0x244] + (float)param_1[0x248]);
    fStack_74 = 1.0;
    pfStack_78 = (float *)0x3f800000;
    FUN_00b94790();
    fStack_74 = 1.711395e-38;
    (**(code **)(*param_1 + 0x318))();
    fStack_74 = 1.7113966e-38;
    iVar5 = FUN_00a81330();
    if (iVar5 != 0) {
      fStack_74 = 1.7113992e-38;
      iVar5 = FUN_00a81330();
      if (iVar5 != 0) {
        fStack_74 = 1.7114016e-38;
        iVar6 = FUN_00a7c8a0();
        iVar5 = *(int *)(iVar6 + 0x44);
        iVar1 = *(int *)(iVar6 + 0x48);
        iVar2 = *(int *)(iVar6 + 0x4c);
        param_1[0x14] = *(int *)(iVar6 + 0x40);
        param_1[0x15] = iVar5;
        param_1[0x16] = iVar1;
        param_1[0x17] = iVar2;
        fStack_50 = 0.0;
        fStack_4c = 0.0;
        afStack_48[0] = 5.0;
        fStack_58 = -5.0;
        fStack_74 = 1.7114118e-38;
        iVar5 = FUN_00a7c8a0();
        fStack_74 = (float)(iVar5 + 0x10);
        pfStack_78 = &fStack_50;
        D3DXVec3TransformNormal(pfStack_78);
        fStack_58 = *(float *)(iVar5 + 0x44) + fStack_58;
        fStack_54 = *(float *)(iVar5 + 0x48) + fStack_54;
        iVar5 = FUN_00a7c8a0();
        D3DXVec3TransformNormal(&stack0xffffff94,&stack0xffffff94,iVar5 + 0x10);
        pfStack_78 = (float *)((float)pfStack_78 + *(float *)(iVar5 + 0x40));
        fStack_74 = *(float *)(iVar5 + 0x44) + fStack_74;
        thunk_FUN_00de19d0(param_1 + 0x10,&stack0xffffff98,&pfStack_78,&fStack_38);
        fStack_58 = (float)param_1[0x10] - fStack_38;
        fStack_54 = (float)param_1[0x11] - fStack_34;
        fStack_50 = (float)param_1[0x12] - fStack_30;
        fStack_4c = (float)param_1[0x13] - fStack_2c;
        fVar4 = fStack_50 * fStack_50 + fStack_58 * fStack_58 + fStack_54 * fStack_54;
        if (0.0001 <= SQRT(fVar4)) {
          if (fVar4 <= 0.0) {
            FUN_00dd5650(&DAT_0163d0ac);
            fStack_58 = 0.0;
            fStack_54 = 1.0;
            fStack_50 = 0.0;
            FUN_00b893e0(&fStack_58,0);
          }
          else {
            FUN_00ddf460(&fStack_58,&fStack_58);
            FUN_00b893e0(&fStack_58,0);
          }
        }
        afStack_48[0] = 0.0;
        afStack_48[1] = 0.2;
        afStack_48[2] = 0.0;
        iVar5 = FUN_00a7c8a0();
        if ((iVar5 != 0) && (iVar5 = FUN_00a7c8a0(), *(int *)(iVar5 + 0x4b0) == 0x30330)) {
          afStack_48[1] = 0.08;
        }
        D3DXVec3TransformNormal(afStack_48,afStack_48,param_1 + 0x2c);
        param_1[0x14] = (int)((float)param_1[0x14] + fStack_54);
        param_1[0x15] = (int)((float)param_1[0x15] + fStack_50);
        param_1[0x16] = (int)((float)param_1[0x16] + fStack_4c);
        param_1[0x17] = (int)((float)param_1[0x17] + afStack_48[0]);
        return;
      }
    }
  default:
    return;
  }
}

// 00BA5D30  FUN_00ba5d30  size=341  [callgraph]
void __fastcall FUN_00ba5d30(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  FUN_00a7c950();
  FUN_00b8fe40(0x40490fdb,0,0);
  iVar1 = FUN_00a8cac0();
  if (((iVar1 == 2) ||
      ((iVar1 = FUN_00a8cac0(), iVar1 == 1 &&
       (*(float *)(param_1 + 0x924) < *(float *)(param_1 + 0x920) !=
        (*(float *)(param_1 + 0x924) == *(float *)(param_1 + 0x920)))))) &&
     (((*(uint *)(param_1 + 0xcfc) & *(uint *)(param_1 + 0xe18)) != 0 ||
      ((*(int *)(param_1 + 0x40cc) != 0 && (90000.0 < *(float *)(param_1 + 0xd28))))))) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      FUN_00a81330();
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        uVar6 = 0;
        uVar5 = 0;
        uVar4 = 0;
        uVar2 = 0x80003;
        FUN_00a7c8a0(0x80003,0,0,0);
        FUN_00a8caf0(uVar2,uVar4,uVar5,uVar6);
      }
      FUN_00a81330();
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      iVar1 = FUN_00c196a0(10,0);
      iVar1 = FUN_00c19c00(10,0,iVar1 + -1);
      iVar3 = FUN_00a81330();
      if (iVar1 != iVar3) {
        FUN_00a8caf0(0x41,0,0,0);
        return;
      }
    }
    FUN_00a8caf0(0x43,0,0,0);
  }
  return;
}

// 00BA5E90  FUN_00ba5e90  size=1109  [callgraph]
void __fastcall FUN_00ba5e90(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iStack_d4;
  int *piStack_d0;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [4];
  int iStack_7c;
  int iStack_74;
  undefined1 auStack_6c [4];
  float fStack_68;
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [36];
  int iStack_2c;
  int iStack_24;
  
  FUN_00a12210(0);
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
    FUN_00a8d280();
    FUN_00a9dd90(*(undefined4 *)(param_1 + 0xa60));
    *(undefined4 *)(param_1 + 0xdcc) = 0x43960000;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  local_94 = param_1 + 0xb80;
  iVar6 = FUN_00a81330();
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    FUN_00a81330();
    iVar6 = FUN_00a7c8a0();
  }
  iVar7 = FUN_00a81330();
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    FUN_00a81330();
    iVar7 = FUN_00a7c8a0();
  }
  if ((iVar6 != 0) && (iVar7 != 0)) {
    fVar2 = *(float *)(param_1 + 0xdcc) - *(float *)(param_1 + 0xb74);
    *(float *)(param_1 + 0xdcc) = fVar2;
    if ((*(int *)(iVar6 + 0x4e4) == 0) && (((*(byte *)(iVar6 + 0x4c0) & 1) != 0 && (0.0 <= fVar2))))
    {
      local_b0 = 0;
      local_ac = 0x3e99999a;
      local_a8 = 0x40133333;
      D3DXVec3TransformNormal(&local_b0,&local_b0,iVar7 + 0x10);
      fStack_bc = *(float *)(iVar7 + 0x40) + fStack_bc;
      fStack_b8 = *(float *)(iVar7 + 0x44) + fStack_b8;
      fStack_b4 = *(float *)(iVar7 + 0x48) + fStack_b4;
      fStack_c0 = *(float *)(iVar7 + 0x4c);
      iVar6 = FUN_00a12210(*(undefined4 *)(param_1 + 0xb7c));
      if (iVar6 != 0) {
        fStack_c0 = *(float *)(iVar6 + 0x4c);
      }
      fStack_8c = 0.0;
      fStack_88 = 0.0;
      uStack_84 = 0xbf800000;
      D3DXVec3TransformNormal(&fStack_8c,&fStack_8c,iStack_d4 + 0x10);
      FUN_00b90310(&fStack_c0,auStack_80,0x3dcccccd,0x3d8efa35,0);
      fStack_90 = *(float *)(iStack_d4 + 0x40);
      fStack_8c = *(float *)(iStack_d4 + 0x44);
      fStack_88 = *(float *)(iStack_d4 + 0x48);
      fVar2 = *(float *)(iStack_d4 + 0x4c);
      pfVar1 = (float *)(param_1 + 0xb60);
      *pfVar1 = fStack_c0 - fStack_90;
      *(float *)(param_1 + 0xb64) = fStack_bc - fStack_8c;
      *(float *)(param_1 + 0xb68) = fStack_b8 - fStack_88;
      *(float *)(param_1 + 0xb6c) = fStack_b4 - fVar2;
      fVar2 = *(float *)(param_1 + 0xb64) * *(float *)(param_1 + 0xb64) + *pfVar1 * *pfVar1 +
              *(float *)(param_1 + 0xb68) * *(float *)(param_1 + 0xb68);
      if (fVar2 < 0.0 == (fVar2 == 0.0)) {
        FUN_00ddf460(pfVar1,pfVar1);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        *pfVar1 = 0.0;
        *(undefined4 *)(param_1 + 0xb64) = 0x3f800000;
        *(undefined4 *)(param_1 + 0xb68) = 0;
      }
      fVar2 = *(float *)(param_1 + 0xdc4) * 0.3;
      *pfVar1 = fVar2 * *pfVar1;
      *(float *)(param_1 + 0xb64) = *(float *)(param_1 + 0xb64) * fVar2;
      *(float *)(param_1 + 0xb68) = *(float *)(param_1 + 0xb68) * fVar2;
      *(float *)(param_1 + 0xb6c) = *(float *)(param_1 + 0xb6c) * fVar2;
      fVar2 = *(float *)(param_1 + 0xb74);
      fVar5 = fVar2 * *pfVar1 + fStack_90;
      fVar4 = *(float *)(param_1 + 0xb64) * fVar2 + fStack_8c;
      fVar3 = *(float *)(param_1 + 0xb68) * fVar2 + fStack_88;
      *(float *)(iStack_d4 + 0x40) = fVar5;
      *(float *)(iStack_d4 + 0x44) = fVar4;
      *(float *)(iStack_d4 + 0x48) = fVar3;
      fVar5 = fVar5 - fStack_c0;
      fVar4 = fVar4 - fStack_bc;
      fVar3 = fVar3 - fStack_b8;
      fVar2 = *(float *)(param_1 + 0xdcc) - *(float *)(param_1 + 0xb74);
      *(float *)(param_1 + 0xdcc) = fVar2;
      if ((0.0 <= fVar2) &&
         (fVar2 = *(float *)(param_1 + 0xb74) * *(float *)(param_1 + 0xdc4) + 0.3,
         fVar2 * fVar2 < fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3)) {
        D3DXMatrixMultiply(auStack_50,param_1 + 0xb90,iStack_d4 + 0x10);
        thunk_FUN_00ddfff0(auStack_6c,auStack_5c);
        iStack_7c = iStack_2c;
        iStack_74 = iStack_24;
        iVar6 = (**(code **)(*piStack_d0 + 0x18c))();
        if (iVar6 != 0) {
          piStack_d0[0x14] = iStack_7c;
          piStack_d0[0x15] =
               (int)(*(float *)(param_1 + 0xb64) * *(float *)(param_1 + 0xb74) +
                    (float)piStack_d0[0x15]);
          piStack_d0[0x16] = iStack_74;
          piStack_d0[0x25] = (int)(fStack_68 * -1.0);
          switchD_0080dbae::default();
          (**(code **)(*piStack_d0 + 0x18c))();
          return;
        }
        FUN_00a7c950();
        return;
      }
    }
  }
  FUN_00a8caf0(1,4,0,0);
  return;
}

// 00BA62F0  FUN_00ba62f0  size=723  [callgraph]
void __thiscall
FUN_00ba62f0(int param_1,float *param_2,float param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  *(undefined4 *)(param_1 + 0xa74) = param_7;
  uVar5 = FUN_00a7c7f0();
  FUN_00a7c960(uVar5);
  iVar6 = FUN_00a12210(0);
  FUN_008a4f80(param_5);
  *(float *)(param_1 + 0xdc0) = param_3;
  pfVar1 = (float *)(param_1 + 0xb60);
  *(undefined4 *)(param_1 + 0xdc4) = param_4;
  *pfVar1 = *param_2;
  *(float *)(param_1 + 0xb64) = param_2[1];
  *(float *)(param_1 + 0xb68) = param_2[2];
  *(float *)(param_1 + 0xb6c) = param_2[3];
  *(undefined4 *)(param_1 + 0xdc8) = param_6;
  fVar2 = *(float *)(param_1 + 0xb64) * *(float *)(param_1 + 0xb64) + *pfVar1 * *pfVar1 +
          *(float *)(param_1 + 0xb68) * *(float *)(param_1 + 0xb68);
  if (fVar2 < 0.0 == (fVar2 == 0.0)) {
    FUN_00ddf460(pfVar1,pfVar1);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    *pfVar1 = 0.0;
    *(undefined4 *)(param_1 + 0xb64) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xb68) = 0;
  }
  *pfVar1 = *pfVar1 * param_3;
  *(float *)(param_1 + 0xb64) = param_3 * *(float *)(param_1 + 0xb64);
  *(float *)(param_1 + 0xb68) = param_3 * *(float *)(param_1 + 0xb68);
  *(float *)(param_1 + 0xb6c) = param_3 * *(float *)(param_1 + 0xb6c);
  iVar7 = FUN_00c15010(&local_30);
  if (iVar7 != 0) {
    local_50 = local_30 - *(float *)(iVar6 + 0x40);
    local_4c = local_2c - *(float *)(iVar6 + 0x44);
    local_48 = local_28 - *(float *)(iVar6 + 0x48);
    local_44 = local_24 - *(float *)(iVar6 + 0x4c);
    fVar2 = local_48 * local_48 + local_50 * local_50 + local_4c * local_4c;
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(&local_50,&local_50);
      fVar2 = local_48;
      fVar3 = local_4c;
      fVar4 = local_50;
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fVar2 = 0.0;
      fVar3 = 1.0;
      fVar4 = 0.0;
    }
    *pfVar1 = fVar4 * param_3;
    *(float *)(param_1 + 0xb64) = fVar3 * param_3;
    *(float *)(param_1 + 0xb68) = fVar2 * param_3;
    *(float *)(param_1 + 0xb6c) = param_3 * local_44;
  }
  iVar7 = *(int *)(param_1 + 0x618);
  if (iVar7 != 0) {
    if ((iVar7 == 1) || (iVar7 == 3)) {
      FUN_00a8caf0(1,4,0,0);
    }
    return;
  }
  local_20 = *pfVar1 + *(float *)(iVar6 + 0x40);
  local_1c = *(float *)(iVar6 + 0x44) + *(float *)(param_1 + 0xb64);
  local_18 = *(float *)(iVar6 + 0x48) + *(float *)(param_1 + 0xb68);
  local_14 = *(float *)(iVar6 + 0x4c) + *(float *)(param_1 + 0xb6c);
  local_40 = 0;
  local_3c = 0;
  local_38 = 0x3f800000;
  D3DXVec3TransformNormal(&local_40,&local_40,iVar6 + 0x10);
  FUN_00b90310(&local_2c,&local_4c,0x3f800000,0x40490fdb,1);
  FUN_00a8caf0(1,0,0,0);
  return;
}

// 00BA65D0  cPl0000SaiWeapon::vf1A4  size=566  [class]
void __thiscall cPl0000SaiWeapon::vf1A4(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68 [2];
  int local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  
  if (*(int *)(param_1 + 0x988) != 0) {
    *(undefined4 *)(param_1 + 0xd30) = *(undefined4 *)(param_2 + 0x100);
    *(undefined4 *)(param_1 + 0xd34) = *(undefined4 *)(param_2 + 0x104);
    *(undefined4 *)(param_1 + 0xd38) = *(undefined4 *)(param_2 + 0x108);
    *(undefined4 *)(param_1 + 0xd3c) = *(undefined4 *)(param_2 + 0x10c);
    *(undefined4 *)(param_1 + 0xd40) = *(undefined4 *)(param_2 + 0x110);
    *(undefined4 *)(param_1 + 0xd44) = *(undefined4 *)(param_2 + 0x114);
    *(undefined4 *)(param_1 + 0xd48) = *(undefined4 *)(param_2 + 0x118);
    *(undefined4 *)(param_1 + 0xd4c) = *(undefined4 *)(param_2 + 0x11c);
    *(undefined4 *)(param_1 + 0xbd0) = 1;
    FUN_00448f50(param_2);
    if ((param_3 & 0x8000) == 0) {
      if ((param_3 & 1) != 0) {
        FUN_00a81330();
        piVar1 = (int *)FUN_00a7c8a0();
        iVar2 = FUN_00a81330();
        if ((iVar2 != 0) && (piVar1 != (int *)0x0)) {
          FUN_00a974f0((undefined4 *)(param_1 + 0xd30));
          *(undefined4 *)(param_1 + 0xbc8) = 0;
          *(undefined4 *)(param_1 + 0xbc4) = 0;
          *(undefined4 *)(param_1 + 0xbc0) = 0;
          *(undefined4 *)(param_1 + 0xbbc) = 0;
          *(undefined4 *)(param_1 + 0xbb4) = 0;
          *(undefined4 *)(param_1 + 0xbb0) = 0;
          *(undefined4 *)(param_1 + 0xbac) = 0;
          *(undefined4 *)(param_1 + 0xba8) = 0;
          *(undefined4 *)(param_1 + 0xba0) = 0;
          *(undefined4 *)(param_1 + 0xb9c) = 0;
          *(undefined4 *)(param_1 + 0xb98) = 0;
          *(undefined4 *)(param_1 + 0xb94) = 0;
          *(undefined4 *)(param_1 + 0xbcc) = 0x3f800000;
          *(undefined4 *)(param_1 + 3000) = 0x3f800000;
          *(undefined4 *)(param_1 + 0xba4) = 0x3f800000;
          *(undefined4 *)(param_1 + 0xb90) = 0x3f800000;
          iVar2 = FUN_00a12210(0);
          *(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(param_1 + 0xd30);
          *(undefined4 *)(iVar2 + 0x44) = *(undefined4 *)(param_1 + 0xd34);
          *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(param_1 + 0xd38);
          local_60 = piVar1[0x10];
          local_58 = piVar1[0x12];
          local_54 = piVar1[0x13];
          iVar2 = FUN_00a12210(0);
          local_5c = *(undefined4 *)(iVar2 + 0x44);
          local_70 = 0;
          local_6c = 0;
          local_68[0] = 0x3f800000;
          iVar2 = FUN_00a12210(0);
          D3DXVec3TransformNormal(&local_70,&local_70,iVar2 + 0x10);
          FUN_00b90310(&local_6c,&stack0xffffff84,0x3f800000,0x40490fdb,0);
          D3DXMatrixInverse(&local_5c,0,piVar1 + 4);
          iVar2 = FUN_00a12210(0);
          D3DXMatrixMultiply((undefined4 *)(param_1 + 0xb90),iVar2 + 0x10,local_68);
          (**(code **)(*piVar1 + 0x18c))();
          uVar4 = 0xffffffff;
          uVar3 = FUN_00a81330(0xffffffff);
          FUN_00b80760(uVar3,uVar4);
        }
      }
    }
    else {
      if (*(int *)(param_1 + 0x618) == 1) {
        FUN_00a8caf0(1,4,0,0);
      }
      if (*(int *)(param_1 + 0x618) == 2) {
        FUN_00a8caf0(1,4,0,0);
        return;
      }
    }
  }
  return;
}

// 00BDC0F0  cPl0000SaiWeapon::vf48  size=36  [class]
void __fastcall cPl0000SaiWeapon::vf48(int param_1)

{
  float10 fVar1;
  
  FUN_00a92fb0();
  fVar1 = (float10)FUN_00e049b0();
  *(float *)(param_1 + 0xb74) = (float)fVar1;
  FUN_00bc8a30();
  BehaviorDebrisActor::vf48();
  return;
}

// 00BDC120  FUN_00bdc120  size=381  [callgraph]
void __fastcall FUN_00bdc120(int param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_160 [348];
  
  iVar3 = FUN_00a12210(0);
  iVar4 = FUN_00a12210(1);
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
    *(ushort *)(iVar3 + 0xa2) = *(ushort *)(iVar3 + 0xa2) & 0xfffb;
    if (iVar4 != 0) {
      *(undefined4 *)(iVar4 + 0x94) = 0;
    }
    pcVar2 = *(code **)(*(int *)(param_1 + 0x990) + 8);
    *(undefined4 *)(param_1 + 0x980) = 1;
    *(undefined4 *)(param_1 + 0x984) = 1;
    (*pcVar2)(0x41200000,0,0);
    uVar6 = 0;
    uVar5 = FUN_00a7c8a0(0);
    FUN_004039a0(2,uVar5,uVar6);
    if (param_1 + 0x990 != 0) {
      FUN_00dffb20(param_1 + 0x990);
    }
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),auStack_160);
    *(undefined4 *)(param_1 + 0xa44) = 0;
    *(undefined4 *)(param_1 + 0xa40) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  if ((DAT_01bea064 & 0x1000) == 0) {
    *(float *)(param_1 + 0xa44) = *(float *)(param_1 + 0xb74) + *(float *)(param_1 + 0xa44);
  }
  fVar1 = *(float *)(param_1 + 0xa44);
  if (NAN(fVar1) || 300.0 < fVar1 == (fVar1 == 300.0)) {
    return;
  }
  if (*(int *)(param_1 + 0xa40) == 0) {
    (**(code **)(*(int *)(param_1 + 0x990) + 8))(0x41200000,0,0);
    if ((DAT_01bea064 & 0x1000) == 0) {
      FUN_00bc89d0(3,param_1 + 0x990);
      FUN_00bc89d0(4,param_1 + 0x990);
      *(undefined4 *)(param_1 + 0xa40) = 1;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0xa40) = 1;
  return;
}

// 00BDC2A0  FUN_00bdc2a0  size=208  [callgraph]
void __fastcall FUN_00bdc2a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x618) == 0) {
    iVar1 = param_1 + 0x990;
    (**(code **)(*(int *)(param_1 + 0x990) + 8))(0x41200000,0,0);
    uVar3 = 0;
    uVar2 = FUN_00a7c8a0(0);
    FUN_004039a0(5,uVar2,uVar3);
    if (iVar1 != 0) {
      FUN_00dffb20(iVar1);
    }
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),&stack0xfffffe94);
    uVar3 = 0;
    uVar2 = FUN_00a7c8a0(0);
    FUN_004039a0(2,uVar2,uVar3);
    if (iVar1 != 0) {
      FUN_00dffb20(iVar1);
    }
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),&stack0xfffffe94);
    *(undefined4 *)(param_1 + 0xa44) = 0;
    *(undefined4 *)(param_1 + 0xa40) = 0;
  }
  return;
}

// 00BDC370  FUN_00bdc370  size=1405  [callgraph]
void __fastcall FUN_00bdc370(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  float local_30;
  float local_2c;
  float local_28;
  
  if ((*(int *)(param_1 + 0xdd8) != 0) && (*(int *)(param_1 + 0x61c) < 4)) {
    *(undefined4 *)(param_1 + 0x61c) = 4;
  }
  iVar7 = FUN_00a12210(0);
  iVar8 = FUN_00a12210(1);
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    *(undefined4 *)(param_1 + 0x61c) = 1;
    FUN_00b901d0();
    *(ushort *)(iVar7 + 0xa2) = *(ushort *)(iVar7 + 0xa2) | 4;
    *(undefined4 *)(param_1 + 0xb70) = *(undefined4 *)(param_1 + 0xdc8);
    *(undefined4 *)(param_1 + 0x980) = 0;
    *(undefined4 *)(param_1 + 0x984) = 0;
    FUN_00bc89d0(*(int *)(param_1 + 0xa40) != 0,param_1 + 0x990);
    fVar2 = *(float *)(param_1 + 0xb64);
    fVar3 = *(float *)(param_1 + 0xb68);
    *(float *)(iVar7 + 0x40) = *(float *)(param_1 + 0xb60) * -0.3 + *(float *)(iVar7 + 0x40);
    *(float *)(iVar7 + 0x44) = fVar2 * -0.3 + *(float *)(iVar7 + 0x44);
    *(float *)(iVar7 + 0x48) = fVar3 * -0.3 + *(float *)(iVar7 + 0x48);
    *(undefined4 *)(param_1 + 0x988) = 1;
    return;
  case 1:
    *(undefined4 *)(param_1 + 0x988) = 1;
    fVar2 = *(float *)(param_1 + 0xb74);
    fVar3 = *(float *)(param_1 + 0xb64);
    fVar4 = *(float *)(param_1 + 0xb68);
    *(float *)(iVar7 + 0x40) = *(float *)(param_1 + 0xb60) * fVar2 + *(float *)(iVar7 + 0x40);
    *(float *)(iVar7 + 0x44) = fVar3 * fVar2 + *(float *)(iVar7 + 0x44);
    *(float *)(iVar7 + 0x48) = fVar4 * fVar2 + *(float *)(iVar7 + 0x48);
    fVar2 = *(float *)(param_1 + 0xb70) - *(float *)(param_1 + 0xb74);
    *(float *)(param_1 + 0xb70) = fVar2;
    if (fVar2 < 0.0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 2:
    *(undefined4 *)(param_1 + 0xb70) = 0x40a00000;
    *(undefined4 *)(param_1 + 0x61c) = 3;
    FUN_00a8d280();
    FUN_00a9dd90(*(undefined4 *)(param_1 + 0xa60));
    FUN_00b901d0();
  case 3:
    *(undefined4 *)(param_1 + 0x988) = 1;
    iVar8 = FUN_00a81330();
    if (iVar8 != 0) {
      FUN_00a81330();
      iVar8 = FUN_00a7c8a0();
      if (iVar8 != 0) {
        fVar2 = *(float *)(iVar8 + 0x40);
        fVar3 = *(float *)(iVar8 + 0x44);
        fVar4 = *(float *)(iVar8 + 0x48);
        iVar8 = FUN_00a12210(*(undefined4 *)(param_1 + 0xb7c));
        if (iVar8 != 0) {
          fVar2 = *(float *)(iVar8 + 0x40);
          fVar3 = *(float *)(iVar8 + 0x44);
          fVar4 = *(float *)(iVar8 + 0x48);
        }
        fVar2 = *(float *)(iVar7 + 0x40) - fVar2;
        fVar3 = *(float *)(iVar7 + 0x44) - fVar3;
        fVar4 = *(float *)(iVar7 + 0x48) - fVar4;
        fVar5 = *(float *)(param_1 + 0xb70) - *(float *)(param_1 + 0xb74);
        *(float *)(param_1 + 0xb70) = fVar5;
        if (fVar5 < 0.0) {
          *(undefined4 *)(param_1 + 0x61c) = 4;
          return;
        }
        fVar2 = fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4;
        if (fVar2 < 0.25 == (fVar2 == 0.25)) {
          return;
        }
      }
    }
    goto LAB_00bdc5e4;
  case 4:
    *(undefined4 *)(param_1 + 0xb70) = 0x42f00000;
    *(undefined4 *)(param_1 + 0x61c) = 5;
    FUN_00a8d280();
    FUN_00a9dd90(*(undefined4 *)(param_1 + 0xa60));
  case 5:
    iVar8 = FUN_00a81330();
    if (iVar8 != 0) {
      FUN_00a81330();
      iVar8 = FUN_00a7c8a0();
      if (iVar8 != 0) {
        local_30 = *(float *)(iVar8 + 0x40);
        local_2c = *(float *)(iVar8 + 0x44);
        local_28 = *(float *)(iVar8 + 0x48);
        fVar2 = *(float *)(iVar8 + 0x4c);
        iVar8 = FUN_00a12210(*(undefined4 *)(param_1 + 0xb7c));
        if (iVar8 != 0) {
          local_30 = *(float *)(iVar8 + 0x40);
          local_2c = *(float *)(iVar8 + 0x44);
          local_28 = *(float *)(iVar8 + 0x48);
          fVar2 = *(float *)(iVar8 + 0x4c);
        }
        fVar3 = *(float *)(iVar7 + 0x40);
        pfVar1 = (float *)(param_1 + 0xb60);
        fVar4 = *(float *)(iVar7 + 0x44);
        fVar5 = *(float *)(iVar7 + 0x48);
        fVar6 = *(float *)(iVar7 + 0x4c);
        *pfVar1 = local_30 - fVar3;
        *(float *)(param_1 + 0xb64) = local_2c - fVar4;
        *(float *)(param_1 + 0xb68) = local_28 - fVar5;
        *(float *)(param_1 + 0xb6c) = fVar2 - fVar6;
        fVar2 = *(float *)(param_1 + 0xb64) * *(float *)(param_1 + 0xb64) + *pfVar1 * *pfVar1 +
                *(float *)(param_1 + 0xb68) * *(float *)(param_1 + 0xb68);
        if (fVar2 < 0.0 == (fVar2 == 0.0)) {
          FUN_00ddf460(pfVar1,pfVar1);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          *pfVar1 = 0.0;
          *(undefined4 *)(param_1 + 0xb64) = 0x3f800000;
          *(undefined4 *)(param_1 + 0xb68) = 0;
        }
        fVar2 = *(float *)(param_1 + 0xdc4);
        *pfVar1 = fVar2 * *pfVar1;
        *(float *)(param_1 + 0xb64) = *(float *)(param_1 + 0xb64) * fVar2;
        *(float *)(param_1 + 0xb68) = *(float *)(param_1 + 0xb68) * fVar2;
        *(float *)(param_1 + 0xb6c) = fVar2 * *(float *)(param_1 + 0xb6c);
        fVar2 = *(float *)(param_1 + 0xb74);
        fVar3 = fVar2 * *pfVar1 + fVar3;
        fVar4 = *(float *)(param_1 + 0xb64) * fVar2 + fVar4;
        fVar5 = *(float *)(param_1 + 0xb68) * fVar2 + fVar5;
        *(float *)(iVar7 + 0x40) = fVar3;
        *(float *)(iVar7 + 0x44) = fVar4;
        *(float *)(iVar7 + 0x48) = fVar5;
        fVar3 = fVar3 - local_30;
        fVar4 = fVar4 - local_2c;
        fVar5 = fVar5 - local_28;
        fVar3 = fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5;
        fVar2 = *(float *)(param_1 + 0xb70) - *(float *)(param_1 + 0xb74);
        *(float *)(param_1 + 0xb70) = fVar2;
        if ((fVar2 < 0.0) ||
           (fVar2 = *(float *)(param_1 + 0xb74) * *(float *)(param_1 + 0xdc4),
           fVar3 <= (fVar2 + 0.1) * (fVar2 + 0.1))) {
          *(undefined4 *)(param_1 + 0x61c) = 6;
          *(undefined4 *)(param_1 + 0x980) = 1;
          return;
        }
        fVar4 = fVar2 * 2.5 + 0.1;
        if (fVar3 <= fVar4 * fVar4) {
          *(undefined4 *)(param_1 + 0x980) = 1;
        }
        fVar2 = fVar2 * 5.5 + 0.1;
        if (fVar2 * fVar2 < fVar3) {
          return;
        }
        *(undefined4 *)(param_1 + 0x984) = 1;
        return;
      }
    }
LAB_00bdc5e4:
    *(undefined4 *)(param_1 + 0x61c) = 6;
    return;
  case 6:
    *(undefined4 *)(param_1 + 0x61c) = 7;
    FUN_00a8caf0(0,0,0,0);
    *(ushort *)(iVar7 + 0xa2) = *(ushort *)(iVar7 + 0xa2) & 0xfffb;
    FUN_00a8d280();
    FUN_00a9dd90(*(undefined4 *)(param_1 + 0xa60));
    if (iVar8 != 0) {
      *(undefined4 *)(iVar8 + 0x94) = 0;
    }
    *(undefined4 *)(param_1 + 0x984) = 0;
    *(undefined4 *)(param_1 + 0x980) = 1;
  }
  return;
}

// 00BEC5A0  cPl0000SaiWeapon::vf4C  size=99  [class]
void __fastcall cPl0000SaiWeapon::vf4C(int *param_1)

{
  float10 fVar1;
  
  FUN_00a92fb0();
  fVar1 = (float10)FUN_00e049b0();
  param_1[0x2dd] = (int)(float)fVar1;
  BehaviorWeapon::vf4C();
  (**(code **)(*param_1 + 100))();
  param_1[0x262] = 0;
  switch(param_1[0x186]) {
  case 0:
    FUN_00bdc120();
    return;
  case 1:
    FUN_00bdc370();
    return;
  case 2:
    FUN_00b90050();
    return;
  case 3:
    FUN_00ba5e90();
    return;
  default:
    return;
  }
}

