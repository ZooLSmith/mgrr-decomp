// src/enemy/em0090/Em0090.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0049B520..00AB6ED0, 21 functions

#include "mgrr.h"
#include "Em0090.h"

// 0049B520  Em0090::vf50  size=44  [class]
void __fastcall Em0090::vf50(int param_1)

{
  FUN_00a93170();
  BehaviorAppBase::vf50();
  FUN_00a8efe0();
  *(undefined4 *)(param_1 + 0xd90) = 0;
  *(undefined4 *)(param_1 + 0xd94) = 0;
  *(undefined4 *)(param_1 + 0xd9c) = 0;
  return;
}

// 0049B550  Em0090::vf30  size=34  [class]
void __fastcall Em0090::vf30(int param_1)

{
  int iVar1;
  
  BehaviorAppBase::vf30();
  iVar1 = *(int *)(param_1 + 0x588);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x2c) = 1;
    *(undefined4 *)(iVar1 + 0x30) = 0x1000000;
  }
  return;
}

// 0049B580  FUN_0049b580  size=147  [between]
void __fastcall FUN_0049b580(int param_1)

{
  code *pcVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    pcVar1 = *(code **)(*(int *)(param_1 + 0xab0) + 8);
    *(undefined4 *)(param_1 + 0x61c) = 1;
    (*pcVar1)(0x3f800000,0,0);
    FUN_00a828c0(0x3dcccccd,0x3ae4c388,0x3d567750);
    FUN_00a828a0(0x3dcccccd,0x3ae4c388,0x3d567750);
  }
  return;
}

// 0049B620  FUN_0049b620  size=136  [between]
void __fastcall FUN_0049b620(int param_1)

{
  code *pcVar1;
  float fVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    pcVar1 = *(code **)(*(int *)(param_1 + 0xab0) + 8);
    *(undefined4 *)(param_1 + 0x61c) = 1;
    (*pcVar1)(0x3f800000,0,0);
    *(undefined4 *)(param_1 + 0x920) = 0;
    FUN_00e5e0c0("ba0120_se_mov_motor_stop",param_1,0xffffffff,0);
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  fVar2 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x920);
  *(float *)(param_1 + 0x920) = fVar2;
  if (180.0 < fVar2) {
    FUN_00a8caf0(0,0,0,0);
  }
  return;
}

// 0049B700  FUN_0049b700  size=42  [between]
uint FUN_0049b700(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01be9c24;
  (**(code **)(*param_1 + 4))(&DAT_01be9c24);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 0049B790  FUN_0049b790  size=75  [between]
void __fastcall FUN_0049b790(int param_1)

{
  if (((((DAT_01bea060 & 0x2000000) == 0) && (*(int *)(param_1 + 0xdf4) != 0)) &&
      (*(float *)(param_1 + 0xdd0) < 30.0)) &&
     (*(float *)(param_1 + 0xdcc) * *(float *)(param_1 + 0xdcc) < 2.4674013)) {
    FUN_00a8caf0(1,0,0,0);
  }
  return;
}

// 0049B7E0  FUN_0049b7e0  size=162  [between]
void __fastcall FUN_0049b7e0(int param_1)

{
  if ((DAT_01bea060 & 0x2000000) == 0) {
    *(undefined4 *)(param_1 + 0xda0) = 1;
    if (((*(int *)(param_1 + 0xdf4) == 0) || (30.0 <= *(float *)(param_1 + 0xdd0))) ||
       (2.4674013 <= *(float *)(param_1 + 0xdcc) * *(float *)(param_1 + 0xdcc))) {
      *(float *)(param_1 + 0xdc0) = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0xdc0);
      *(undefined4 *)(param_1 + 0xdbc) = 0;
    }
    else {
      *(float *)(param_1 + 0xdbc) = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0xdbc);
      *(undefined4 *)(param_1 + 0xdc0) = 0;
    }
    if (90.0 < *(float *)(param_1 + 0xdbc)) {
      FUN_00a8caf0(2,0,0,0);
    }
  }
  return;
}

// 0049B890  FUN_0049b890  size=127  [between]
void __fastcall FUN_0049b890(int param_1)

{
  float fVar1;
  
  if ((DAT_01bea060 & 0x2000000) == 0) {
    *(undefined4 *)(param_1 + 0xda0) = 1;
    if (((*(int *)(param_1 + 0xdf4) == 0) || (30.0 <= *(float *)(param_1 + 0xdd0))) ||
       (2.4674013 <= *(float *)(param_1 + 0xdcc) * *(float *)(param_1 + 0xdcc))) {
      *(undefined4 *)(param_1 + 0xda4) = 1;
      fVar1 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0xdc0);
    }
    else {
      fVar1 = 0.0;
    }
    *(float *)(param_1 + 0xdc0) = fVar1;
    if (30.0 < *(float *)(param_1 + 0xdc0)) {
      FUN_00a8caf0(3,0,0,0);
    }
  }
  return;
}

// 0049B910  FUN_0049b910  size=132  [between]
void __fastcall FUN_0049b910(int param_1)

{
  float fVar1;
  
  if (((DAT_01bea060 & 0x2000000) == 0) &&
     (*(undefined4 *)(param_1 + 0xda4) = 1, *(int *)(param_1 + 0x61c) != 0)) {
    if ((*(int *)(param_1 + 0xdf4) == 0) ||
       ((30.0 <= *(float *)(param_1 + 0xdd0) ||
        (2.4674013 <= *(float *)(param_1 + 0xdcc) * *(float *)(param_1 + 0xdcc))))) {
      *(undefined4 *)(param_1 + 0xdbc) = 0;
    }
    else {
      fVar1 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0xdbc);
      *(float *)(param_1 + 0xdbc) = fVar1;
      if (30.0 < fVar1) {
        FUN_00a8caf0(1,0,0,0);
        return;
      }
    }
  }
  return;
}

// 0049B9A0  Em0090::vf44  size=110  [class]
void __fastcall Em0090::vf44(int param_1)

{
  FUN_00a944d0();
  if (*(int *)(param_1 + 0x67c) != 0) {
    *(undefined4 *)(param_1 + 0x684) = 0;
    if (*(int *)(param_1 + 0x688) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x67c),0);
      *(undefined4 *)(param_1 + 0x688) = 0;
    }
    *(undefined4 *)(param_1 + 0x67c) = 0;
    *(undefined4 *)(param_1 + 0x680) = 0;
  }
  RayCastManager::getWork(param_1 + 0xdf0);
  FUN_00a8f000();
  FUN_00a9d8a0();
  FUN_00a8c820();
  Behavior::vf44();
  return;
}

// 0049BA70  FUN_0049ba70  size=461  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_0049ba70(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  float *pfStack_368;
  int iStack_364;
  float local_350 [2];
  uint local_348 [2];
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined1 uStack_328;
  undefined4 uStack_324;
  uint uStack_2ac;
  undefined4 uStack_238;
  undefined4 uStack_1dc;
  undefined2 uStack_1ce;
  float fStack_1b8;
  float fStack_1b4;
  
  iStack_364 = 2;
  pfStack_368 = (float *)0x49ba88;
  iVar1 = FUN_00a12210();
  local_350[0] = 0.0;
  local_350[1] = 0.04;
  pfStack_368 = local_350;
  local_348[0] = 0x3f547ae1;
  local_340 = 0;
  local_33c = 0x3d23d70a;
  local_338 = 0x424b51ec;
  iStack_364 = iVar1 + 0x10;
  D3DXVec3TransformNormal(pfStack_368);
  D3DXVec3TransformNormal(local_350 + 1,local_350 + 1,iVar1 + 0x10);
  local_350[0] = *(float *)(iVar1 + 0x48) + local_350[0];
  FUN_004105d0();
  FUN_00410710();
  FUN_0041cf30();
  uStack_238 = 0x37;
  FUN_0043fe30(&pfStack_368,&stack0xfffffca8,param_1 + 0x90,0x3f4ccccd,0x42a00000);
  uStack_1dc = 0x3f7f7cee;
  fVar3 = (float10)FUN_00dde300(0xbc0efa35,0x3c0efa35);
  fStack_1b8 = (float)fVar3;
  fVar3 = (float10)FUN_00dde300(0xbc0efa35,0x3c0efa35);
  uStack_324 = *(undefined4 *)(param_1 + 0x4f0);
  fStack_1b4 = (float)fVar3;
  uStack_2ac = uStack_2ac | 0x10000000;
  uStack_334 = 5;
  uStack_32c = 0xf;
  uStack_328 = 0;
  uStack_330 = 0x96;
  uVar2 = FUN_00a7c7f0();
  FUN_00a7c960(uVar2);
  local_348[0] = local_348[0] | 4;
  uStack_1ce = *(undefined2 *)(iVar1 + 0xa0);
  FUN_00ae2bc0(*(undefined4 *)(param_1 + 0x4f0),local_348);
  return;
}

// 0049BC40  FUN_0049bc40  size=347  [between]
undefined4 __fastcall FUN_0049bc40(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  
  param_1[0x1a1] = 0;
  FUN_00ac2080(0);
  uVar1 = 0;
  if (param_1[0x139] == 0) {
    piVar5 = (int *)param_1[0x19f];
    piVar3 = piVar5 + param_1[0x1a1] * 0x54;
    if (piVar5 != piVar3) {
      do {
        iVar2 = *piVar5;
        if ((((iVar2 != 0) && (iVar2 != 1)) && (iVar2 != 2)) &&
           ((iVar2 != 0x1b0 && (iVar2 != 0x147)))) {
          (**(code **)(*param_1 + 0x30c))(piVar5[1],0);
          iVar4 = 0;
          iVar2 = FUN_00a81330();
          if (iVar2 != 0) {
            iVar4 = FUN_00a7c8a0();
          }
          if (((0 < param_1[0x21c]) && (iVar4 != 0)) && ((*(byte *)(iVar4 + 0x4c0) & 0x10) != 0)) {
            (**(code **)(*param_1 + 0x21c))(iVar4,(char)piVar5[4],0x3c23d70a,0);
            (**(code **)(*param_1 + 0x220))(0x40000000);
          }
          fVar6 = (float10)FUN_00ddba30((float)piVar5[0xc] - (float)param_1[0x25]);
          param_1[0x245] = (int)(float)fVar6;
          if (param_1[0x21c] < 1) {
            FUN_00a8caf0(5,0,0,0);
            (**(code **)(*param_1 + 0x198))(iVar4,piVar5,1);
            return 1;
          }
          (**(code **)(*param_1 + 0x198))(iVar4,piVar5,1);
          uVar1 = 1;
        }
        piVar5 = piVar5 + 0x54;
        if (piVar5 == piVar3) {
          return uVar1;
        }
      } while( true );
    }
  }
  return uVar1;
}

// 0049BDA0  Em0090::vf48  size=459  [class]
/* WARNING: Removing unreachable block (ram,0x0049be64) */

void __fastcall Em0090::vf48(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int unaff_EBX;
  undefined *puVar6;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined1 auStack_24 [32];
  
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0);
  *(undefined4 *)(param_1 + 0xdfc) = 0;
  if (iVar2 != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
    uVar3 = 0;
    if (piVar1 != (int *)0x0) {
      puVar6 = &DAT_01be9c24;
      (**(code **)(*piVar1 + 4))(&DAT_01be9c24);
      iVar2 = FUN_00dd6d80(puVar6);
      uVar3 = -(uint)(iVar2 != 0) & (uint)piVar1;
    }
    *(uint *)(param_1 + 0xdfc) = uVar3;
  }
  BehaviorAppBase::vf48();
  *(undefined4 *)(param_1 + 0xdf4) = 1;
  iVar2 = FUN_00907640(param_1 + 0xdf0,&stack0xffffffa8,auStack_24);
  if (iVar2 != 0) {
    iVar2 = 0;
    *(undefined4 *)(param_1 + 0xdf4) = 0;
    FUN_0112bcf0();
    if (0 < *(int *)(unaff_EBX + 0x14)) {
      iVar4 = *(int *)(*(int *)(unaff_EBX + 0x10) + 0x28);
      iVar5 = 0;
      if (*(char *)(iVar4 + 0x18) == '\x01') {
        iVar5 = *(char *)(iVar4 + 0x10) + iVar4;
      }
      if (*(char *)(iVar4 + 0x18) == '\x02') {
        if (*(char *)(iVar4 + 0x18) == '\x02') {
          iVar2 = *(char *)(iVar4 + 0x10) + iVar4;
        }
        else {
          iVar2 = 0;
        }
      }
      if (iVar5 != 0) {
        iVar4 = FUN_008f7780(iVar5);
        if ((*(int *)(param_1 + 0xdfc) != 0) && (iVar4 == *(int *)(param_1 + 0xdfc))) {
          *(undefined4 *)(param_1 + 0xdf4) = 1;
        }
      }
      if (iVar2 != 0) {
        iVar2 = FUN_008f7780(iVar2);
        if ((*(int *)(param_1 + 0xdfc) != 0) && (iVar2 == *(int *)(param_1 + 0xdfc))) {
          *(undefined4 *)(param_1 + 0xdf4) = 1;
        }
      }
    }
  }
  if (*(int *)(param_1 + 0xdfc) != 0) {
    FUN_00a8d230(&fStack_54);
    iVar2 = FUN_00a12210(2);
    fStack_34 = *(float *)(iVar2 + 0x40);
    fStack_30 = *(float *)(iVar2 + 0x44);
    fStack_2c = *(float *)(iVar2 + 0x48);
    fStack_28 = *(float *)(iVar2 + 0x4c);
    fStack_44 = fStack_54 - fStack_34;
    fStack_40 = fStack_50 - fStack_30;
    fStack_3c = fStack_4c - fStack_2c;
    fStack_38 = fStack_48 - fStack_28;
    iVar2 = FUN_009f8b40();
    FUN_0090fa30(param_1 + 0xdf0,0,&fStack_34,0x3f000000,&fStack_44,iVar2 << 0x10 | 7,"SentryCancer"
                );
  }
  FUN_0049bc40();
  return;
}

// 0049BF70  FUN_0049bf70  size=85  [between]
void __thiscall FUN_0049bf70(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_160 [348];
  
  uVar2 = 0;
  uVar1 = FUN_00a7c8a0(0);
  FUN_004039a0(param_2,uVar1,uVar2);
  if (param_3 != 0) {
    FUN_00dffb20(param_3);
  }
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  return;
}

// 0049BFD0  Em0090::startup  size=658  [class]
undefined4 __fastcall Em0090::startup(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_80 [124];
  
  iVar1 = BehaviorAppBase::startup();
  if (iVar1 != 0) {
    local_90 = 1;
    local_8c = 1;
    local_88 = 1;
    iVar1 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
            StaticArray<Behavior::EffectIntegrationContainer,32>(&local_90);
    if (iVar1 != 0) {
      FUN_00a986d0();
      FUN_00a8efe0();
      iVar1 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
      if (iVar1 != 0) {
        FUN_00405230();
        local_90 = 0;
        local_8c = 0;
        local_88 = 0;
        FUN_00c151f0(1,*(undefined4 *)(param_1 + 0x4f0),2,&local_90,0,0x41f00000,0x3f800000,0,0);
        FUN_00c57830(local_80);
        lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(2);
        uVar2 = FUN_00a8d2a0();
        puVar3 = (undefined4 *)FUN_009f8b60();
        iVar1 = CollisionCapsule::CollisionCapsule(2,*puVar3,0);
        if (iVar1 != 0) {
          *(undefined4 *)(iVar1 + 0x380) = 0;
          FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0xffffffff);
          *(undefined4 *)(iVar1 + 0x594) = 0x3fc00000;
          *(undefined4 *)(iVar1 + 0x590) = 0x3f000000;
          FUN_00d771d0(0xd);
          FUN_00a93a00(iVar1,uVar2);
          FUN_00d7b0f0();
          FUN_00d7b890();
        }
        FUN_00410540(0x10,&DAT_01b7bd48);
        FUN_00a82790(*(undefined4 *)(param_1 + 0x4f0),1,0);
        *(uint *)(param_1 + 0xb70) = *(uint *)(param_1 + 0xb70) | 2;
        FUN_00a82870(0x3fc90fdb,0xbfc90fdb,0x3dcccccd,0x3ae4c388,0x3d567750);
        FUN_00a82790(*(undefined4 *)(param_1 + 0x4f0),2,0);
        *(uint *)(param_1 + 0xc40) = *(uint *)(param_1 + 0xc40) | 2;
        FUN_00a82840(0x3e32b8c2,0xbf860a92,0x3dcccccd,0x3ae4c388,0x3d567750);
        *(undefined4 *)(param_1 + 0xdb4) = 0x3c;
        *(undefined4 *)(param_1 + 0xdb8) = 0x3c;
        FUN_0049bf70(0,param_1 + 0xa00);
        uVar2 = 2;
        FUN_00a92fb0(2);
        FUN_00e08640(uVar2);
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
        *(undefined4 *)(param_1 + 0xda0) = 0;
        FUN_00a8ee10(100);
        FUN_00a8ee20(100);
        *(undefined4 *)(param_1 + 0xdf8) = 0;
        return 1;
      }
    }
  }
  return 0;
}

// 0049C270  FUN_0049c270  size=105  [between]
void __fastcall FUN_0049c270(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_160 [348];
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar2 = 0;
    *(undefined4 *)(param_1 + 0x61c) = 1;
    uVar1 = FUN_00a7c8a0(0);
    FUN_004039a0(5,uVar1,uVar2);
    if (param_1 + 0xab0 != 0) {
      FUN_00dffb20(param_1 + 0xab0);
    }
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  }
  return;
}

// 0049C2E0  FUN_0049c2e0  size=361  [between]
void __fastcall FUN_0049c2e0(int param_1)

{
  code *pcVar1;
  float fVar2;
  
  *(undefined4 *)(param_1 + 0xe04) = 1;
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    pcVar1 = *(code **)(*(int *)(param_1 + 0xab0) + 8);
    *(undefined4 *)(param_1 + 0x61c) = 1;
    (*pcVar1)(0x3f800000,0,0);
    FUN_0049bf70(6,param_1 + 0xab0);
    *(undefined4 *)(param_1 + 0x920) = 0x42200000;
    FUN_00e5e0c0("ba0120_se_mov_motor_start",param_1,0xffffffff,0);
  case 1:
    fVar2 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar2;
    if (0.0 <= fVar2) {
      return;
    }
    pcVar1 = *(code **)(*(int *)(param_1 + 0xab0) + 8);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    (*pcVar1)(0x3f800000,0,0);
    return;
  case 2:
    *(undefined4 *)(param_1 + 0x920) = 0x40c00000;
    *(undefined4 *)(param_1 + 0x61c) = 3;
    FUN_00a828c0(0x3d75c28f,0x3ae4c388,0x3c8efa35);
    FUN_00a828a0(0x3d75c28f,0x3ae4c388,0x3c8efa35);
    break;
  case 3:
    break;
  default:
    goto switchD_0049c2fe_default;
  }
  fVar2 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x920) = fVar2;
  if (fVar2 < 0.0) {
    *(undefined4 *)(param_1 + 0x920) = 0x40c00000;
    FUN_0049ba70();
    return;
  }
switchD_0049c2fe_default:
  return;
}

// 0049C460  FUN_0049c460  size=366  [between]
void __fastcall FUN_0049c460(int *param_1)

{
  float fVar1;
  code *pcVar2;
  
  switch(param_1[0x187]) {
  case 0:
    pcVar2 = *(code **)(param_1[0x2ac] + 8);
    param_1[0x187] = 1;
    (*pcVar2)(0x3f800000,0,0);
    (**(code **)(param_1[0x280] + 8))(0x3f800000,0,0);
    param_1[0x248] = 0x43340000;
    FUN_0049bf70(3,param_1 + 0x2ac);
    FUN_00e5e0c0("ba0120_se_mov_motor_stop",param_1,0xffffffff,0);
    FUN_00e5e0c0("ba0120_se_dmg_spark",param_1,0xffffffff,0);
  case 1:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    pcVar2 = *(code **)(param_1[0x2ac] + 8);
    param_1[0x187] = 3;
    (*pcVar2)(0x3f800000,0,0);
    (**(code **)(param_1[0x280] + 8))(0x3f800000,0,0);
    param_1[0x248] = 0x42f00000;
    FUN_0049bf70(4,param_1 + 0x2ac);
    (**(code **)(*param_1 + 0x20))();
    FUN_00e5e0c0("ba0120_se_dmg_explosion",param_1,0xffffffff,0);
  case 3:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      E3_EnemyBoardDebrisSokushi::vf4C();
      return;
    }
  }
  return;
}

// 0049C630  Em0090::vf4C  size=1082  [class]
void __fastcall Em0090::vf4C(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float fVar8;
  float fStack_88;
  float fStack_84;
  undefined1 auStack_6c [8];
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 auStack_54 [24];
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  fStack_84 = 6.775114e-39;
  FUN_00a92fb0();
  fStack_84 = 6.775124e-39;
  fVar4 = (float10)FUN_00e049b0();
  *(float *)(param_1 + 0x910) = (float)fVar4;
  fStack_84 = 6.77514e-39;
  piVar1 = (int *)FUN_00c13920();
  fStack_84 = 0.0;
  fStack_88 = 6.775155e-39;
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  fStack_88 = 6.775173e-39;
  FUN_00a7c950();
  if (iVar2 != 0) {
    fStack_88 = 6.775188e-39;
    fStack_88 = (float)FUN_00a7c7f0();
    FUN_00a7c960();
  }
  fStack_88 = 6.77522e-39;
  iVar2 = FUN_00a81330();
  *(undefined4 *)(param_1 + 0xdac) = 0;
  if (iVar2 != 0) {
    fStack_88 = 6.77525e-39;
    iVar2 = FUN_00a7c8a0();
    if (iVar2 != 0) {
      fStack_88 = 6.775265e-39;
      uVar3 = FUN_00a7c8a0();
      *(undefined4 *)(param_1 + 0xdac) = uVar3;
    }
  }
  iVar2 = *(int *)(param_1 + 0xdac);
  *(undefined4 *)(param_1 + 0xdc4) = 0;
  *(undefined4 *)(param_1 + 0xdb0) = 0;
  *(undefined4 *)(param_1 + 0xdc8) = 0;
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0xde0) = *(undefined4 *)(iVar2 + 0x40);
    fStack_88 = 0.0;
    *(undefined4 *)(param_1 + 0xde4) = *(undefined4 *)(iVar2 + 0x44);
    *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(iVar2 + 0x48);
    *(undefined4 *)(param_1 + 0xdec) = *(undefined4 *)(iVar2 + 0x4c);
    *(float *)(param_1 + 0xde4) = *(float *)(param_1 + 0xde4) + 1.1;
    iVar2 = FUN_00a12210();
    fStack_88 = (float)(iVar2 + 0x10);
    fVar8 = 0.0;
    D3DXMatrixInverse(auStack_54);
    D3DXVec3TransformNormal(&stack0xffffff80,(undefined4 *)(param_1 + 0xde0),&fStack_60);
    fVar5 = (float10)fStack_3c + (float10)fVar8;
    fVar4 = (float10)fStack_88;
    fStack_88 = (float)((float10)fStack_38 + fVar4);
    fVar6 = (float10)fStack_34 + (float10)fStack_84;
    fStack_84 = (float)fVar6;
    fVar7 = SQRT(fVar5 * fVar5 + fVar6 * fVar6);
    *(float *)(param_1 + 0xdd0) = (float)fVar7;
    fVar4 = (float10)fpatan((float10)fStack_38 + fVar4,fVar7);
    *(float *)(param_1 + 0xdc8) = (float)fVar4;
    fVar4 = (float10)fpatan(fVar5,fVar6);
    *(float *)(param_1 + 0xdcc) = (float)fVar4;
    iVar2 = FUN_00a12210(2);
    D3DXMatrixInverse(auStack_6c,0,iVar2 + 0x10);
    D3DXVec3TransformNormal(&fStack_88,*(int *)(param_1 + 0xdac) + 0x40,&stack0xffffff88);
    fVar4 = (float10)fpatan(SQRT(((float10)fStack_20 + (float10)fStack_60) *
                                 ((float10)fStack_20 + (float10)fStack_60) +
                                 ((float10)fStack_24 + (float10)fStack_64) *
                                 ((float10)fStack_24 + (float10)fStack_64)),
                            (float10)fStack_1c + (float10)fStack_5c);
    *(float *)(param_1 + 0xdc4) = (float)fVar4;
    fVar8 = *(float *)(param_1 + 0xdc8);
    if ((!NAN(fVar8) && -0.5235988 < fVar8 != (fVar8 == -0.5235988)) &&
       (*(float *)(param_1 + 0xdc8) <= 1.0471976)) {
      *(undefined4 *)(param_1 + 0xdb0) = 1;
    }
  }
  fStack_88 = 6.775815e-39;
  Behavior::vf4C();
  switch(*(undefined4 *)(param_1 + 0x618)) {
  case 0:
    fStack_88 = 6.77585e-39;
    FUN_0049b790();
    break;
  case 1:
    fStack_88 = 6.775862e-39;
    FUN_0049b7e0();
    break;
  case 2:
    fStack_88 = 6.775875e-39;
    FUN_0049b890();
    break;
  case 3:
    fStack_88 = 6.775888e-39;
    FUN_0049b910();
    break;
  case 4:
  case 5:
    if ((DAT_01bea060 & 0x2000000) == 0) {
      *(undefined4 *)(param_1 + 0xda4) = 1;
    }
  }
  *(undefined4 *)(param_1 + 0xe04) = 0;
  switch(*(undefined4 *)(param_1 + 0x618)) {
  case 0:
    fStack_88 = 6.775959e-39;
    FUN_0049b580();
    break;
  case 1:
    fStack_88 = 6.775972e-39;
    FUN_0049c270();
    break;
  case 2:
    fStack_88 = 6.775984e-39;
    FUN_0049c2e0();
    break;
  case 3:
    fStack_88 = 6.775997e-39;
    FUN_0049b620();
    break;
  case 5:
    fStack_88 = 6.77601e-39;
    FUN_0049c460();
  }
  if (*(int *)(param_1 + 0xdac) == 0) {
    *(undefined4 *)(param_1 + 0xda0) = 0;
  }
  fStack_88 = 6.776045e-39;
  FUN_00a84720();
  fStack_88 = 6.77606e-39;
  FUN_00a84720();
  fStack_88 = 6.77607e-39;
  switchD_0080dbae::default();
  fStack_88 = 1.0;
  FUN_00a84780(param_1 + 0xde0,0,*(undefined4 *)(param_1 + 0xda0),*(undefined4 *)(param_1 + 0xda4),
               *(undefined4 *)(param_1 + 0xda4));
  fStack_88 = 6.776137e-39;
  switchD_0080dbae::default();
  fStack_88 = 1.0;
  FUN_00a84780(param_1 + 0xde0,*(undefined4 *)(param_1 + 0xda0),0,*(undefined4 *)(param_1 + 0xda4),
               *(undefined4 *)(param_1 + 0xda4));
  fVar8 = *(float *)(param_1 + 0xbc4) * *(float *)(param_1 + 0xbc4);
  if (*(int *)(param_1 + 0xdf8) == 0) {
    if (0.00030461742 < fVar8) {
      fStack_88 = 0.0;
      FUN_00e5e0c0("ba0120_se_mov_turret_start",param_1,0xffffffff);
      *(undefined4 *)(param_1 + 0xdf8) = 1;
    }
  }
  else if (fVar8 < 7.6154356e-05) {
    fStack_88 = 0.0;
    FUN_00e5e0c0("ba0120_se_mov_turret_stop",param_1,0xffffffff);
    *(undefined4 *)(param_1 + 0xdf8) = 0;
  }
  fStack_88 = 4.2039e-45;
  iVar2 = FUN_00a12210();
  fStack_88 = *(float *)(param_1 + 0xe00) * *(float *)(param_1 + 0x910) + *(float *)(iVar2 + 0x98);
  if (*(int *)(param_1 + 0xe04) == 1) {
    fVar4 = (float10)FUN_00ddba30();
    *(float *)(iVar2 + 0x98) = (float)fVar4;
    fStack_88 = *(float *)(param_1 + 0xe00) + 0.0052359877;
    fVar5 = (float10)FUN_00ddba30();
    *(float *)(param_1 + 0xe00) = (float)fVar5;
    fVar4 = (float10)0.31415927;
    *(undefined4 *)(param_1 + 0xda0) = 0;
    *(undefined4 *)(param_1 + 0xda4) = 0;
    if (fVar5 <= fVar4) {
      return;
    }
  }
  else {
    fVar4 = (float10)FUN_00ddba30();
    *(float *)(iVar2 + 0x98) = (float)fVar4;
    fStack_88 = *(float *)(param_1 + 0xe00) - 0.0052359877;
    fVar5 = (float10)FUN_00ddba30();
    *(float *)(param_1 + 0xe00) = (float)fVar5;
    fVar4 = (float10)0;
    *(undefined4 *)(param_1 + 0xda0) = 0;
    *(undefined4 *)(param_1 + 0xda4) = 0;
    if (fVar4 <= fVar5) {
      return;
    }
  }
  *(float *)(param_1 + 0xe00) = (float)fVar4;
  return;
}

// 00AAD100  Em0090::vf04  size=6  [class]
undefined * Em0090::vf04(void)

{
  return &DAT_01b34d84;
}

// 00AB6ED0  Em0090::destruct  size=30  [class]
undefined4 __thiscall Em0090::destruct(undefined4 param_1,byte param_2)

{
  Behavior::~Behavior();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

