// src/enemy/em0310/Em0310QteObstacle.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0057E670..00AB7050, 11 functions

#include "types.h"

// 0057E670  Em0310QteObstacle::thunk_vf48  size=5  [class]
void __fastcall Em0310QteObstacle::thunk_vf48(int param_1)

{
  int iVar1;
  float10 fVar2;
  undefined1 auStack_10c [12];
  undefined1 auStack_100 [256];
  
  BehaviorDebrisActor::vf48();
  if ((((*(byte *)(param_1 + 0x4c0) & 1) != 0) && (*(int *)(param_1 + 0x884) != 0)) &&
     ((*(char *)(param_1 + 0x470) == '\0' ||
      (((*(byte *)(param_1 + 0x472) & 0x80) == 0 || (*(char *)(param_1 + 0x471) == '\0')))))) {
    FUN_0092bcd0();
    if (*(char *)(*(int *)(param_1 + 0x884) + 0x20) != '\0') {
      iVar1 = FUN_0092b680();
      if (iVar1 != 0) {
        fVar2 = (float10)FUN_00928de0();
        if ((fVar2 < (float10)(float)(undefined *)0x0 != (fVar2 == (float10)(float)(undefined *)0x0)
            ) && (*(int *)(param_1 + 0x898) != 0)) {
          if (*(int *)(param_1 + 0x89c) != 0) {
            FUN_00e5ca30(*(int *)(param_1 + 0x89c),0x40400000);
            *(undefined4 *)(param_1 + 0x89c) = 0;
          }
          FUN_009f8ea0(auStack_10c,10,*(undefined4 *)(param_1 + 0x4b0),0);
          FUN_00a90970(auStack_100,"%s_se_setobj_stop",auStack_10c);
          FUN_00e5e080(auStack_100,param_1 + 0x40,0,0xffffffff,0);
          *(undefined4 *)(param_1 + 0x898) = 0;
        }
      }
    }
  }
  return;
}

// 0057E680  Em0310QteObstacle::vf50  size=16  [class]
void Em0310QteObstacle::vf50(void)

{
  BehaviorBgBase::vf50();
  FUN_00a93170();
  return;
}

// 0057E690  Em0310QteObstacle::thunk_vf1C  size=5  [class]
void __fastcall Em0310QteObstacle::thunk_vf1C(int param_1)

{
  *(uint *)(param_1 + 0x4c0) = *(uint *)(param_1 + 0x4c0) | 1;
  return;
}

// 0057E6A0  Em0310QteObstacle::thunk_vf20  size=5  [class]
void __fastcall Em0310QteObstacle::thunk_vf20(int param_1)

{
  *(uint *)(param_1 + 0x4c0) = *(uint *)(param_1 + 0x4c0) & 0xfffffffe;
  return;
}

// 0058A6A0  Em0310QteObstacle::vf40  size=224  [class]
undefined4 __fastcall Em0310QteObstacle::vf40(int *param_1)

{
  int iVar1;
  
  iVar1 = BehaviorBgBase::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_009f9480(param_1[300]);
  if (iVar1 != 0) {
    iVar1 = FUN_00a92f90();
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x94) = *(uint *)(iVar1 + 0x94) | 2;
      FUN_00a9e290(&DAT_0163b5f4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      (**(code **)(*param_1 + 100))();
    }
  }
  if ((int *)param_1[0x1ec] != (int *)0x0) {
    iVar1 = (**(code **)(*(int *)param_1[0x1ec] + 0x1c))();
    if (iVar1 != 0) {
      FUN_008f2cd0(0);
      (**(code **)(*(int *)param_1[0x1ec] + 0x108))(0x1f);
      FUN_00a8f640();
      FUN_00a8f660(0,1,0);
    }
  }
  FUN_00586220();
  param_1[0x308] = -0x40800000;
  param_1[0x30b] = 0;
  param_1[0x30c] = 0;
  return 1;
}

// 0058A780  Em0310QteObstacle::vf44  size=73  [class]
void __fastcall Em0310QteObstacle::vf44(int param_1)

{
  FUN_00a9d8a0();
  BehaviorBgBase::vf44();
  if (*(int *)(param_1 + 0x67c) != 0) {
    *(undefined4 *)(param_1 + 0x684) = 0;
    if (*(int *)(param_1 + 0x688) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x67c),0);
      *(undefined4 *)(param_1 + 0x688) = 0;
    }
    *(undefined4 *)(param_1 + 0x67c) = 0;
    *(undefined4 *)(param_1 + 0x680) = 0;
  }
  return;
}

// 0058A7D0  Em0310QteObstacle::vf4C  size=489  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall Em0310QteObstacle::vf4C(int *param_1)

{
  float fVar1;
  int iVar2;
  
  if (((((char)param_1[0x11c] == '\0') || ((*(byte *)((int)param_1 + 0x472) & 0x80) == 0)) ||
      (*(char *)((int)param_1 + 0x471) == '\0')) &&
     ((iVar2 = FUN_009f9480(param_1[300]), iVar2 != 0 && ((*(byte *)(param_1 + 0x130) & 1) != 0))))
  {
    (**(code **)(*param_1 + 100))();
  }
  BehaviorBgBase::vf4C();
  iVar2 = FUN_00a8e520();
  if (iVar2 == 0) {
    if ((0.0 < (float)param_1[0x308]) && (param_1[0x2c2] == 0)) {
      fVar1 = (float)param_1[0x308] - _DAT_01be942c;
      param_1[0x308] = (int)fVar1;
      if (fVar1 < 0.0 != (fVar1 == 0.0)) {
        param_1[0x139] = 1;
        FUN_009fdde0();
      }
    }
    if (param_1[0x309] == 0) {
      if ((((*(byte *)(param_1 + 0x130) & 1) != 0) && (25.599998 < (float)param_1[0x11])) &&
         ((float)param_1[0x11] < 225.6)) {
        iVar2 = FUN_00a93580(0);
        if (iVar2 != 0) {
          FUN_00d7b890();
        }
        FUN_00a8f640();
        FUN_00a8f660(0,1,0);
        param_1[0x309] = 1;
      }
    }
    else if (((*(byte *)(param_1 + 0x130) & 1) == 0) || ((float)param_1[0x11] <= 25.599998)) {
      iVar2 = FUN_00a93580(0);
      if (iVar2 != 0) {
        FUN_00d7acc0();
      }
      FUN_00a8f640();
      param_1[0x309] = 0;
    }
    if ((*(byte *)(param_1 + 0x130) & 1) == 0) {
      if ((param_1[0x30b] != 0) && (param_1[0x30c] != 0)) {
        FUN_00e5ca30(param_1[0x30c],0x40400000);
        param_1[0x30c] = 0;
      }
    }
    else if (param_1[0x30b] == 0) {
      FUN_00586310();
    }
    param_1[0x30b] = param_1[0x130] & 1;
    if ((DAT_01bea060 & 0x20000000) == 0) {
      return;
    }
    if (param_1[0x30c] != 0) {
      FUN_00e5ca30(param_1[0x30c],0x40400000);
      param_1[0x30c] = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x0058a9b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))();
    return;
  }
  FUN_009fdde0();
  return;
}

// 0058A9C0  Em0310QteObstacle::vf1A4  size=59  [class]
void __thiscall Em0310QteObstacle::vf1A4(int *param_1,undefined4 param_2,byte param_3)

{
  if ((param_3 & 1) != 0) {
    FUN_00586380();
    (**(code **)(*param_1 + 0x20))();
    FUN_00aa92c0(1);
    param_1[0x308] = 0x43340000;
    param_1[0x139] = 1;
  }
  return;
}

// 00AA63D0  Em0310QteObstacle::Em0310QteObstacle  size=40  [class]
undefined4 * __fastcall Em0310QteObstacle::Em0310QteObstacle(undefined4 *param_1)

{
  BehaviorBgBase::BehaviorBgBase();
  *param_1 = vftable;
  cEspControler::cEspControler();
  FUN_004105d0();
  return param_1;
}

// 00AA6400  Em0310QteObstacle::vf04  size=6  [class]
undefined * Em0310QteObstacle::vf04(void)

{
  return &DAT_01b35150;
}

// 00AB7050  Em0310QteObstacle::vf00  size=43  [class]
undefined4 __thiscall Em0310QteObstacle::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

