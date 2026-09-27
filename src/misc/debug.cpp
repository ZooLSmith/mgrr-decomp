// src/misc/debug.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008DA880..008DB3C0, 12 functions

#include "mgrr.h"

// 008DA880  debug::RoomNoChecker::vf04  size=6  [class]
undefined4 debug::RoomNoChecker::vf04(void)

{
  return 0xffffffff;
}

// 008DA890  debug::RoomNoChecker::vf08  size=1  [class]
void debug::RoomNoChecker::vf08(void)

{
  return;
}

// 008DA8B0  debug::RoomNoChecker::vf0C  size=1  [class]
void debug::RoomNoChecker::vf0C(void)

{
  return;
}

// 008DA8C0  debug::RoomNoChecker::vf10  size=1  [class]
void debug::RoomNoChecker::vf10(void)

{
  return;
}

// 008DA8D0  debug::RoomNoChecker::vf14  size=1  [class]
void debug::RoomNoChecker::vf14(void)

{
  return;
}

// 008DA8E0  debug::RoomNoChecker::vf00  size=31  [class]
undefined4 * __thiscall debug::RoomNoChecker::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008DA9C0  debug::RoomNoCheckerImpl::vf0C  size=37  [class]
void __fastcall debug::RoomNoCheckerImpl::vf0C(int *param_1)

{
  (**(code **)(*param_1 + 8))();
  param_1[0x15] = 0x42480000;
  param_1[0x16] = 0x14;
  param_1[0x14] = 0x41a00000;
  return;
}

// 008DAA50  debug::RoomNoCheckerImpl::vf10  size=936  [class]
void __fastcall debug::RoomNoCheckerImpl::vf10(int *param_1)

{
  int iVar1;
  float unaff_EBX;
  uint uVar2;
  float unaff_ESI;
  float unaff_EDI;
  int *piVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStack_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  
  local_60 = (float)param_1[4];
  local_5c = (float)param_1[5];
  uVar2 = 0;
  local_58 = (float)param_1[6];
  local_54 = (float)param_1[7];
  pfVar10 = &local_a0;
  local_70 = (float)param_1[0xc];
  local_6c = (float)param_1[0xd];
  local_68 = (float)param_1[0xe];
  local_64 = (float)param_1[0xf];
  local_a0 = (float)param_1[0x10];
  local_9c = (float)param_1[0x11];
  local_98 = (float)param_1[0x12];
  local_94 = (float)param_1[0x13];
  fVar12 = 50.0;
  fVar11 = (float)param_1[0x15];
  iVar1 = (**(code **)(*param_1 + 4))(pfVar10,fVar11,0x42480000,0);
  param_1[0x17] = iVar1;
  iVar1 = param_1[0x16];
  fVar13 = (float)iVar1;
  if (iVar1 < 0) {
    fVar13 = fVar13 + 4.2949673e+09;
  }
  fVar13 = (float)param_1[0x14] / fVar13;
  param_1[0x98] = -1;
  param_1[0x9a] = -1;
  param_1[0x9c] = -1;
  param_1[0x9e] = -1;
  if (iVar1 != 0) {
    piVar3 = param_1 + 0x38;
    fStack_84 = fVar13;
    do {
      fStack_8c = fStack_80 * fVar13;
      pfVar7 = &fStack_40;
      fStack_90 = fStack_7c * fVar13;
      fStack_88 = fStack_78 * fVar13;
      local_94 = fStack_74 * fVar13;
      fStack_40 = fStack_8c + unaff_EDI;
      fStack_3c = fStack_90 + unaff_ESI;
      fStack_38 = fStack_88 + unaff_EBX;
      fStack_34 = local_94 + fStack_a4;
      fVar9 = 50.0;
      fVar8 = (float)param_1[0x15];
      iVar1 = (**(code **)(*param_1 + 4))(pfVar7,fVar8,0x42480000);
      piVar3[-0x20] = iVar1;
      if ((param_1[0x98] == -1) && (iVar1 != param_1[0x17])) {
        param_1[0x98] = uVar2;
        param_1[0x99] = 0;
      }
      pfVar4 = &local_70;
      local_70 = (float)pfVar10 - local_9c;
      local_6c = fVar11 - local_a0;
      local_68 = fVar12 - local_98;
      local_64 = fVar13 - fStack_a4;
      fVar6 = 50.0;
      fVar5 = (float)param_1[0x15];
      iVar1 = (**(code **)(*param_1 + 4))(pfVar4,fVar5,0x42480000);
      *piVar3 = iVar1;
      if ((param_1[0x9a] == -1) && (iVar1 != param_1[0x17])) {
        param_1[0x9a] = uVar2;
        param_1[0x9b] = 0;
      }
      fVar13 = fStack_90 * 0.0;
      unaff_EBX = fStack_8c * 0.0;
      unaff_EDI = fStack_88 * 0.0;
      unaff_ESI = fStack_84 * 0.0;
      local_70 = (float)pfVar7 - fVar13;
      local_6c = fVar8 - unaff_EBX;
      local_68 = fVar9 - unaff_EDI;
      local_64 = 0.0 - unaff_ESI;
      iVar1 = (**(code **)(*param_1 + 4))(&local_70,param_1[0x15],0x42480000);
      piVar3[0x20] = iVar1;
      if ((param_1[0x9c] == -1) && (iVar1 != param_1[0x17])) {
        param_1[0x9c] = uVar2;
        param_1[0x9d] = 0;
      }
      local_60 = (float)pfVar4 + 0.0;
      local_5c = fVar12 + fVar5;
      local_58 = (float)pfVar10 + fVar6;
      local_54 = fVar11 + 0.0;
      iVar1 = (**(code **)(*param_1 + 4))(&local_60,param_1[0x15],0x42480000,0);
      piVar3[0x40] = iVar1;
      if ((param_1[0x9e] == -1) && (iVar1 != param_1[0x17])) {
        param_1[0x9e] = uVar2;
        param_1[0x9f] = (int)fVar13;
      }
      uVar2 = uVar2 + 1;
      fVar13 = fVar13 + fStack_84;
      piVar3 = piVar3 + 1;
    } while (uVar2 < (uint)param_1[0x16]);
  }
  if (param_1[0x98] == -1) {
    param_1[0x98] = 0;
    param_1[0x99] = param_1[0x14];
  }
  if (param_1[0x9a] == -1) {
    param_1[0x9a] = 0;
    param_1[0x9b] = param_1[0x14];
  }
  if (param_1[0x9c] == -1) {
    param_1[0x9c] = 0;
    param_1[0x9d] = param_1[0x14];
  }
  if (param_1[0x9e] == -1) {
    param_1[0x9e] = 0;
    param_1[0x9f] = param_1[0x14];
  }
  return;
}

// 008DAE10  debug::RoomNoCheckerImpl::vf14  size=844  [class]
void __fastcall debug::RoomNoCheckerImpl::vf14(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float local_3c;
  char local_38 [16];
  int local_28 [10];
  
  local_3c = 20.0;
  local_28[0] = -1;
  local_28[1] = 0xffffffff;
  local_28[2] = 0xffffffff;
  local_28[3] = 0xffffffff;
  local_28[4] = 0xffffffff;
  local_28[5] = 0xffffffff;
  local_28[6] = 0xffffffff;
  local_28[7] = 0xffffffff;
  local_28[8] = 0xffffffff;
  local_28[9] = 0xffffffff;
  FUN_00a49720();
  fVar1 = 20.0;
  uVar4 = 0;
  do {
    if (local_28[uVar4] != -1) {
      FUN_00f963b0(fVar1,0x41200000,0x41000000,0xffffff00," r%03x",local_28[uVar4]);
      fVar1 = local_3c + 45.0;
      local_3c = fVar1;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 10);
  if (*(int *)(param_1 + 0x5c) == -1) {
    _sprintf_s(local_38,0x10,"invalid");
  }
  else {
    _sprintf_s(local_38,0x10,"r%03x",*(int *)(param_1 + 0x5c));
  }
  FUN_00f963b0(0x432a0000,0x42480000,0x41000000,0xffffff00,&DAT_0164a5c0,local_38);
  iVar2 = *(int *)(param_1 + 0x60 + *(int *)(param_1 + 0x260) * 4);
  iVar3 = *(int *)(param_1 + 0x5c);
  if (iVar2 == -1) {
    _sprintf_s(local_38,0x10,"invalid");
  }
  else {
    _sprintf_s(local_38,0x10,"r%03x",iVar2);
  }
  FUN_00f963b0(0x43160000,0x41f00000,0x41000000,(-(uint)(iVar2 != iVar3) & 0xffff0100) - 0x100,
               &DAT_0164a5b0,(double)*(float *)(param_1 + 0x264),local_38);
  iVar2 = *(int *)(param_1 + 0xe0 + *(int *)(param_1 + 0x268) * 4);
  iVar3 = *(int *)(param_1 + 0x5c);
  if (iVar2 == -1) {
    _sprintf_s(local_38,0x10,"invalid");
  }
  else {
    _sprintf_s(local_38,0x10,"r%03x",iVar2);
  }
  FUN_00f963b0(0x43160000,0x428c0000,0x41000000,(-(uint)(iVar2 != iVar3) & 0xffff0100) - 0x100,
               &DAT_0164a5a0,(double)*(float *)(param_1 + 0x26c),local_38);
  iVar2 = *(int *)(param_1 + 0x160 + *(int *)(param_1 + 0x270) * 4);
  iVar3 = *(int *)(param_1 + 0x5c);
  if (iVar2 == -1) {
    _sprintf_s(local_38,0x10,"invalid");
  }
  else {
    _sprintf_s(local_38,0x10,"r%03x",iVar2);
  }
  FUN_00f963b0(0x42200000,0x42480000,0x41000000,(-(uint)(iVar2 != iVar3) & 0xffff0100) - 0x100,
               &DAT_0164a590,(double)*(float *)(param_1 + 0x274),local_38);
  iVar2 = *(int *)(param_1 + 0x1e0 + *(int *)(param_1 + 0x278) * 4);
  iVar3 = *(int *)(param_1 + 0x5c);
  if (iVar2 == -1) {
    _sprintf_s(local_38,0x10,"invalid");
  }
  else {
    _sprintf_s(local_38,0x10,"r%03x",iVar2);
  }
  FUN_00f963b0(0x43820000,0x42480000,0x41000000,(-(uint)(iVar2 != iVar3) & 0xffff0100) - 0x100,
               &DAT_0164a580,(double)*(float *)(param_1 + 0x27c),local_38);
  return;
}

// 008DB160  debug::RoomNoCheckerImpl::vf08  size=539  [class]
void __fastcall debug::RoomNoCheckerImpl::vf08(int param_1)

{
  float fVar1;
  float local_40;
  undefined4 local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  undefined4 local_1c;
  float local_18;
  
  local_20 = DAT_01bea390;
  local_1c = DAT_01bea394;
  local_18 = DAT_01bea398;
  local_40 = DAT_01bea390 - DAT_01bea380;
  local_38 = DAT_01bea398 - DAT_01bea388;
  local_34 = DAT_01bea39c - DAT_01bea38c;
  local_3c = 0;
  if (SQRT(local_38 * local_38 + local_40 * local_40) < 0.001) {
    local_38 = 1.0;
  }
  local_30 = -local_38;
  local_2c = local_38 * 0.0 - local_40 * 0.0;
  fVar1 = local_38 * local_38 + local_40 * local_40;
  local_28 = local_40;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&local_40,&local_40);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_40 = 0.0;
    local_3c = 0x3f800000;
    local_38 = 0.0;
  }
  fVar1 = local_28 * local_28 + local_30 * local_30 + local_2c * local_2c;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&local_30,&local_30);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_28 = 0.0;
    local_2c = 1.0;
    local_30 = 0.0;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  *(float *)(param_1 + 0x10) = local_30;
  *(float *)(param_1 + 0x14) = local_2c;
  *(float *)(param_1 + 0x18) = local_28;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  *(float *)(param_1 + 0x30) = local_40;
  *(undefined4 *)(param_1 + 0x34) = local_3c;
  *(float *)(param_1 + 0x38) = local_38;
  *(float *)(param_1 + 0x40) = local_20;
  *(undefined4 *)(param_1 + 0x44) = local_1c;
  *(float *)(param_1 + 0x48) = local_18;
  return;
}

// 008DB3A0  debug::RoomNoCheckerImpl::vf00  size=31  [class]
undefined4 * __thiscall debug::RoomNoCheckerImpl::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = RoomNoChecker::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008DB3C0  debug::RoomNoCheckerImpl::vf04  size=329  [class]
int debug::RoomNoCheckerImpl::vf04(undefined4 *param_1,float param_2,float param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_350;
  float local_34c;
  undefined4 local_348;
  undefined4 local_344;
  undefined4 local_340;
  float local_33c;
  undefined4 local_338;
  undefined4 local_334;
  undefined **local_330 [4];
  int local_320;
  int local_31c;
  uint local_318;
  
  local_350 = *param_1;
  local_348 = param_1[2];
  local_344 = param_1[3];
  local_340 = *param_1;
  local_338 = param_1[2];
  local_334 = param_1[3];
  local_34c = (float)param_1[1] + param_2;
  local_33c = (float)param_1[1] - param_3;
  hkpAllRayHitCollector::hkpAllRayHitCollector_8();
  RayCastMultiHitWork::RayCastMultiHitWork(local_330,&local_350,&local_340,0x1e,"check_room_no");
  iVar3 = 0;
  if (0 < local_31c) {
    piVar4 = (int *)(local_320 + 0x50);
    do {
      iVar2 = (int)*(char *)(*piVar4 + 0x10) + *piVar4;
      if (iVar2 == 0) {
        iVar2 = 0;
LAB_008db4c5:
        local_330[0] = hkpAllRayHitCollector::vftable;
        local_31c = 0;
        if (-1 < (int)local_318) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_320,(local_318 & 0x3fffffff) * 0x60);
        }
        return iVar2;
      }
      uVar1 = *(uint *)(iVar2 + 0xc);
      if (uVar1 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)((-(uint)(uVar1 != 0) & uVar1) + 0x44);
      }
      if (iVar2 != -1) goto LAB_008db4c5;
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 0x18;
    } while (iVar3 < local_31c);
  }
  local_330[0] = hkpAllRayHitCollector::vftable;
  local_31c = 0;
  if (-1 < (int)local_318) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_320,(local_318 & 0x3fffffff) * 0x60);
  }
  return -1;
}

