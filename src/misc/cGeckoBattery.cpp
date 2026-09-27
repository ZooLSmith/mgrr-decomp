// src/misc/cGeckoBattery.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AAEF30..00B77D30, 18 functions

#include "types.h"

// 00AAEF30  cGeckoBattery::vf04  size=6  [class]
undefined * cGeckoBattery::vf04(void)

{
  return &DAT_01be9d70;
}

// 00AB7890  cGeckoBattery::vf00  size=105  [class]
undefined4 * __thiscall cGeckoBattery::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Behavior::vftable;
  cLockonPartsList::~cLockonPartsList();
  if (param_1[0x19f] != 0) {
    param_1[0x1a1] = 0;
    if (param_1[0x1a2] != 0) {
      FUN_00dd48d0(param_1[0x19f],0);
      param_1[0x1a2] = 0;
    }
    param_1[0x19f] = 0;
    param_1[0x1a0] = 0;
  }
  cXml::cXml_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00B769E0  cGeckoBattery::vf50  size=16  [class]
void cGeckoBattery::vf50(void)

{
  FUN_00a93170();
  BehaviorAppBase::vf50();
  return;
}

// 00B76A10  FUN_00b76a10  size=124  [between]
void __fastcall FUN_00b76a10(int param_1)

{
  float fVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0xbb0) = 0;
    *(undefined4 *)(param_1 + 0xbc0) = *(undefined4 *)(param_1 + 0xbc4);
    *(undefined4 *)(param_1 + 0x61c) = 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  if (*(int *)(param_1 + 3000) < *(int *)(param_1 + 0xbbc)) {
    fVar1 = *(float *)(param_1 + 0xbc0) - *(float *)(param_1 + 0xbc8);
    *(float *)(param_1 + 0xbc0) = fVar1;
    if (fVar1 < 0.0) {
      *(undefined4 *)(param_1 + 0xbc0) = *(undefined4 *)(param_1 + 0xbc4);
      *(int *)(param_1 + 3000) = *(int *)(param_1 + 3000) + 1;
      return;
    }
  }
  else {
    FUN_00a8caf0(1,0,0,0);
  }
  return;
}

// 00B76A90  FUN_00b76a90  size=32  [between]
void FUN_00b76a90(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
  }
  return;
}

// 00B76AB0  FUN_00b76ab0  size=27  [between]
void __thiscall FUN_00b76ab0(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00a8ee20(param_2);
  *(undefined4 *)(param_1 + 0xbf0) = param_3;
  return;
}

// 00B76AD0  FUN_00b76ad0  size=353  [between]
void __fastcall FUN_00b76ad0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  FUN_00a82790(*(undefined4 *)(param_1 + 0x4f0),1,0);
  *(uint *)(param_1 + 0xa00) = *(uint *)(param_1 + 0xa00) | 2;
  FUN_00a82870(0x40490fdb,0xc0490fdb,0x3e99999a,0x3ae4c388,0x3d0efa35);
  FUN_00a82790(*(undefined4 *)(param_1 + 0x4f0),2,0);
  *(uint *)(param_1 + 0xad0) = *(uint *)(param_1 + 0xad0) | 2;
  FUN_00a82840(0x3f060a92,0xbfc90fdb,0x3e99999a,0x3ae4c388,0x3d0efa35);
  *(undefined4 *)(param_1 + 0xbb4) = 0x41000000;
  *(undefined4 *)(param_1 + 0xbc4) = 0x41200000;
  *(undefined4 *)(param_1 + 3000) = 0x1e;
  *(undefined4 *)(param_1 + 0xbbc) = 0x1e;
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(2);
  uVar1 = FUN_00a8d2a0();
  puVar2 = (undefined4 *)FUN_009f8b60();
  iVar3 = CollisionSphere::CollisionSphere(2,*puVar2,0);
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x380) = 0;
    FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),1);
    *(undefined4 *)(iVar3 + 0x510) = 0x3f000000;
    FUN_00d771d0(1);
    FUN_00a93a00(iVar3,uVar1);
    FUN_00d7b0f0();
    FUN_00d7b890();
    return;
  }
  return;
}

// 00B76C40  FUN_00b76c40  size=263  [between]
void __fastcall FUN_00b76c40(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  FUN_00a82790(*(undefined4 *)(param_1 + 0x4f0),0,0);
  *(uint *)(param_1 + 0xa00) = *(uint *)(param_1 + 0xa00) | 2;
  FUN_00a82840(0x3f060a92,0xbfc90fdb,0x3e99999a,0x3ae4c388,0x3d0efa35);
  *(undefined4 *)(param_1 + 0xbb4) = 0;
  *(undefined4 *)(param_1 + 3000) = 2;
  *(undefined4 *)(param_1 + 0xbc4) = 0x42700000;
  *(undefined4 *)(param_1 + 0xbbc) = 2;
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(2);
  uVar1 = FUN_00a8d2a0();
  puVar2 = (undefined4 *)FUN_009f8b60();
  iVar3 = CollisionSphere::CollisionSphere(2,*puVar2,0);
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x380) = 0;
    FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0x804);
    *(undefined4 *)(iVar3 + 0x510) = 0x3f000000;
    FUN_00d771d0(1);
    FUN_00a93a00(iVar3,uVar1);
    FUN_00d7b0f0();
    FUN_00d7b890();
    return;
  }
  return;
}

// 00B76D50  cGeckoBattery::vf25C  size=320  [class]
void cGeckoBattery::vf25C(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  undefined4 uVar5;
  float *pfVar6;
  float *pfVar7;
  undefined4 uVar8;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20 [3];
  undefined4 local_14;
  
  Bh0064::vf25C(param_1,param_2,param_3);
  if (param_3 == 0) {
    FUN_00a7c950();
    fVar2 = (float10)FUN_00dde300(0xc1200000,0x41200000);
    fVar3 = (float10)FUN_00dde300(0xc1200000,0x41200000);
    fVar4 = (float10)FUN_00dde300(0xc1200000,0x41200000);
    local_28 = (float)fVar4;
    local_24 = 0x3f800000;
    local_30 = (float)fVar2;
    local_2c = (float)fVar3;
    fVar2 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
    fVar3 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
    local_20[1] = 1.0;
    pfVar7 = &local_30;
    local_14 = 0x3f800000;
    pfVar6 = local_20;
    local_20[2] = (float)fVar3;
    uVar8 = 0x43340000;
    local_20[0] = (float)fVar2;
    uVar1 = FUN_00a7c7f0(pfVar6,pfVar7,0x43340000);
    uVar5 = extraout_ECX;
    FUN_00a7c940(uVar1);
    FUN_00a85c20(uVar5,pfVar6,pfVar7,uVar8);
  }
  return;
}

// 00B76E90  cGeckoBattery::vf40  size=352  [class]
undefined4 __fastcall cGeckoBattery::vf40(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar3 = BehaviorAppBase::vf40();
  if ((iVar3 != 0) &&
     (iVar3 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>(), iVar3 != 0)) {
    uVar6 = 2;
    FUN_00a92fb0(2);
    FUN_00e08640(uVar6);
    *(undefined4 *)(param_1 + 0xbb0) = 0;
    *(undefined4 *)(param_1 + 0xbac) = 1;
    *(undefined2 *)(param_1 + 0xbd4) = 0x800;
    FUN_00a7c970(0);
    if (*(int *)(param_1 + 0x4a0) == 0) {
      FUN_00b76ad0();
    }
    else if (*(int *)(param_1 + 0x4a0) == 1) {
      FUN_00b76c40();
    }
    FUN_00a8caf0(1,0,0,0);
    iVar3 = FUN_00d467a0();
    if (iVar3 != 0) {
      FUN_00a8caf0(0,0,0,0);
    }
    local_18 = 0x3f666666;
    local_14 = 0x3f99999a;
    local_10 = 0x3f8ccccd;
    local_c = 0x3e4ccccd;
    local_8 = 0x40400000;
    local_4 = 0x40000000;
    FUN_00a8e4d0(&local_c,&local_18);
    iVar3 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar5 = 0;
      do {
        iVar2 = *(int *)(param_1 + 800);
        iVar4 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if ((iVar4 != 0) && (iVar4 = FUN_00fdbbd0(iVar4,"EFD01"), iVar4 != 0)) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar3 < *(short *)(param_1 + 0x324));
    }
    *(undefined4 *)(param_1 + 0xbf4) = 0;
    FUN_00410540(3,&DAT_01b7bd48);
    return 1;
  }
  return 0;
}

// 00B76FF0  cGeckoBattery::vf44  size=92  [class]
void __fastcall cGeckoBattery::vf44(int param_1)

{
  if (*(int *)(param_1 + 0x67c) != 0) {
    *(undefined4 *)(param_1 + 0x684) = 0;
    if (*(int *)(param_1 + 0x688) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x67c),0);
      *(undefined4 *)(param_1 + 0x688) = 0;
    }
    *(undefined4 *)(param_1 + 0x67c) = 0;
    *(undefined4 *)(param_1 + 0x680) = 0;
  }
  FUN_00a9d8a0();
  FUN_00a944d0();
  FUN_00a85df0();
  Behavior::vf44();
  return;
}

// 00B77050  FUN_00b77050  size=808  [between]
void __fastcall FUN_00b77050(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  float10 fVar7;
  float10 fVar8;
  float local_360;
  float local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  float local_340;
  float local_33c;
  float local_338;
  undefined1 local_330 [20];
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined2 local_310;
  undefined4 local_30c;
  uint local_294;
  undefined4 local_220;
  undefined4 local_1c4;
  undefined4 local_1c0;
  float local_1a0;
  float local_19c;
  
  if (*(int *)(param_1 + 0xba4) == 0) {
    return;
  }
  fVar1 = *(float *)(param_1 + 0xbb4) - *(float *)(param_1 + 0xbc8);
  *(float *)(param_1 + 0xbb4) = fVar1;
  if ((((*(int *)(param_1 + 0xbb0) == 0) || (0.0 < fVar1)) ||
      (0.2617994 <= *(float *)(param_1 + 0xbcc))) || (*(float *)(param_1 + 0xbcc) <= 0.0))
  goto LAB_00b77359;
  uVar6 = 10;
  if (*(int *)(param_1 + 0xba8) != 0) {
    iVar4 = FUN_00d466f0();
    if (iVar4 == 0) {
      iVar4 = FUN_00b62e50(*(undefined4 *)(param_1 + 0xba8));
    }
    else {
      iVar4 = FUN_00d46780();
      if (iVar4 == 0) {
        iVar4 = FUN_00d467a0();
        if (iVar4 == 0) goto LAB_00b7713a;
        iVar4 = FUN_0064d710(*(undefined4 *)(param_1 + 0xba8));
      }
      else {
        iVar4 = FUN_00740a70(*(undefined4 *)(param_1 + 0xba8));
      }
    }
    if (iVar4 != 0) {
      uVar6 = FUN_00ac8660(0,0x3a);
    }
  }
LAB_00b7713a:
  *(undefined4 *)(param_1 + 0xbb4) = 0x41000000;
  iVar4 = FUN_00a12210((int)*(short *)(param_1 + 0xbd4));
  local_360 = SQRT(*(float *)(iVar4 + 0x14) * *(float *)(iVar4 + 0x14) +
                   *(float *)(iVar4 + 0x10) * *(float *)(iVar4 + 0x10) +
                   *(float *)(iVar4 + 0x18) * *(float *)(iVar4 + 0x18));
  local_35c = SQRT(*(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x20) +
                   *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24) +
                   *(float *)(iVar4 + 0x28) * *(float *)(iVar4 + 0x28));
  fVar3 = SQRT(*(float *)(iVar4 + 0x38) * *(float *)(iVar4 + 0x38) +
               *(float *)(iVar4 + 0x34) * *(float *)(iVar4 + 0x34) +
               *(float *)(iVar4 + 0x30) * *(float *)(iVar4 + 0x30));
  fVar1 = *(float *)(iVar4 + 0x28);
  fVar2 = *(float *)(iVar4 + 0x38);
  fVar7 = (float10)FUN_00ddbaa0(-(*(float *)(iVar4 + 0x18) / fVar3));
  fVar8 = (float10)fpatan((float10)(fVar1 / fVar3),(float10)(fVar2 / fVar3));
  local_340 = (float)fVar8;
  local_33c = (float)fVar7;
  fVar7 = (float10)fpatan((float10)*(float *)(iVar4 + 0x14) / (float10)local_35c,
                          (float10)*(float *)(iVar4 + 0x10) / (float10)local_360);
  local_338 = (float)fVar7;
  local_350 = *(undefined4 *)(iVar4 + 0x40);
  local_34c = *(undefined4 *)(iVar4 + 0x44);
  local_348 = *(undefined4 *)(iVar4 + 0x48);
  local_344 = *(undefined4 *)(iVar4 + 0x4c);
  local_360 = *(float *)(iVar4 + 0x40);
  local_35c = *(float *)(iVar4 + 0x44);
  local_358 = *(undefined4 *)(iVar4 + 0x48);
  local_354 = *(undefined4 *)(iVar4 + 0x4c);
  FUN_0041fee0();
  local_220 = 0x10;
  if (*(int *)(param_1 + 0xba8) != 0) {
    puVar5 = (undefined4 *)FUN_009f8b60();
    local_1c0 = *puVar5;
  }
  local_1c4 = 0x3f7f7cee;
  fVar7 = (float10)FUN_00dde300(0xbc8efa35,0x3c8efa35);
  local_1a0 = (float)fVar7;
  fVar7 = (float10)FUN_00dde300(0xbc8efa35,0x3c8efa35);
  local_19c = (float)fVar7;
  local_30c = *(undefined4 *)(param_1 + 0xba4);
  local_294 = local_294 | 0x10000010;
  local_314 = 10;
  local_318 = 0x96;
  local_310 = 0x300;
  local_31c = uVar6;
  uVar6 = FUN_00a7c7f0();
  FUN_00a7c960(uVar6);
  FUN_00416e30(&local_350,&local_360,&local_340,0x3f800000,0x43480000);
  FUN_00ae2bc0(*(undefined4 *)(param_1 + 0x4f0),local_330);
  *(int *)(param_1 + 3000) = *(int *)(param_1 + 3000) + -1;
LAB_00b77359:
  if (*(int *)(param_1 + 3000) == 0) {
    FUN_00a8caf0(2,0,0,0);
  }
  return;
}

// 00B77380  FUN_00b77380  size=808  [between]
void __fastcall FUN_00b77380(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  float10 fVar7;
  float10 fVar8;
  float local_360;
  float local_35c;
  undefined4 local_358;
  undefined4 local_354;
  float local_350;
  float local_34c;
  float local_348;
  undefined4 local_344;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 local_334;
  uint local_330 [5];
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined2 local_310;
  undefined4 local_30c;
  uint local_294;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined2 local_1b8;
  short local_1b6;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  
  fVar1 = *(float *)(param_1 + 0xbb4) - *(float *)(param_1 + 0xbc8);
  *(float *)(param_1 + 0xbb4) = fVar1;
  if ((*(int *)(param_1 + 0xbb0) == 0) || (0.0 < fVar1)) goto LAB_00b77689;
  uVar6 = 100;
  if (*(int *)(param_1 + 0xba8) != 0) {
    iVar4 = FUN_00d466f0();
    if (iVar4 == 0) {
      iVar4 = FUN_00b62e50(*(undefined4 *)(param_1 + 0xba8));
    }
    else {
      iVar4 = FUN_00d46780();
      if (iVar4 == 0) {
        iVar4 = FUN_00d467a0();
        if (iVar4 == 0) goto LAB_00b77433;
        iVar4 = FUN_0064d710(*(undefined4 *)(param_1 + 0xba8));
      }
      else {
        iVar4 = FUN_00740a70(*(undefined4 *)(param_1 + 0xba8));
      }
    }
    if (iVar4 != 0) {
      uVar6 = FUN_00ac8660(0,0x3b);
    }
  }
LAB_00b77433:
  *(undefined4 *)(param_1 + 0xbb4) = 0;
  iVar4 = FUN_00a12210((int)*(short *)(param_1 + 0xbd4));
  local_360 = SQRT(*(float *)(iVar4 + 0x14) * *(float *)(iVar4 + 0x14) +
                   *(float *)(iVar4 + 0x10) * *(float *)(iVar4 + 0x10) +
                   *(float *)(iVar4 + 0x18) * *(float *)(iVar4 + 0x18));
  local_35c = SQRT(*(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x20) +
                   *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24) +
                   *(float *)(iVar4 + 0x28) * *(float *)(iVar4 + 0x28));
  fVar3 = SQRT(*(float *)(iVar4 + 0x38) * *(float *)(iVar4 + 0x38) +
               *(float *)(iVar4 + 0x34) * *(float *)(iVar4 + 0x34) +
               *(float *)(iVar4 + 0x30) * *(float *)(iVar4 + 0x30));
  fVar1 = *(float *)(iVar4 + 0x28);
  fVar2 = *(float *)(iVar4 + 0x38);
  fVar7 = (float10)FUN_00ddbaa0(-(*(float *)(iVar4 + 0x18) / fVar3));
  fVar8 = (float10)fpatan((float10)(fVar1 / fVar3),(float10)(fVar2 / fVar3));
  local_350 = (float)fVar8;
  local_34c = (float)fVar7;
  fVar7 = (float10)fpatan((float10)*(float *)(iVar4 + 0x14) / (float10)local_35c,
                          (float10)*(float *)(iVar4 + 0x10) / (float10)local_360);
  local_348 = (float)fVar7;
  local_340 = *(undefined4 *)(iVar4 + 0x40);
  local_33c = *(undefined4 *)(iVar4 + 0x44);
  local_338 = *(undefined4 *)(iVar4 + 0x48);
  local_334 = *(undefined4 *)(iVar4 + 0x4c);
  local_360 = *(float *)(iVar4 + 0x40);
  local_35c = *(float *)(iVar4 + 0x44);
  local_358 = *(undefined4 *)(iVar4 + 0x48);
  local_354 = *(undefined4 *)(iVar4 + 0x4c);
  FUN_004105d0();
  FUN_00410710();
  FUN_0041cf30();
  local_21c = 0xd;
  local_330[1] = 0x30309;
  local_220 = 0x20;
  if (*(int *)(param_1 + 0xba8) != 0) {
    puVar5 = (undefined4 *)FUN_009f8b60();
    local_1c0 = *puVar5;
  }
  local_30c = *(undefined4 *)(param_1 + 0xba4);
  local_294 = local_294 | 0x110;
  local_314 = 0x14;
  local_318 = 0x96;
  local_310 = 0xa00;
  local_31c = uVar6;
  uVar6 = FUN_00a7c7f0();
  FUN_00a7c960(uVar6);
  FUN_00416e30(&local_340,&local_360,&local_350,0x3f800000,0x43480000);
  local_1b6 = *(short *)(param_1 + 0xbd4);
  local_330[0] = local_330[0] | 4;
  *(ushort *)(param_1 + 0xbd4) = (local_1b6 == 0x800) + 0x800;
  local_1bc = FUN_00a81330();
  local_1b0 = 0;
  local_1ac = 0x3f4ccccd;
  local_1a8 = 0;
  local_1b8 = 0;
  local_1a4 = local_344;
  FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),local_330);
  *(int *)(param_1 + 3000) = *(int *)(param_1 + 3000) + -1;
LAB_00b77689:
  if (*(int *)(param_1 + 3000) == 0) {
    FUN_00a8caf0(2,0,0,0);
  }
  return;
}

// 00B776D0  FUN_00b776d0  size=1013  [between]
undefined4 __fastcall FUN_00b776d0(int *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined *puVar9;
  int *piStack_174;
  int local_16c;
  undefined1 auStack_168 [4];
  undefined4 local_164;
  int local_160;
  undefined4 local_15c;
  int iStack_7c;
  
  param_1[0x1a1] = 0;
  FUN_00ac2080(0);
  piVar7 = (int *)param_1[0x19f];
  piVar4 = piVar7 + param_1[0x1a1] * 0x54;
  FUN_00445db0();
  iVar3 = -1;
  local_16c = 0;
  if (piVar7 == piVar4) {
    return 0;
  }
  do {
    if ((*piVar7 != 0x147) && (iVar3 < piVar7[1])) {
      local_16c = 1;
      FUN_00448f50(piVar7);
      iVar3 = piVar7[1];
    }
    piVar7 = piVar7 + 0x54;
  } while (piVar7 != piVar4);
  if (local_16c == 0) {
    return 0;
  }
  if (local_160 == 0) {
    return 0;
  }
  if (local_160 == 1) {
    return 0;
  }
  if (local_160 == 2) {
    return 0;
  }
  if (local_160 == 0x1b0) {
    return 0;
  }
  if (local_160 == 0x147) {
    return 0;
  }
  local_164 = 0;
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    FUN_00a81330();
    local_164 = FUN_00a7c8a0();
  }
  piVar7 = (int *)0x0;
  (**(code **)(*param_1 + 0x30c))(local_15c,0);
  piStack_174 = (int *)0x0;
  iVar3 = FUN_00a81330();
  if (iVar3 == 0) {
LAB_00b77897:
    piVar4 = (int *)0x0;
  }
  else {
    iVar3 = FUN_00d466f0();
    if (iVar3 == 0) {
      FUN_00a81330();
      piVar4 = (int *)FUN_00a7c8a0();
      if (piVar4 == (int *)0x0) goto LAB_00b77897;
      puVar9 = &DAT_01be9d50;
      (**(code **)(*piVar4 + 4))(&DAT_01be9d50);
      iVar3 = FUN_00dd6d80(puVar9);
      piVar7 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar4);
      piVar4 = (int *)0x0;
    }
    else {
      iVar3 = FUN_00d46780();
      if (iVar3 == 0) {
        iVar3 = FUN_00d467a0();
        if (iVar3 != 0) {
          FUN_00a81330();
          uVar8 = FUN_00a7c8a0();
          piStack_174 = (int *)FUN_0064d710(uVar8);
        }
        goto LAB_00b77897;
      }
      FUN_00a81330();
      piVar5 = (int *)FUN_00a7c8a0();
      piVar4 = (int *)0x0;
      if (piVar5 != (int *)0x0) {
        puVar9 = &DAT_01b357d0;
        (**(code **)(*piVar5 + 4))(&DAT_01b357d0);
        iVar3 = FUN_00dd6d80(puVar9);
        piVar4 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar5);
      }
    }
  }
  if (param_1[0x2fd] != 0) {
    iVar3 = FUN_00a8eea0();
    if ((0 < iVar3) && (iStack_7c == 0)) goto LAB_00b77aa0;
    param_1[0x139] = 1;
    if (piVar7 != (int *)0x0) {
      if (param_1[0x129] == 0) {
        uVar8 = 0x198;
      }
      else {
        if (param_1[0x129] != 1) goto LAB_00b779fd;
        uVar8 = 0x199;
      }
      (**(code **)(*piVar7 + 0x358))(uVar8,0);
    }
LAB_00b779fd:
    if (piVar4 != (int *)0x0) {
      if (param_1[0x129] == 0) {
        uVar8 = 0x198;
      }
      else {
        if (param_1[0x129] != 1) goto LAB_00b77a2b;
        uVar8 = 0x199;
      }
      (**(code **)(*piVar4 + 0x358))(uVar8,0);
    }
LAB_00b77a2b:
    if (piStack_174 != (int *)0x0) {
      if (param_1[0x129] == 0) {
        uVar8 = 0x198;
      }
      else {
        if (param_1[0x129] != 1) goto LAB_00b77a5f;
        uVar8 = 0x199;
      }
      (**(code **)(*piStack_174 + 0x358))(uVar8,0);
    }
LAB_00b77a5f:
    if (piVar7 == (int *)0x0) {
      if (piVar4 == (int *)0x0) {
        if (piStack_174 == (int *)0x0) {
          FUN_009fdde0();
        }
        else {
          FUN_006511d0(param_1[0x13c]);
        }
      }
      else {
        FUN_00744cc0(param_1[0x13c]);
      }
    }
    else {
      FUN_00b681d0(param_1[0x13c]);
    }
    goto LAB_00b77aa0;
  }
  iVar3 = FUN_00a8eea0();
  if (param_1[0x2fc] <= iVar3) goto LAB_00b77aa0;
  if (piVar7 != (int *)0x0) {
    if (param_1[0x129] == 0) {
      uVar8 = 0x196;
    }
    else {
      if (param_1[0x129] != 1) goto LAB_00b778e7;
      uVar8 = 0x197;
    }
    (**(code **)(*piVar7 + 0x358))(uVar8,0);
  }
LAB_00b778e7:
  if (piVar4 != (int *)0x0) {
    if (param_1[0x129] == 0) {
      uVar8 = 0x196;
    }
    else {
      if (param_1[0x129] != 1) goto LAB_00b77915;
      uVar8 = 0x197;
    }
    (**(code **)(*piVar4 + 0x358))(uVar8,0);
  }
LAB_00b77915:
  if (piStack_174 != (int *)0x0) {
    if (param_1[0x129] == 0) {
      uVar8 = 0x196;
    }
    else {
      if (param_1[0x129] != 1) goto LAB_00b77945;
      uVar8 = 0x197;
    }
    (**(code **)(*piStack_174 + 0x358))(uVar8,0);
  }
LAB_00b77945:
  iVar3 = 0;
  piStack_174 = (int *)0x0;
  if (0 < (short)param_1[0xc9]) {
    do {
      iVar2 = param_1[200];
      iVar6 = *(int *)(*(int *)(iVar2 + 0x60 + iVar3) + 0x40);
      if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,"EFD01"), iVar6 != 0)) {
        puVar1 = (uint *)(iVar2 + 0x38 + iVar3);
        *puVar1 = *puVar1 | 1;
      }
      piStack_174 = (int *)((int)piStack_174 + 1);
      iVar3 = iVar3 + 0x70;
    } while ((int)piStack_174 < (int)(short)param_1[0xc9]);
  }
  param_1[0x2fd] = 1;
LAB_00b77aa0:
  if (param_1[0x139] != 0) {
    (**(code **)(*param_1 + 0x198))(local_16c,auStack_168,1);
  }
  return 1;
}

// 00B77AD0  cGeckoBattery::vf48  size=16  [class]
void cGeckoBattery::vf48(void)

{
  BehaviorAppBase::vf48();
  FUN_00b776d0();
  return;
}

// 00B77B10  FUN_00b77b10  size=349  [between]
void __fastcall FUN_00b77b10(int param_1)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  undefined1 auStack_64 [4];
  float local_60;
  float local_5c;
  float local_58;
  undefined1 local_50 [48];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  iVar1 = FUN_00a81330();
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      local_60 = 0.0;
      local_5c = 0.0;
      local_58 = 0.0;
      iVar1 = FUN_00a12210(2);
      D3DXMatrixInverse(local_50,0,iVar1 + 0x10);
      D3DXVec3TransformNormal(&stack0xffffff94,piVar2 + 0x10,&local_5c);
      fVar3 = (float10)fpatan(SQRT(((float10)fStack_1c + (float10)local_5c) *
                                   ((float10)fStack_1c + (float10)local_5c) +
                                   ((float10)fStack_20 + (float10)local_60) *
                                   ((float10)fStack_20 + (float10)local_60)),
                              (float10)fStack_18 + (float10)local_58);
      *(float *)(param_1 + 0xbcc) = (float)fVar3;
    }
  }
  Behavior::vf4C();
  iVar1 = *(int *)(param_1 + 0x618);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      if (*(int *)(param_1 + 0x4a0) == 0) {
        FUN_00b77050();
      }
      else if (*(int *)(param_1 + 0x4a0) == 1) {
        FUN_00b77380();
      }
    }
    else if (iVar1 == 2) {
      FUN_00b76a10();
    }
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x204))(&local_60);
    FUN_00a84720();
    FUN_00a84720();
    switchD_0080dbae::default();
    FUN_00a84780(auStack_64,0,*(undefined4 *)(param_1 + 0xbac),0,0,0x3f800000);
    switchD_0080dbae::default();
    FUN_00a84780(auStack_64,*(undefined4 *)(param_1 + 0xbac),0,0,0,0x3f800000);
  }
  return;
}

// 00B77C70  FUN_00b77c70  size=182  [between]
void __fastcall FUN_00b77c70(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_24 [4];
  undefined1 local_20 [28];
  
  iVar1 = FUN_00a81330();
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
  }
  Behavior::vf4C();
  iVar1 = *(int *)(param_1 + 0x618);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      if (*(int *)(param_1 + 0x4a0) == 0) {
        FUN_00b77050();
      }
      else if (*(int *)(param_1 + 0x4a0) == 1) {
        FUN_00b77380();
      }
    }
    else if (iVar1 == 2) {
      FUN_00b76a10();
    }
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x204))(local_20);
    FUN_00a84720();
    switchD_0080dbae::default();
    FUN_00a84780(auStack_24,*(undefined4 *)(param_1 + 0xbac),0,0,0,0x3f800000);
  }
  return;
}

// 00B77D30  cGeckoBattery::vf4C  size=233  [class]
void __fastcall cGeckoBattery::vf4C(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  float10 fVar4;
  
  param_1[0x2ea] = 0;
  iVar1 = FUN_00a81330();
  param_1[0x2e9] = iVar1;
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    param_1[0x2ea] = iVar1;
  }
  FUN_00a92fb0();
  fVar4 = (float10)FUN_00e049b0();
  param_1[0x2f2] = (int)(float)fVar4;
  if ((param_1[0x2ea] != 0) && (iVar1 = FUN_00a93610(0), iVar1 != 0)) {
    uVar2 = FUN_009f8b40();
    *(undefined4 *)(iVar1 + 0x370) = uVar2;
  }
  if (param_1[0x128] == 0) {
    FUN_00b77b10();
  }
  else if (param_1[0x128] == 1) {
    FUN_00b77c70();
  }
  else {
    Behavior::vf4C();
  }
  if (param_1[0x2ea] != 0) {
    if ((*(byte *)(param_1[0x2ea] + 0x4c0) & 1) == 0) {
      pcVar3 = *(code **)(*param_1 + 0x20);
    }
    else {
      pcVar3 = *(code **)(*param_1 + 0x1c);
    }
    (*pcVar3)();
    if (*(int *)(param_1[0x2ea] + 0x4e4) != 0) {
      param_1[0x2ec] = 0;
    }
  }
  FUN_00a88670();
  if (param_1[0x2fb] == 0) {
    return;
  }
  FUN_009fdde0();
  return;
}

