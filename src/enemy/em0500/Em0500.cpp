// src/enemy/em0500/Em0500.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0059D140..00AB75B0, 18 functions

#include "types.h"

// 0059D140  Em0500::vf50  size=16  [class]
void Em0500::vf50(void)

{
  FUN_00a93170();
  BehaviorEmBase::vf50();
  return;
}

// 0059D150  FUN_0059d150  size=28  [between]
void __fastcall FUN_0059d150(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(0xb);
  FUN_00a8edf0(uVar1);
  return;
}

// 0059D170  Em0500::vf1A4  size=3  [class]
void Em0500::vf1A4(void)

{
  return;
}

// 0059D180  Em0500::vf130  size=5  [class]
undefined4 Em0500::vf130(void)

{
  return 0;
}

// 0059D190  FUN_0059d190  size=46  [between]
void __thiscall FUN_0059d190(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a8cab0();
  *(undefined4 *)(param_1 + 0xdc0) = uVar1;
  FUN_00a8caf0(param_2,0,0,0);
  *(undefined4 *)(param_1 + 0xdc4) = 0xffffffff;
  return;
}

// 0059D210  FUN_0059d210  size=51  [between]
void __fastcall FUN_0059d210(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa9280(4);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  return;
}

// 0059D2C0  Em0500::vf40  size=499  [class]
undefined4 __fastcall Em0500::vf40(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_84 [128];
  
  iVar1 = BehaviorEmBase::vf40();
  if (iVar1 != 0) {
    iVar1 = FUN_008ec660(param_1,0x3f4ccccd,0x3e99999a,0x41a00000,0x41a00000,0x78,7,0);
    param_1[0x1d9] = iVar1;
    FUN_008e6d00();
    FUN_00a929d0();
    uVar2 = (**(code **)(*(int *)param_1[0x1d5] + 0x24))(0xb);
    FUN_00a8edf0(uVar2);
    if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
      param_1[0xd9] = param_1[0xd9] | 0x400000;
      *(undefined4 *)param_1[0xdc] = 0;
    }
    if (param_1[0xdc] != 0) {
      *(undefined4 *)(param_1[0xdc] + 4) = 1;
      *(undefined4 *)(param_1[0xdc] + 8) = 1;
    }
    if (param_1[0xdc] != 0) {
      *(undefined4 *)(param_1[0xdc] + 0xc) = 1;
    }
    piVar4 = param_1;
    FUN_00c1cf50(param_1);
    FUN_00c54720(piVar4);
    iVar1 = FUN_00c5def0(param_1[0x13c]);
    param_1[0x25c] = iVar1;
    param_1[0x1b1] = 0;
    FUN_00405230();
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    FUN_00c151f0(1,param_1[0x13c],0,&uStack_94,0,0x41200000,0x3f800000,1,0);
    FUN_00c57830(auStack_84);
    param_1[0x371] = -1;
    param_1[0x370] = -1;
    lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>(2,2);
    uVar2 = FUN_00a8d2a0();
    puVar3 = (undefined4 *)FUN_009f8b60();
    iVar1 = CollisionCapsule::CollisionCapsule(2,*puVar3,0);
    if (iVar1 != 0) {
      FUN_00d771d0(1);
      *(undefined4 *)(iVar1 + 0x380) = 0;
      FUN_00d77c50(param_1[0x13c],0);
      *(undefined4 *)(iVar1 + 0x594) = 0x3f266666;
      *(undefined4 *)(iVar1 + 0x590) = 0x3e99999a;
      FUN_00a93a00(iVar1,uVar2);
      FUN_00d7b0f0();
      FUN_00d7b890();
      (**(code **)(*param_1 + 0x34c))();
      return 1;
    }
  }
  return 0;
}

// 0059D4C0  Em0500::vf44  size=88  [class]
void __fastcall Em0500::vf44(int param_1)

{
  int iVar1;
  
  FUN_00c57120(*(undefined4 *)(param_1 + 0x4f0));
  iVar1 = param_1;
  FUN_00c1cf50(param_1);
  FUN_00c1d1c0(iVar1);
  FUN_00a9d8a0();
  FUN_00a92a00();
  FUN_00a944d0();
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e3c10();
    FUN_008e1c60();
  }
  BehaviorEmBase::vf44();
  return;
}

// 0059D520  Em0500::vf48  size=68  [class]
void __fastcall Em0500::vf48(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = *(int *)(param_1 + 0xa84);
  *(undefined4 *)(param_1 + 0x6ec) = 0;
  if ((iVar1 != 0) &&
     (fVar2 = *(float *)(iVar1 + 0x40) - *(float *)(param_1 + 0x40),
     fVar3 = *(float *)(iVar1 + 0x48) - *(float *)(param_1 + 0x48),
     fVar3 * fVar3 + fVar2 * fVar2 < 100.0)) {
    *(undefined4 *)(param_1 + 0x6ec) = 1;
  }
  BehaviorEmBase::vf48();
  return;
}

// 0059D570  Em0500::vf264  size=87  [class]
void __thiscall Em0500::vf264(int param_1,undefined4 param_2)

{
  FUN_0040ac60(param_2);
  FUN_00aa0ba0(*(undefined4 *)(param_1 + 0xb08),*(undefined4 *)(param_1 + 0xb9c));
  FUN_00aa0920(*(undefined4 *)(param_1 + 0xb0c));
  *(undefined4 *)(param_1 + 0x7e0) = 1;
  *(undefined4 *)(*(int *)(param_1 + 0x7d8) + 0x85c) = 0x3f000000;
  return;
}

// 0059D5D0  Em0500::vf268  size=5  [class]
undefined4 Em0500::vf268(void)

{
  return 0;
}

// 0059D610  Em0500::vf34C  size=73  [class]
void __fastcall Em0500::vf34C(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xdc4);
  uVar2 = FUN_00a8cab0();
  *(undefined4 *)(param_1 + 0xdc0) = uVar2;
  if (iVar1 != -1) {
    FUN_00a8caf0(iVar1,0,0,0);
    *(undefined4 *)(param_1 + 0xdc4) = 0xffffffff;
    return;
  }
  FUN_00a8caf0(0,0,0,0);
  *(undefined4 *)(param_1 + 0xdc4) = 0xffffffff;
  return;
}

// 0059D690  Em0500::vf19C  size=191  [class]
void __thiscall Em0500::vf19C(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_a0 [48];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  
  uVar1 = *(undefined4 *)(param_2 + 0x100);
  uVar2 = *(undefined4 *)(param_2 + 0x104);
  uVar3 = *(undefined4 *)(param_2 + 0x108);
  FUN_009dbcf0();
  FID_conflict__memcpy(local_a0,(void *)(param_2 + 0x40),0x40);
  if ((*(uint *)(param_2 + 0x8c) & 0x10000000) == 0) {
    local_70 = uVar1;
    local_6c = uVar2;
    local_68 = uVar3;
    if (*(short *)(param_2 + 0x84) == -1) {
      (**(code **)(*param_1 + 0x1ac))
                (*(undefined4 *)(param_2 + 0x144),param_2,*(undefined4 *)(param_2 + 300),local_a0);
      return;
    }
    (**(code **)(*param_1 + 0x1a8))(param_2,param_3,param_1);
  }
  return;
}

// 0059D7C0  Em0500::vf4C  size=132  [class]
void __fastcall Em0500::vf4C(int *param_1)

{
  BehaviorEmBase::vf4C();
  switch(param_1[0x186]) {
  case 2:
    (**(code **)(*param_1 + 0x34c))();
  }
  switch(param_1[0x186]) {
  case 0:
    FUN_0059d210();
    return;
  case 1:
  case 2:
    if (param_1[0x187] == 1) {
      FUN_00ac80a0(0x3f800000,0x3f800000);
      return;
    }
    break;
  case 3:
    if (param_1[0x187] == 0) {
      param_1[0x187] = 1;
    }
    else if (param_1[0x187] == 1) {
      FUN_00a805f0();
      return;
    }
  }
  return;
}

// 0059D800  Em0500::vf32C  size=373  [class]
undefined4 __fastcall Em0500::vf32C(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  undefined4 local_4;
  
  iVar3 = 0;
  param_1[0x1a1] = 0;
  iVar1 = FUN_00a8eea0();
  if (0 < iVar1) {
    FUN_00ac2080(0);
    iVar1 = FUN_00a8ef10();
    if ((iVar1 == 0) && (param_1[0x139] == 0)) {
      piVar4 = (int *)param_1[0x19f];
      piVar2 = piVar4 + param_1[0x1a1] * 0x54;
      local_4 = 0;
      if (piVar4 != piVar2) {
        while (((((iVar1 = *piVar4, iVar1 == 0 || (iVar1 == 1)) || (iVar1 == 2)) ||
                ((iVar1 == 0x1b0 || (iVar1 == 0x147)))) ||
               (iVar1 = FUN_00a81330(), iVar1 == param_1[0x13c]))) {
          piVar4 = piVar4 + 0x54;
          if (piVar4 == piVar2) {
            return 0;
          }
        }
        if (iVar1 != 0) {
          iVar3 = FUN_00a7c8a0();
        }
        iVar1 = FUN_00a8eea0();
        if (((0 < iVar1) && (iVar3 != 0)) && ((*(byte *)(iVar3 + 0x4c0) & 0x10) != 0)) {
          (**(code **)(*param_1 + 0x21c))(iVar3,(char)piVar4[4],0x3c23d70a,0);
        }
        local_4 = 1;
        (**(code **)(*param_1 + 0x30c))(piVar4[1],0);
        (**(code **)(*param_1 + 0x220))(0x41200000);
        (**(code **)(*param_1 + 0x198))(iVar3,piVar4,1);
        fVar5 = (float10)FUN_00ddba30((float)piVar4[0xc] - (float)param_1[0x25]);
        param_1[0x245] = (int)(float)fVar5;
        iVar1 = FUN_00a8eea0();
        if (iVar1 < 1) {
          FUN_00a8caf0(3,0,0,0);
          return 1;
        }
        FUN_00a8caf0(2,0,0,0);
      }
      return local_4;
    }
  }
  return 0;
}

// 00AAE730  Em0500::Em0500  size=18  [class]
undefined4 * __fastcall Em0500::Em0500(undefined4 *param_1)

{
  BehaviorAppBase::BehaviorAppBase_34();
  *param_1 = vftable;
  return param_1;
}

// 00AAE750  Em0500::vf04  size=6  [class]
undefined * Em0500::vf04(void)

{
  return &DAT_01b35184;
}

// 00AB75B0  Em0500::vf00  size=30  [class]
undefined4 __thiscall Em0500::vf00(undefined4 param_1,byte param_2)

{
  cEnemyCautionStateManager::cEnemyCautionStateManager_3();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

