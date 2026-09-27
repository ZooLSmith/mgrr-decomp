// src/weapon/wpb004/Wpb004.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005FF8D0..00ACCB40, 25 functions

#include "types.h"

// 005FF8D0  FUN_005ff8d0  size=481  [callgraph]
void __fastcall FUN_005ff8d0(int param_1)

{
  undefined4 local_14;
  
  *(undefined4 *)(param_1 + 0x1210) = 0;
  *(undefined4 *)(param_1 + 0x1214) = 0;
  *(undefined4 *)(param_1 + 0x1218) = 0;
  *(undefined4 *)(param_1 + 0x121c) = local_14;
  *(undefined4 *)(param_1 + 0x1220) = 0;
  *(undefined4 *)(param_1 + 0x1224) = 0x3e19999a;
  *(undefined4 *)(param_1 + 0x1228) = 0;
  *(undefined4 *)(param_1 + 0x122c) = local_14;
  *(undefined4 *)(param_1 + 0x1230) = 0x3e19999a;
  *(undefined4 *)(param_1 + 0x1234) = 0x3d99999a;
  *(undefined4 *)(param_1 + 0x1238) = 0;
  *(undefined4 *)(param_1 + 0x123c) = local_14;
  *(undefined4 *)(param_1 + 0x1240) = 0x3e19999a;
  *(undefined4 *)(param_1 + 0x1244) = 0xbd99999a;
  *(undefined4 *)(param_1 + 0x1248) = 0;
  *(undefined4 *)(param_1 + 0x124c) = local_14;
  *(undefined4 *)(param_1 + 0x1250) = 0;
  *(undefined4 *)(param_1 + 0x1254) = 0xbe19999a;
  *(undefined4 *)(param_1 + 0x1258) = 0;
  *(undefined4 *)(param_1 + 0x125c) = local_14;
  *(undefined4 *)(param_1 + 0x1260) = 0xbe19999a;
  *(undefined4 *)(param_1 + 0x1264) = 0x3d99999a;
  *(undefined4 *)(param_1 + 0x1268) = 0;
  *(undefined4 *)(param_1 + 0x126c) = local_14;
  *(undefined4 *)(param_1 + 0x1270) = 0xbe19999a;
  *(undefined4 *)(param_1 + 0x1274) = 0xbd99999a;
  *(undefined4 *)(param_1 + 0x1278) = 0;
  *(undefined4 *)(param_1 + 0x127c) = local_14;
  *(undefined4 *)(param_1 + 0x1280) = 0;
  *(undefined4 *)(param_1 + 0x1284) = 0;
  *(undefined4 *)(param_1 + 0x1288) = 0;
  *(undefined4 *)(param_1 + 0x128c) = local_14;
  *(undefined4 *)(param_1 + 0x1280) = 0xbedf66f3;
  *(undefined4 *)(param_1 + 0x1284) = 0;
  *(undefined4 *)(param_1 + 0x1288) = 0;
  *(undefined4 *)(param_1 + 0x128c) = local_14;
  *(undefined4 *)(param_1 + 0x1290) = 0xbedf66f3;
  *(undefined4 *)(param_1 + 0x1294) = 0x3edf66f3;
  *(undefined4 *)(param_1 + 0x1298) = 0;
  *(undefined4 *)(param_1 + 0x129c) = local_14;
  *(undefined4 *)(param_1 + 0x12a0) = 0x3edf66f3;
  *(undefined4 *)(param_1 + 0x12a4) = 0x3edf66f3;
  *(undefined4 *)(param_1 + 0x12a8) = 0;
  *(undefined4 *)(param_1 + 0x12ac) = local_14;
  *(undefined4 *)(param_1 + 0x12b0) = 0x3edf66f3;
  *(undefined4 *)(param_1 + 0x12b4) = 0;
  *(undefined4 *)(param_1 + 0x12b8) = 0;
  *(undefined4 *)(param_1 + 0x12bc) = local_14;
  *(undefined4 *)(param_1 + 0x12c0) = 0xbedf66f3;
  *(undefined4 *)(param_1 + 0x12c4) = 0xbedf66f3;
  *(undefined4 *)(param_1 + 0x12c8) = 0;
  *(undefined4 *)(param_1 + 0x12cc) = local_14;
  *(undefined4 *)(param_1 + 0x12d0) = 0x3edf66f3;
  *(undefined4 *)(param_1 + 0x12d4) = 0xbedf66f3;
  *(undefined4 *)(param_1 + 0x12d8) = 0;
  *(undefined4 *)(param_1 + 0x12dc) = local_14;
  return;
}

// 005FFAC0  Wpb004::vf44  size=5  [class]
void __fastcall Wpb004::vf44(int param_1)

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

// 005FFAD0  Wpb004::thunk_vf48  size=5  [class]
void __fastcall Wpb004::thunk_vf48(int *param_1)

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

// 005FFAE0  Wpb004::vf4C  size=5  [class]
void __fastcall Wpb004::vf4C(int *param_1)

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

// 005FFAF0  Wpb004::vf50  size=26  [class]
void __fastcall Wpb004::vf50(int param_1)

{
  BehaviorBalkan::vf50();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f3cb0(param_1);
  }
  return;
}

// 005FFB10  Wpb004::vf54  size=5  [class]
void __fastcall Wpb004::vf54(int param_1)

{
  Behavior::vf54();
  if ((*(int *)(param_1 + 0x930) != -1) && (*(int *)(param_1 + 0x7b4) != 0)) {
    FUN_0091e980(param_1);
  }
  return;
}

// 005FFB30  FUN_005ffb30  size=186  [between]
undefined4 __fastcall FUN_005ffb30(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  float *pfVar6;
  float unaff_ESI;
  
  piVar4 = (int *)FUN_00c13920();
  iVar5 = (**(code **)(*piVar4 + 0x28))(0);
  if (iVar5 != 0) {
    if (*(short *)(param_1 + 0xbd6) == 0) {
      pfVar6 = (float *)FUN_00a7c8b0();
      fVar1 = *pfVar6 - *(float *)(param_1 + 0x40);
      fVar3 = pfVar6[1] - *(float *)(param_1 + 0x44);
      fVar2 = pfVar6[2] - *(float *)(param_1 + 0x48);
      fVar1 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
      if (fVar1 < unaff_ESI != (fVar1 == unaff_ESI)) {
        return 1;
      }
    }
    else {
      fVar1 = *(float *)(param_1 + 0x12f0) - *(float *)(param_1 + 0x40);
      fVar3 = *(float *)(param_1 + 0x12f4) - *(float *)(param_1 + 0x44);
      fVar2 = *(float *)(param_1 + 0x12f8) - *(float *)(param_1 + 0x48);
      if (unaff_ESI <= SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1)) {
        return 1;
      }
    }
  }
  return 0;
}

// 005FFBF0  FUN_005ffbf0  size=116  [between]
void __fastcall FUN_005ffbf0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a7c8a0();
  }
  if (1 < *(int *)(param_1 + 0x61c)) {
    piVar2 = (int *)FUN_00c13920();
    iVar1 = (**(code **)(*piVar2 + 0x28))(0);
    if (iVar1 != 0) {
      puVar3 = (undefined4 *)FUN_00a7c8b0();
      *(undefined4 *)(param_1 + 0xb50) = *puVar3;
      *(undefined4 *)(param_1 + 0xb54) = puVar3[1];
      *(undefined4 *)(param_1 + 0xb58) = puVar3[2];
      *(undefined4 *)(param_1 + 0xb5c) = puVar3[3];
      *(float *)(param_1 + 0xb54) = *(float *)(param_1 + 0xb54) + 1.4;
    }
  }
  return;
}

// 005FFC70  FUN_005ffc70  size=54  [between]
undefined4 __fastcall FUN_005ffc70(int *param_1)

{
  float fVar1;
  float10 fVar2;
  
  fVar2 = (float10)(**(code **)(*param_1 + 0x24))();
  fVar1 = (float)param_1[0x2fc];
  param_1[0x2fc] = (int)(float)((float10)fVar1 - fVar2);
  if ((float10)fVar1 - fVar2 < (float10)0) {
    param_1[0x186] = 3;
    return 1;
  }
  return 0;
}

// 005FFCB0  FUN_005ffcb0  size=130  [between]
void __fastcall FUN_005ffcb0(int param_1)

{
  undefined4 uVar1;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_20 = *(float *)(param_1 + 0x910);
  local_1c = *(float *)(param_1 + 0x914);
  local_18 = *(float *)(param_1 + 0x918);
  local_14 = *(float *)(param_1 + 0x91c);
  local_30 = *(float *)(param_1 + 0x50) - local_20;
  local_2c = *(float *)(param_1 + 0x54) - local_1c;
  local_28 = *(float *)(param_1 + 0x58) - local_18;
  local_24 = *(float *)(param_1 + 0x5c) - local_14;
  uVar1 = FUN_009f8b40();
  FUN_00acb320(&local_20,0x3f000000,&local_30,uVar1);
  return;
}

// 005FFD60  Wpb004::vf40  size=278  [class]
void __fastcall Wpb004::vf40(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  iVar2 = Pl1500Knife::vf40();
  if (iVar2 == 0) {
    return;
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
  if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
    **(undefined4 **)(param_1 + 0x370) = 0;
  }
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
  }
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 0xc) = 0;
  }
  *(undefined4 *)(param_1 + 0x618) = 0;
  FUN_005ff8d0();
  *(undefined4 *)(param_1 + 0x12f0) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x12f4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x12f8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x12fc) = *(undefined4 *)(param_1 + 0x5c);
  return;
}

// 005FFE80  FUN_005ffe80  size=73  [between]
void __fastcall FUN_005ffe80(int param_1)

{
  FUN_00acc2f0(0x43340000,0);
  *(undefined4 *)(param_1 + 0xf2c) = 0;
  *(undefined4 *)(param_1 + 0x61c) = 100;
  *(undefined4 *)(param_1 + 0xf10) = 1;
  *(undefined4 *)(param_1 + 0x4e4) = 1;
  *(undefined4 *)(param_1 + 0x6ec) = 0;
  FUN_00acc0a0();
  return;
}

// 005FFED0  Wpb004::vf304  size=291  [class]
void __fastcall Wpb004::vf304(int *param_1)

{
  float *pfVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  (**(code **)(*param_1 + 0x128))();
  iVar2 = FUN_00ad1e00(0,0);
  if ((iVar2 != 0) || (param_1[0x300] != 0)) {
    FUN_00acc2f0(0x43340000,0);
    param_1[0x3cb] = 0;
    param_1[0x187] = 100;
    param_1[0x3c4] = 1;
    param_1[0x139] = 1;
    param_1[0x1bb] = 0;
    FUN_00acc0a0();
  }
  if (param_1[0x243] != 0) {
    uVar3 = (**(code **)(*param_1 + 0x68))(0,0xffffffff);
    thunk_FUN_00e58e40(param_1[0x243],uVar3);
  }
  if (param_1[0x3c7] == 0) {
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0x3f800000;
    D3DXVec3TransformNormal(&uStack_30,&uStack_30,param_1 + 4);
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    pfVar1 = (float *)(param_1 + 0x24);
    thunk_FUN_00dde510(pfVar1,&stack0xffffffc0,&stack0xffffffc4,&uStack_2c);
    *pfVar1 = *pfVar1 * -1.0;
    param_1[0x26] = 0;
    param_1[0x25c] = param_1[0x25];
  }
  param_1[0x3c7] = 0;
  return;
}

// 00600000  FUN_00600000  size=376  [between]
void __fastcall FUN_00600000(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_344;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  uint local_330 [5];
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined2 local_310;
  undefined4 local_30c;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined2 uStack_1b8;
  undefined2 local_1b6;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  
  iVar5 = param_1 + 0x1210;
  local_344 = 7;
  do {
    FUN_004105d0();
    FUN_00410710();
    FUN_0041cf30();
    local_21c = 6;
    local_330[1] = 0x3b005;
    local_1c0 = FUN_009f8b40();
    local_30c = *(undefined4 *)(param_1 + 0x8e8);
    local_220 = 0x81;
    local_31c = 0x1e;
    local_314 = 0x1e;
    local_318 = 0x96;
    local_310 = 0xa00;
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    local_330[0] = local_330[0] | 4;
    local_340 = 0;
    local_33c = 0;
    local_338 = 0;
    local_1b6 = 0xffff;
    piVar2 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar2 + 0x28))(0);
    if (iVar3 != 0) {
      puVar4 = (undefined4 *)FUN_00a7c8b0();
      local_340 = *puVar4;
      local_33c = puVar4[1];
      local_338 = puVar4[2];
      uStack_334 = puVar4[3];
    }
    uStack_1b0 = 0;
    uStack_1ac = 0;
    uStack_1a8 = 0;
    uStack_1b8 = 0xffff;
    uStack_1a4 = uStack_334;
    uStack_1bc = 0;
    FUN_00416e30(iVar5,&local_340,iVar5 + 0x70,0x3dcccccd,0x44480000);
    FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),local_330);
    iVar5 = iVar5 + 0x10;
    local_344 = local_344 + -1;
  } while (local_344 != 0);
  return;
}

// 00600180  FUN_00600180  size=1604  [between]
void __fastcall FUN_00600180(int *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  float10 fVar7;
  float10 fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  int *piStack_244;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  int iStack_20c;
  undefined1 auStack_1fc [12];
  undefined1 local_1f0 [24];
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  undefined1 auStack_1b8 [64];
  undefined1 auStack_178 [372];
  
  piStack_244 = (int *)0x0;
  iVar4 = Wpc001::vf308(1);
  if (iVar4 != 0) {
    param_1[0x187] = 3;
    return;
  }
  piStack_244 = (int *)0x6001b6;
  FUN_005ffbf0();
  fVar11 = 0.0;
  piStack_244 = param_1 + 4;
  D3DXMatrixInverse(local_1f0);
  pfVar2 = (float *)(param_1 + 0x2d4);
  D3DXVec3TransformNormal(&fStack_21c,pfVar2,auStack_1fc);
  fVar7 = (float10)fStack_1d4 + (float10)fStack_224;
  fStack_224 = (float)fVar7;
  fVar8 = (float10)fStack_220;
  fStack_220 = (float)((float10)fStack_1d0 + fVar8);
  fVar8 = (float10)fpatan(SQRT(fVar7 * fVar7 +
                               ((float10)fStack_1d8 + (float10)fStack_228) *
                               ((float10)fStack_1d8 + (float10)fStack_228)),
                          (float10)fStack_1d0 + fVar8);
  fVar10 = (float)fVar8;
  fVar8 = (float10)(**(code **)(*param_1 + 0x24))();
  fVar3 = (float)fVar8;
  switch(param_1[0x187]) {
  case 0:
    *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) | 4;
    param_1[0x360] = 0x40a00000;
    param_1[0x187] = 1;
    FUN_00acbc40();
    param_1[0x248] = 0;
    pfVar2 = (float *)(param_1 + 0x248);
    param_1[0x249] = 0;
    param_1[0x24a] = 0x3f800000;
    param_1[0x24b] = iStack_20c;
    FUN_00ddc1d0(auStack_1b8,param_1 + 0x24,5);
    D3DXVec3TransformNormal(pfVar2,pfVar2,auStack_1b8);
    fVar10 = (float)param_1[0x249] * (float)param_1[0x249] + *pfVar2 * *pfVar2 +
             (float)param_1[0x24a] * (float)param_1[0x24a];
    if (fVar10 < 0.0 == (fVar10 == 0.0)) {
      FUN_00ddf460(pfVar2,pfVar2);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      *pfVar2 = 0.0;
      param_1[0x249] = 0x3f800000;
      param_1[0x24a] = 0;
    }
    *pfVar2 = *pfVar2 * 0.2;
    param_1[0x249] = (int)((float)param_1[0x249] * 0.2);
    param_1[0x24a] = (int)((float)param_1[0x24a] * 0.2);
    param_1[0x24b] = (int)((float)param_1[0x24b] * 0.2);
    param_1[0x364] = 1;
    param_1[0x2e4] = 0;
  case 1:
    fVar8 = (float10)FUN_00fdc1f0();
    param_1[0x249] = (int)(float)(fVar8 * (float10)(float)param_1[0x249]);
    param_1[0x248] = (int)(float)(fVar8 * (float10)(float)param_1[0x248]);
    param_1[0x24a] = (int)(float)(fVar8 * (float10)(float)param_1[0x24a]);
    param_1[0x244] = param_1[0x14];
    param_1[0x245] = param_1[0x15];
    param_1[0x246] = param_1[0x16];
    param_1[0x247] = param_1[0x17];
    param_1[0x14] = (int)((float)param_1[0x248] * fVar3 * 2.0 + (float)param_1[0x14]);
    param_1[0x15] = (int)((float)param_1[0x249] * fVar3 * 2.0 + (float)param_1[0x15]);
    param_1[0x16] = (int)((float)param_1[0x24a] * fVar3 * 2.0 + (float)param_1[0x16]);
    param_1[0x17] = (int)((float)param_1[0x24b] * fVar3 * 2.0 + (float)param_1[0x17]);
    param_1[0x10] = param_1[0x14];
    param_1[0x11] = param_1[0x15];
    param_1[0x12] = param_1[0x16];
    param_1[0x2fc] = (int)((float)param_1[0x2fc] - fVar3);
    fVar10 = (float)param_1[0x360];
    param_1[0x360] = (int)(fVar10 - fVar3);
    if (fVar10 - fVar3 < 0.0) {
      uVar9 = 0;
      param_1[0x360] = 0x3f800000;
      param_1[0x187] = 2;
      uVar5 = FUN_00a7c8a0(0);
      FUN_004039a0(0,uVar5,uVar9);
      FUN_00dffb20(param_1 + 0x36c);
      FUN_00e03080(param_1[0x13c],0);
      FUN_00a8c8b0(param_1[300],auStack_178);
      fVar10 = (float)param_1[0x248] * fVar3 * 2.0;
      fVar11 = (float)param_1[0x249] * fVar3 * 2.0;
      fVar3 = (float)param_1[0x24a] * fVar3 * 2.0;
      param_1[0x2e4] = (int)SQRT(fVar3 * fVar3 + fVar11 * fVar11 + fVar10 * fVar10);
    }
    D3DXVec3TransformNormal(&stack0xfffffdc8,&stack0xfffffdc8,param_1 + 4);
    FUN_005ffcb0();
    return;
  case 2:
    fVar7 = (float10)0.3 * fVar8 + (float10)(float)param_1[0x360];
    param_1[0x360] = (int)(float)fVar7;
    if ((fVar10 < 0.5235988 != (fVar10 == 0.5235988)) &&
       (!NAN(fVar10) && 0.0 < fVar10 != (fVar10 == 0.0))) {
      param_1[0x360] = (int)(float)(fVar8 * (float10)0.1 + fVar7);
    }
    fVar8 = (float10)FUN_00fdc1f0();
    param_1[0x249] = (int)(float)(fVar8 * (float10)(float)param_1[0x249]);
    param_1[0x248] = (int)(float)(fVar8 * (float10)(float)param_1[0x248]);
    param_1[0x24a] = (int)(float)(fVar8 * (float10)(float)param_1[0x24a]);
    D3DXVec3TransformNormal(&stack0xfffffdc8,&stack0xfffffdc8,param_1 + 4);
    pfVar1 = (float *)(param_1 + 0x14);
    param_1[0x244] = param_1[0x14];
    param_1[0x245] = param_1[0x15];
    param_1[0x246] = param_1[0x16];
    param_1[0x247] = param_1[0x17];
    *pfVar1 = (float)piStack_244 + *pfVar1;
    param_1[0x15] = (int)(fVar10 + (float)param_1[0x15]);
    param_1[0x16] = (int)(fVar3 + (float)param_1[0x16]);
    param_1[0x17] = (int)((float)param_1[0x17] + 0.0);
    fStack_224 = *pfVar2 - (float)param_1[0x2d8];
    fStack_220 = (float)param_1[0x2d5] - (float)param_1[0x2d9];
    fStack_21c = (float)param_1[0x2d6] - (float)param_1[0x2da];
    fStack_218 = (float)param_1[0x2d7] - (float)param_1[0x2db];
    pfVar6 = (float *)FUN_00a8cf30(&fStack_1d4,pfVar2,&fStack_224,pfVar1,param_1[0x2e4],0x3f19999a);
    *pfVar2 = *pfVar6;
    param_1[0x2d5] = (int)pfVar6[1];
    param_1[0x2d6] = (int)pfVar6[2];
    param_1[0x2d7] = (int)pfVar6[3];
    fVar10 = (float)param_1[0x360] * 0.0004;
    if (0.16 < fVar10) {
      fVar10 = 0.16;
    }
    fVar8 = (float10)FUN_00fdc1f0();
    param_1[0x2e4] = (int)(float)(fVar8 * (float10)(float)param_1[0x2e4]);
    fVar8 = (float10)FUN_00dde300(0x3f000000,0x3f800000);
    param_1[0x2e4] =
         (int)(float)(fVar8 * (float10)fVar10 * (float10)fVar11 + (float10)(float)param_1[0x2e4]);
    param_1[0x10] = (int)*pfVar1;
    param_1[0x11] = param_1[0x15];
    param_1[0x12] = param_1[0x16];
    FUN_00acc460(pfVar2,&piStack_244,0x3f000000,(float)((float10)fVar11 * (float10)0.02617994),1);
    iVar4 = FUN_005ffc70();
    if (iVar4 == 0) {
      FUN_005ffcb0();
      iVar4 = FUN_005ffb30();
      if (iVar4 != 0) {
        FUN_00a8caf0(1,0,0,0);
        return;
      }
    }
    break;
  case 3:
    FUN_005ffe80();
    return;
  default:
    break;
  case 100:
    (**(code **)(*param_1 + 0x20))();
    return;
  }
  return;
}

// 00600850  FUN_00600850  size=560  [between]
/* WARNING: Removing unreachable block (ram,0x00600a01) */

void __fastcall FUN_00600850(int *param_1)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  int *local_a4;
  undefined4 uStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  
  local_a4 = (int *)0x600866;
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    local_a4 = (int *)0x3f800000;
    FUN_00a9e290(&DAT_0163b604,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000);
    pfVar3 = (float *)(param_1 + 0x4a1);
    do {
      local_a4 = param_1 + 4;
      D3DXVec3TransformNormal(pfVar3 + -0x1d,pfVar3 + -0x1d);
      pfVar3[-0x1d] = pfVar3[-0x1d] + (float)param_1[0x10];
      pfVar3[-0x1c] = (float)param_1[0x11] + pfVar3[-0x1c];
      pfVar3[-0x1b] = (float)param_1[0x12] + pfVar3[-0x1b];
      uStack_64 = 0;
      fStack_60 = 1.0;
      if (pfVar3[1] != 0.0) {
        D3DXMatrixRotationZ(&fStack_5c,pfVar3[1]);
        D3DXMatrixMultiply(&local_a4,&uStack_64,&local_a4);
      }
      if (*pfVar3 != 0.0) {
        D3DXMatrixRotationY(&fStack_5c,*pfVar3);
        D3DXMatrixMultiply(&local_a4,&uStack_64,&local_a4);
      }
      pfVar1 = pfVar3 + -1;
      if (pfVar3[-1] != 0.0) {
        D3DXMatrixRotationX(&fStack_5c,*pfVar1);
        D3DXMatrixMultiply(&local_a4,&uStack_64,&local_a4);
      }
      D3DXVec3TransformNormal(pfVar1,param_1 + 0x24,&stack0xffffff64);
      *pfVar1 = *pfVar1 + fStack_60;
      *pfVar3 = *pfVar3 + fStack_5c;
      pfVar3[1] = pfVar3[1] + fStack_58;
      pfVar3 = pfVar3 + 4;
    } while( true );
  }
  if (iVar2 == 1) {
    local_a4 = (int *)0x600a1b;
    (**(code **)(*param_1 + 100))();
    local_a4 = (int *)0x0;
    iVar2 = FUN_00a94ce0();
    if (iVar2 != 0) {
      local_a4 = (int *)0x0;
      FUN_00acc2f0(0x43340000);
      param_1[0x3cb] = 0;
      param_1[0x187] = 100;
      param_1[0x3c4] = 1;
      param_1[0x139] = 1;
      param_1[0x1bb] = 0;
      local_a4 = (int *)0x600a6f;
      FUN_00acc0a0();
      param_1[0x187] = 2;
    }
    return;
  }
  return;
}

// 00600A80  FUN_00600a80  size=1853  [between]
void __fastcall FUN_00600a80(int *param_1)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  int iVar8;
  undefined4 uVar9;
  float *pfVar10;
  float10 fVar11;
  float10 fVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  float *pfStack_298;
  float *pfStack_294;
  undefined1 *puStack_290;
  undefined1 *puStack_28c;
  float fStack_288;
  int *piStack_284;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  int iStack_24c;
  undefined1 auStack_23c [12];
  undefined1 local_230 [24];
  float fStack_218;
  float fStack_214;
  float fStack_210;
  undefined1 auStack_1f8 [44];
  undefined1 auStack_1cc [8];
  undefined1 auStack_1c4 [76];
  undefined1 auStack_178 [372];
  
  if (*(short *)((int)param_1 + 0xbd6) != 0) {
    piStack_284 = (int *)0x600aa0;
    FUN_00600180();
    return;
  }
  piStack_284 = (int *)0x0;
  fStack_288 = 1.4013e-45;
  puStack_28c = (undefined1 *)0x600ab0;
  iVar8 = Wpc001::vf308();
  if (iVar8 == 0) {
    piStack_284 = (int *)0x600acc;
    FUN_005ffbf0();
    piVar1 = param_1 + 4;
    fStack_288 = 0.0;
    puStack_28c = local_230;
    puStack_290 = (undefined1 *)0x600adc;
    piStack_284 = piVar1;
    D3DXMatrixInverse();
    puStack_290 = auStack_23c;
    pfVar3 = (float *)(param_1 + 0x2d4);
    pfStack_298 = &fStack_25c;
    pfStack_294 = pfVar3;
    D3DXVec3TransformNormal();
    fVar11 = (float10)fStack_214 + (float10)fStack_264;
    fStack_264 = (float)fVar11;
    fVar12 = (float10)fStack_260;
    fStack_260 = (float)((float10)fStack_210 + fVar12);
    fVar12 = (float10)fpatan(SQRT(fVar11 * fVar11 +
                                  ((float10)fStack_218 + (float10)fStack_268) *
                                  ((float10)fStack_218 + (float10)fStack_268)),
                             (float10)fStack_210 + fVar12);
    fVar4 = (float)fVar12;
    fVar12 = (float10)(**(code **)(*param_1 + 0x24))();
    fVar5 = (float)fVar12;
    switch(param_1[0x187]) {
    case 0:
      param_1[0x187] = 1;
      sVar7 = FUN_00dde2d0(0,0x3c);
      *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) | 4;
      piStack_284 = (int *)(int)sVar7;
      param_1[0x360] = (int)((float)(int)piStack_284 + 30.0);
      FUN_00acbc40();
      if (param_1[0x24c] == 3) {
        sVar7 = FUN_00dde2d0(0,10);
        piStack_284 = (int *)(int)sVar7;
        param_1[0x360] = (int)((float)(int)piStack_284 + 20.0);
      }
      pfVar3 = (float *)(param_1 + 0x248);
      *pfVar3 = 0.0;
      param_1[0x249] = 0;
      param_1[0x24a] = 0x3f800000;
      param_1[0x24b] = iStack_24c;
      FUN_00ddc1d0(auStack_1f8,param_1 + 0x24,5);
      D3DXVec3TransformNormal(pfVar3,pfVar3,auStack_1f8);
      fVar6 = (float)param_1[0x249] * (float)param_1[0x249] + *pfVar3 * *pfVar3 +
              (float)param_1[0x24a] * (float)param_1[0x24a];
      if (fVar6 < 0.0 == (fVar6 == 0.0)) {
        piStack_284 = (int *)param_1[0x24a];
        FUN_00ddf460(pfVar3,pfVar3);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        *pfVar3 = 0.0;
        param_1[0x249] = 0x3f800000;
        param_1[0x24a] = 0;
      }
      *pfVar3 = *pfVar3 * 0.2;
      param_1[0x249] = (int)((float)param_1[0x249] * 0.2);
      param_1[0x24a] = (int)((float)param_1[0x24a] * 0.2);
      param_1[0x24b] = (int)((float)param_1[0x24b] * 0.2);
      param_1[0x364] = 1;
      param_1[0x2e4] = 0;
    case 1:
      fVar12 = (float10)FUN_00fdc1f0();
      param_1[0x249] = (int)(float)(fVar12 * (float10)(float)param_1[0x249]);
      param_1[0x248] = (int)(float)(fVar12 * (float10)(float)param_1[0x248]);
      param_1[0x24a] = (int)(float)(fVar12 * (float10)(float)param_1[0x24a]);
      param_1[0x244] = param_1[0x14];
      param_1[0x245] = param_1[0x15];
      param_1[0x246] = param_1[0x16];
      param_1[0x247] = param_1[0x17];
      param_1[0x14] = (int)((float)param_1[0x14] + fVar5 * (float)param_1[0x248] * 2.0);
      param_1[0x15] = (int)((float)param_1[0x249] * fVar5 * 2.0 + (float)param_1[0x15]);
      param_1[0x16] = (int)((float)param_1[0x24a] * fVar5 * 2.0 + (float)param_1[0x16]);
      param_1[0x17] = (int)((float)param_1[0x24b] * fVar5 * 2.0 + (float)param_1[0x17]);
      param_1[0x10] = param_1[0x14];
      param_1[0x11] = param_1[0x15];
      param_1[0x12] = param_1[0x16];
      param_1[0x2fc] = (int)((float)param_1[0x2fc] - fVar5);
      fVar5 = (float)param_1[0x360] - fVar5;
      param_1[0x360] = (int)fVar5;
      if ((fVar5 < 0.0) ||
         (((fVar4 < 1.0471976 != (fVar4 == 1.0471976) && (0.0 <= fVar4)) && (fVar5 < 30.0)))) {
        uVar14 = 0;
        param_1[0x360] = 0x3f800000;
        param_1[0x187] = 2;
        uVar9 = FUN_00a7c8a0(0);
        FUN_004039a0(0,uVar9,uVar14);
        FUN_00dffb20(param_1 + 0x36c);
        FUN_00e03080(param_1[0x13c],0);
        FUN_00a8c8b0(param_1[300],auStack_178);
      }
      D3DXVec3TransformNormal(&stack0xfffffd88,&stack0xfffffd88,piVar1);
      FUN_005ffcb0();
      return;
    case 2:
      fVar11 = (float10)0.3 * fVar12 + (float10)(float)param_1[0x360];
      param_1[0x360] = (int)(float)fVar11;
      if ((fVar4 < 0.5235988 != (fVar4 == 0.5235988)) &&
         (!NAN(fVar4) && 0.0 < fVar4 != (fVar4 == 0.0))) {
        param_1[0x360] = (int)(float)(fVar12 * (float10)0.1 + fVar11);
      }
      fVar12 = (float10)FUN_00fdc1f0();
      param_1[0x249] = (int)(float)(fVar12 * (float10)(float)param_1[0x249]);
      fVar12 = (float10)FUN_00fdc1f0();
      puVar13 = &stack0xfffffd88;
      param_1[0x248] = (int)(float)(fVar12 * (float10)(float)param_1[0x248]);
      param_1[0x24a] = (int)(float)(fVar12 * (float10)(float)param_1[0x24a]);
      D3DXVec3TransformNormal(puVar13,puVar13,piVar1);
      pfVar2 = (float *)(param_1 + 0x14);
      param_1[0x244] = param_1[0x14];
      param_1[0x245] = param_1[0x15];
      param_1[0x246] = param_1[0x16];
      param_1[0x247] = param_1[0x17];
      *pfVar2 = *pfVar2 + (float)piStack_284;
      param_1[0x15] = (int)((float)param_1[0x15] + fVar5);
      param_1[0x16] = (int)(fVar4 + (float)param_1[0x16]);
      param_1[0x17] = (int)((float)param_1[0x17] + 0.0);
      *pfVar2 = *pfVar2 + (float)puStack_28c * (float)param_1[0x248];
      param_1[0x15] = (int)((float)param_1[0x249] * (float)puStack_28c + (float)param_1[0x15]);
      param_1[0x16] = (int)((float)param_1[0x24a] * (float)puStack_28c + (float)param_1[0x16]);
      param_1[0x17] = (int)((float)param_1[0x24b] * (float)puStack_28c + (float)param_1[0x17]);
      fStack_264 = *pfVar3 - (float)param_1[0x2d8];
      fStack_260 = (float)param_1[0x2d5] - (float)param_1[0x2d9];
      fStack_25c = (float)param_1[0x2d6] - (float)param_1[0x2da];
      fStack_258 = (float)param_1[0x2d7] - (float)param_1[0x2db];
      pfVar10 = (float *)FUN_00a8cf30(&fStack_214,pfVar3,&fStack_264,pfVar2,param_1[0x2e4],
                                      0x3f19999a);
      *pfVar3 = *pfVar10;
      param_1[0x2d5] = (int)pfVar10[1];
      param_1[0x2d6] = (int)pfVar10[2];
      param_1[0x2d7] = (int)pfVar10[3];
      fStack_288 = (float)param_1[0x360] * 0.0004;
      if (0.16 < fStack_288) {
        fStack_288 = 0.16;
      }
      fVar12 = (float10)FUN_00fdc1f0();
      param_1[0x2e4] = (int)(float)(fVar12 * (float10)(float)param_1[0x2e4]);
      fVar12 = (float10)FUN_00dde300(0x3f000000,0x3f800000);
      param_1[0x2e4] =
           (int)(float)((float10)fStack_288 * (float10)(float)puStack_28c * fVar12 +
                       (float10)(float)param_1[0x2e4]);
      fVar12 = (float10)FUN_00dde300(0x3f000000,0x3f800000);
      D3DXMatrixRotationZ(auStack_1c4,
                          (float)((float10)(float)puStack_28c * (float10)0.27925268 * fVar12));
      D3DXMatrixMultiply(param_1 + 4,auStack_1cc,param_1 + 4);
      param_1[0x10] = (int)*pfVar2;
      param_1[0x11] = param_1[0x15];
      param_1[0x12] = param_1[0x16];
      pfStack_294 = (float *)((float)pfStack_294 * 3.0);
      FUN_00acc460(pfVar3,&pfStack_298,0x3f000000,(float)puVar13 * 0.008726646,1);
      iVar8 = FUN_005ffc70();
      if (iVar8 == 0) {
        FUN_005ffcb0();
        iVar8 = FUN_005ffb30();
        if (iVar8 != 0) {
          FUN_00a8caf0(1,0,0,0);
          return;
        }
      }
      break;
    case 3:
      FUN_005ffe80();
      return;
    default:
      break;
    case 100:
      (**(code **)(*param_1 + 0x20))();
      return;
    }
    return;
  }
  param_1[0x187] = 3;
  return;
}

// 00601240  FUN_00601240  size=34  [between]
void FUN_00601240(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cab0();
  if (iVar1 == 0) {
    FUN_00600a80();
    return;
  }
  if (iVar1 == 1) {
    FUN_00600850();
    return;
  }
  return;
}

// 00601270  Wpb004::vf300  size=65  [class]
void __fastcall Wpb004::vf300(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  fVar2 = (float10)FUN_00e03a90(0);
  *(float *)(param_1 + 0xf20) = (float)fVar2;
  iVar1 = FUN_00acae60();
  if (iVar1 == 0) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 == 0) {
      FUN_00600a80();
      return;
    }
    if (iVar1 == 1) {
      FUN_00600850();
      return;
    }
  }
  return;
}

// 00AAC470  Wpb004::Wpb004  size=18  [class]
undefined4 * __fastcall Wpb004::Wpb004(undefined4 *param_1)

{
  BehaviorBulletBase::BehaviorBulletBase();
  *param_1 = vftable;
  return param_1;
}

// 00AAC490  Wpb004::vf04  size=6  [class]
undefined * Wpb004::vf04(void)

{
  return &DAT_01b35470;
}

// 00AB6B60  Wpb004::vf00  size=30  [class]
undefined4 __thiscall Wpb004::vf00(undefined4 param_1,byte param_2)

{
  Behavior::Behavior_120();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00ACC460  FUN_00acc460  size=639  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00acc4ff) */
/* WARNING: Removing unreachable block (ram,0x00acc501) */
/* WARNING: Removing unreachable block (ram,0x00acc503) */

void __thiscall
FUN_00acc460(int *param_1,float *param_2,float *param_3,float param_4,float param_5,int param_6)

{
  int *piVar1;
  float fVar2;
  float10 fVar3;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined1 local_50 [76];
  
  if (param_1[0x364] != 0) {
    local_80 = *param_2 - (float)param_1[0x14];
    local_7c = param_2[1] - (float)param_1[0x15];
    local_78 = param_2[2] - (float)param_1[0x16];
    local_74 = param_2[3] - (float)param_1[0x17];
    if (0.0 < local_78 * local_78 + local_7c * local_7c + local_80 * local_80) {
      FUN_00ddf460(&local_80,&local_80);
      local_70 = *param_3;
      local_6c = param_3[1];
      local_68 = param_3[2];
      local_64 = param_3[3];
      fVar2 = local_68 * local_68 + local_70 * local_70 + local_6c * local_6c;
      if (fVar2 < 0.0 == (fVar2 == 0.0)) {
        FUN_00ddf460(&local_70,&local_70);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_70 = 0.0;
        local_6c = 1.0;
        local_68 = 0.0;
      }
      local_60 = local_6c * local_78 - local_68 * local_7c;
      local_5c = local_68 * local_80 - local_78 * local_70;
      local_58 = local_70 * local_7c - local_80 * local_6c;
      if (0.001 < local_58 * local_58 + local_5c * local_5c + local_60 * local_60) {
        if (param_6 != 0) {
          fVar3 = (float10)(**(code **)(*param_1 + 0x24))();
          param_5 = (float)(fVar3 * (float10)param_5);
          fVar3 = (float10)(**(code **)(*param_1 + 0x24))(param_5);
          param_4 = (float)(fVar3 * (float10)param_4);
        }
        FUN_00de2bc0(local_50,&local_70,&local_80,&local_60,param_4,param_5);
        piVar1 = param_1 + 4;
        D3DXMatrixMultiply(piVar1,piVar1,local_50);
        param_1[0x10] = param_1[0x14];
        param_1[0x11] = param_1[0x15];
        param_1[0x12] = param_1[0x16];
        FUN_00de28e0(piVar1,piVar1);
        return;
      }
    }
  }
  return;
}

// 00ACC6E0  FUN_00acc6e0  size=1117  [callgraph]
void __fastcall FUN_00acc6e0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined4 local_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_54;
  undefined1 local_50 [76];
  
  if (((param_1[0x480] != 0) && (iVar3 = FUN_00ea9ec0(&local_d0), iVar3 != 0)) &&
     (iVar3 = FUN_00ea9f00(&local_100), iVar3 != 0)) {
    local_d4 = 0;
    FUN_00445d40(&local_d0,&local_100,param_1[0x2e7] << 0x10 | 3,0,2,0,"esp103",0);
    iVar3 = RayCastSingleHitWork::RayCastSingleHitWork_2(&local_c0,&local_a0,&local_d4,0,local_50);
    if (iVar3 == 0) {
      FUN_00ea9fc0();
    }
    else {
      FUN_00ea9e60(&local_c0);
      local_100 = local_c0;
      local_fc = local_bc;
      local_f8 = local_b8;
      local_f4 = local_b4;
      if ((float)param_1[0x360] <= 0.0) {
        FUN_00c76f00();
        local_54 = param_1[0x239];
        local_80 = local_c0;
        local_7c = local_bc;
        local_78 = local_b8;
        local_74 = local_b4;
        local_70 = local_a0;
        local_6c = local_9c;
        local_68 = local_98;
        local_64 = local_94;
        FUN_00c76f30(local_d4);
        (**(code **)(*param_1 + 0x318))(&local_80);
        param_1[0x360] = 0x40400000;
      }
    }
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      iVar3 = param_1[0x482];
      FUN_00a7c8a0(iVar3);
      iVar3 = FUN_00a12210(iVar3);
      if (iVar3 != 0) {
        FID_conflict__memcpy(param_1 + 4,(void *)(iVar3 + 0x10),0x40);
      }
    }
    if (param_1[0x21c] != 0) {
      if (SQRT((fStack_cc - local_fc) * (fStack_cc - local_fc) +
               (local_d0 - local_100) * (local_d0 - local_100) +
               (fStack_c8 - local_f8) * (fStack_c8 - local_f8)) < 2.0) {
        local_fc = local_fc + 2.0;
      }
      fStack_f0 = local_100 - local_d0;
      fStack_ec = local_fc - fStack_cc;
      fStack_e8 = local_f8 - fStack_c8;
      fStack_e4 = local_f4 - fStack_c4;
      fVar1 = fStack_e8 * fStack_e8 + fStack_f0 * fStack_f0 + fStack_ec * fStack_ec;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&fStack_f0,&fStack_f0);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fStack_e8 = 0.0;
        fStack_f0 = 0.0;
        fStack_ec = 1.0;
      }
      fStack_f0 = fStack_f0 * 1.2;
      fStack_ec = fStack_ec * 1.2;
      fStack_e8 = fStack_e8 * 1.2;
      fStack_e4 = fStack_e4 * 1.2;
      fStack_90 = fStack_f0 + local_100;
      fStack_8c = fStack_ec + local_fc;
      fStack_88 = fStack_e8 + local_f8;
      fStack_84 = fStack_e4 + local_f4;
      if (param_1[0x447] == 0) {
        FUN_00a6b620(&local_d0,&fStack_90);
      }
    }
    fVar4 = (float10)local_100 - (float10)local_d0;
    fVar5 = (float10)local_f8 - (float10)fStack_c8;
    fVar6 = (float10)fpatan(fVar4,fVar5);
    param_1[0x25c] = (int)(float)fVar6;
    fStack_b0 = (float)fVar4;
    fVar6 = (float10)local_fc - (float10)fStack_cc;
    fStack_ac = (float)fVar6;
    fStack_a8 = (float)fVar5;
    fStack_a4 = local_f4 - fStack_c4;
    fVar4 = fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4;
    if (fVar4 < (float10)(float)(undefined *)0x0 == (fVar4 == (float10)(float)(undefined *)0x0)) {
      FUN_00ddf460(param_1 + 600,&fStack_b0);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      param_1[600] = 0;
      param_1[0x259] = 0x3f800000;
      param_1[0x25a] = 0;
    }
    pcVar2 = *(code **)(*param_1 + 0x24);
    param_1[0x3c7] = 1;
    fVar4 = (float10)(*pcVar2)();
    fVar1 = (float)param_1[0x360];
    if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
      param_1[0x360] = (int)(float)((float10)(float)param_1[0x360] - fVar4);
      return;
    }
  }
  return;
}

// 00ACCB40  Wpb004::vf30  size=117  [class]
void __fastcall Wpb004::vf30(int param_1)

{
  int iVar1;
  int *piVar2;
  
  Bh0064::vf30();
  if (*(int *)(param_1 + 0x588) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x588) + 0xe4) = *(undefined4 *)(param_1 + 0xb90);
  }
  *(undefined4 *)(param_1 + 0xf24) = 0;
  FUN_00a933e0();
  FUN_00a934c0();
  iVar1 = FUN_00932720();
  if ((iVar1 != 0xf14) && (iVar1 != 0xf10)) {
    FUN_00ac5d00(*(undefined4 *)(param_1 + 0x1120),param_1 + 0x130);
  }
  piVar2 = (int *)FUN_00c1b9a0();
  (**(code **)(*piVar2 + 0x3c))(*(undefined4 *)(param_1 + 0x120c));
  return;
}

