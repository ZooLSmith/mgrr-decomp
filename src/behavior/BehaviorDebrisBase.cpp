// src/behavior/BehaviorDebrisBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005D8170..005E1870, 41 functions

#include "types.h"

// 005D8170  BehaviorDebrisBase::ExplosionSlot::vf10  size=1  [class]
void BehaviorDebrisBase::ExplosionSlot::vf10(void)

{
  return;
}

// 005D8180  BehaviorDebrisBase::ExplosionSlot::vf14  size=1  [class]
void BehaviorDebrisBase::ExplosionSlot::vf14(void)

{
  return;
}

// 005D81C0  BehaviorDebrisBase::DiscreateSlot::vf10  size=1  [class]
void BehaviorDebrisBase::DiscreateSlot::vf10(void)

{
  return;
}

// 005D81D0  BehaviorDebrisBase::DiscreateSlot::vf14  size=1  [class]
void BehaviorDebrisBase::DiscreateSlot::vf14(void)

{
  return;
}

// 005D8210  thunk_FUN_009fdde0  size=5  [between]
void __fastcall thunk_FUN_009fdde0(int *param_1)

{
  if (param_1[0x13c] != 0) {
    FUN_00a805f0();
    return;
  }
  if ((*(byte *)(param_1 + 0x132) & 2) == 0) {
    *(byte *)(param_1 + 0x132) = *(byte *)(param_1 + 0x132) | 2;
    (**(code **)(*param_1 + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x009fde16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xc))();
    return;
  }
  return;
}

// 005D8280  BehaviorDebrisBase::vf114  size=35  [class]
void __thiscall BehaviorDebrisBase::vf114(int *param_1,int param_2)

{
  Bh0064::vf114(param_2);
  (**(code **)(*param_1 + 0x118))(*(undefined4 *)(param_2 + 4));
  return;
}

// 005D82F0  BehaviorDebrisBase::vf44  size=192  [class]
void __fastcall BehaviorDebrisBase::vf44(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x93c) != 0) {
    FUN_00d8b4a0(param_1);
  }
  if (*(int *)(param_1 + 0x904) != 0) {
    FUN_00d8a1d0(0x1e,*(int *)(param_1 + 0x904));
    if (*(undefined4 **)(param_1 + 0x904) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x904))(1);
      *(undefined4 *)(param_1 + 0x904) = 0;
    }
  }
  if (*(int *)(param_1 + 0x908) != 0) {
    FUN_00d8a1d0(0x1f,*(int *)(param_1 + 0x908));
    if (*(undefined4 **)(param_1 + 0x908) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x908))(1);
      *(undefined4 *)(param_1 + 0x908) = 0;
    }
  }
  FUN_00900ca0();
  FUN_00a8c820();
  FUN_00a944d0();
  iVar1 = *(int *)(param_1 + 0x7b4);
  if (iVar1 != 0) {
    lib::Array<RigidBodyList::ConnectMap>::Array<RigidBodyList::ConnectMap>();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x7b4) = 0;
  }
  Behavior::vf44();
  return;
}

// 005D83B0  BehaviorDebrisBase::vf50  size=217  [class]
void __fastcall BehaviorDebrisBase::vf50(int *param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  Behavior::vf50();
  iVar1 = FUN_00a92f90();
  if ((iVar1 != 0) && (param_1[0x222] != 0)) {
    (**(code **)(*param_1 + 100))();
    FUN_00a93170();
    FUN_00a92f90();
    iVar1 = FUN_00e26e90();
    if (iVar1 == 0) {
      fVar2 = (float10)-1.0;
    }
    else {
      fVar2 = (float10)FUN_00e36970(0);
    }
    FUN_00a92f90();
    iVar1 = FUN_00e26e90();
    if (iVar1 == 0) {
      fVar3 = (float10)-1.0;
    }
    else {
      fVar3 = (float10)FUN_00e36a50(0);
    }
    if (fVar3 < (float10)(float)fVar2 != (fVar3 == (float10)(float)fVar2)) {
      if (param_1[0x1ed] != 0) {
        FUN_0091c6c0(4);
      }
      param_1[0x222] = 0;
      param_1[0x223] = 1;
    }
    if ((param_1[0x1ed] != 0) && (param_1[0x220] != 0)) {
      FUN_0091ea00(param_1);
    }
  }
  return;
}

// 005D8490  BehaviorDebrisBase::vfC8  size=18  [class]
void __fastcall BehaviorDebrisBase::vfC8(int param_1)

{
  if (*(int *)(param_1 + 0x7b4) != 0) {
    FUN_0091acf0();
    return;
  }
  return;
}

// 005D84B0  BehaviorDebrisBase::vf20  size=24  [class]
void __fastcall BehaviorDebrisBase::vf20(int *param_1)

{
  Bh0064::vf20();
  (**(code **)(*param_1 + 200))(0);
  return;
}

// 005D84D0  BehaviorDebrisBase::vf1C  size=24  [class]
void __fastcall BehaviorDebrisBase::vf1C(int *param_1)

{
  Bh0064::vf1C();
  (**(code **)(*param_1 + 200))(1);
  return;
}

// 005D84F0  FUN_005d84f0  size=64  [callgraph]
void __thiscall FUN_005d84f0(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x88c) == 0) {
    *(undefined4 *)(param_1 + 0x88c) = 1;
  }
  if (*(int *)(param_1 + 0x894) == 0) {
    *(undefined4 *)(param_1 + 0x894) = 1;
  }
  *(undefined4 *)(param_1 + 0x89c) = 1;
  *(undefined4 *)(param_1 + 0x924) = param_2;
  *(undefined4 *)(param_1 + 0x928) = 0;
  return;
}

// 005D8530  FUN_005d8530  size=70  [callgraph]
void __thiscall FUN_005d8530(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x88c) == 0) {
    *(undefined4 *)(param_1 + 0x88c) = 1;
  }
  if (*(int *)(param_1 + 0x894) == 0) {
    *(undefined4 *)(param_1 + 0x894) = 1;
  }
  *(undefined4 *)(param_1 + 0x89c) = 1;
  *(undefined4 *)(param_1 + 0x924) = param_2;
  *(undefined4 *)(param_1 + 0x928) = 0;
  *(undefined4 *)(param_1 + 0x938) = 1;
  return;
}

// 005D9170  FUN_005d9170  size=45  [callgraph]
void __fastcall FUN_005d9170(int param_1)

{
  if (*(int *)(param_1 + 0x150) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x138));
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*(int *)(param_1 + 0x150) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x138));
  }
  return;
}

// 005D9270  BehaviorDebrisBase::ExplosionSlot::vf00  size=31  [class]
undefined4 * __thiscall BehaviorDebrisBase::ExplosionSlot::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Slot::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 005D9290  BehaviorDebrisBase::DiscreateSlot::vf18  size=83  [class]
void __thiscall BehaviorDebrisBase::DiscreateSlot::vf18(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined *puVar2;
  
  if ((param_2 == 0x1f) && (param_3 != (undefined4 *)0x0)) {
    puVar2 = &DAT_01be9be0;
    (**(code **)*param_3)(&DAT_01be9be0);
    iVar1 = FUN_00dd6d80(puVar2);
    if (iVar1 != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x588);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(iVar1 + 0xb0);
      }
      if (param_3[2] == iVar1) {
        FUN_009fdde0();
      }
    }
  }
  return;
}

// 005D92F0  BehaviorDebrisBase::DiscreateSlot::vf00  size=31  [class]
undefined4 * __thiscall BehaviorDebrisBase::DiscreateSlot::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Slot::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 005D9340  BehaviorDebrisBase::DebrisPhantomListener::vf04  size=3  [class]
void BehaviorDebrisBase::DebrisPhantomListener::vf04(void)

{
  return;
}

// 005D93C0  BehaviorDebrisBase::DebrisPhantomListener::vf08  size=47  [class]
undefined4 * __thiscall
BehaviorDebrisBase::DebrisPhantomListener::vf08(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkpPhantomOverlapListener::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 005D93F0  FUN_005d93f0  size=154  [between]
bool __fastcall FUN_005d93f0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_70 [12];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_34;
  
  FUN_009dbcf0();
  FUN_009d18a0(*(undefined4 *)(param_1 + 0x4bc));
  if (*(int *)(param_1 + 0x7b4) == 0) {
    puVar1 = (undefined4 *)(param_1 + 0x40);
  }
  else {
    puVar1 = (undefined4 *)FUN_00916d50(local_70);
  }
  local_60 = *puVar1;
  local_5c = puVar1[1];
  local_58 = puVar1[2];
  local_54 = puVar1[3];
  local_40 = *(undefined4 *)(param_1 + 0x4f0);
  local_34 = 0x400;
  local_50 = 0;
  local_4c = 0x3f800000;
  local_48 = 0;
  local_44 = local_64;
  iVar2 = FUN_009ec6b0(&local_60);
  return iVar2 == 0;
}

// 005D9490  FUN_005d9490  size=194  [between]
void __fastcall FUN_005d9490(int *param_1)

{
  int *piVar1;
  undefined1 local_70 [12];
  undefined4 local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_34;
  
  param_1[0x23f] = 1;
  FUN_009dbcf0();
  FUN_009d18a0(param_1[0x12f]);
  if (param_1[0x1ed] == 0) {
    piVar1 = param_1 + 0x10;
  }
  else {
    piVar1 = (int *)FUN_00916d50(local_70);
  }
  local_60 = *piVar1;
  local_5c = piVar1[1];
  local_58 = piVar1[2];
  local_54 = piVar1[3];
  local_40 = param_1[0x13c];
  local_34 = 0x400;
  local_50 = 0;
  local_4c = 0x3f800000;
  local_48 = 0;
  local_44 = local_64;
  EffectAttrSystem::RequestCall(&local_60);
  (**(code **)(*param_1 + 0x20))();
  if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
    param_1[0xd9] = param_1[0xd9] & 0xffbfffff;
    *(undefined4 *)param_1[0xdc] = 1;
  }
  return;
}

// 005D9560  FUN_005d9560  size=115  [between]
void __fastcall FUN_005d9560(int param_1)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0x880) != 0) && (*(int *)(param_1 + 0x940) != 0)) &&
     (*(int *)(param_1 + 0x7b4) != 0)) {
    *(undefined4 *)(param_1 + 0x944) = 1;
    FUN_005d8530(0x3f800000);
    FUN_0091c6c0(0x1f);
    FUN_00917560();
    iVar1 = *(int *)(param_1 + 0x7b4);
    if (iVar1 != 0) {
      lib::Array<RigidBodyList::ConnectMap>::Array<RigidBodyList::ConnectMap>();
      FUN_00dd4920(iVar1);
      *(undefined4 *)(param_1 + 0x7b4) = 0;
    }
  }
  return;
}

// 005D95E0  FUN_005d95e0  size=512  [between]
float * __thiscall FUN_005d95e0(int param_1,float *param_2)

{
  int iVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float local_14;
  
  iVar1 = *(int *)(param_1 + 0x330);
  *param_2 = 0.0;
  param_2[1] = 0.0;
  iVar4 = 0;
  param_2[2] = 0.0;
  if (0 < *(int *)(iVar1 + 0xc4)) {
    pfVar3 = (float *)(*(int *)(iVar1 + 0xc0) + 0x18);
    do {
      if (((pfVar3[-2] != 0.0) || (pfVar3[-1] != 0.0)) || (*pfVar3 != 0.0)) {
        *param_2 = pfVar3[-2] + *param_2;
        param_2[1] = pfVar3[-1] + param_2[1];
        param_2[2] = param_2[2] + *pfVar3;
        param_2[3] = pfVar3[1] + param_2[3];
      }
      iVar4 = iVar4 + 1;
      pfVar3 = pfVar3 + 0x1c;
    } while (iVar4 < *(int *)(iVar1 + 0xc4));
  }
  if (*(int *)(iVar1 + 0xc4) != 0) {
    fVar2 = (float)*(int *)(iVar1 + 0xc4);
    *param_2 = *param_2 / fVar2;
    param_2[1] = param_2[1] / fVar2;
    param_2[2] = param_2[2] / fVar2;
    param_2[3] = param_2[3] / fVar2;
  }
  if (((*param_2 == 0.0) && (param_2[1] == 0.0)) && (param_2[2] == 0.0)) {
    *param_2 = 0.0;
    param_2[1] = 1.0;
    param_2[2] = 0.0;
    param_2[3] = local_14;
    return param_2;
  }
  fVar2 = param_2[1] * param_2[1] + *param_2 * *param_2 + param_2[2] * param_2[2];
  if (fVar2 < 0.0 != (fVar2 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    *param_2 = 0.0;
    param_2[1] = 1.0;
    param_2[2] = 0.0;
    return param_2;
  }
  FUN_00ddf460(param_2,param_2);
  return param_2;
}

// 005D97E0  BehaviorDebrisBase::vf1BC  size=348  [class]
void __thiscall BehaviorDebrisBase::vf1BC(int *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  bool bVar6;
  undefined *puVar7;
  int local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  Bh0064::vf1BC(param_2);
  bVar6 = true;
  if (param_2 != (int *)0x0) {
    puVar7 = &DAT_01be9ca0;
    (**(code **)(*param_2 + 4))(&DAT_01be9ca0);
    iVar3 = FUN_00dd6d80(puVar7);
    if ((iVar3 != 0) && (iVar3 = FUN_00acdea0(), iVar3 != 0)) {
      iVar3 = *(int *)(iVar3 + 0x4b4);
      bVar6 = iVar3 != 0x20220;
      if (iVar3 == 0x20140) {
        uStack_20 = 0x3f8ccccd;
      }
      else if (iVar3 == 0x20150) {
        uStack_20 = 0x3f99999a;
      }
      else if (iVar3 == 0x20160) {
        uStack_20 = 0x3f8ccccd;
      }
      else if (iVar3 == 0x20170) {
        uStack_20 = 0x3fa66666;
      }
      else {
        uStack_20 = 0x3f800000;
      }
      uStack_1c = uStack_20;
      uStack_18 = uStack_20;
      (**(code **)(*param_1 + 0x90))(&uStack_20);
    }
  }
  iVar3 = param_2[0x12d];
  if ((((iVar3 != 0x2022f) && (iVar3 != 0x30370)) && (iVar3 != 0x20112)) &&
     ((bVar6 && (local_24 = 0, 0 < (short)param_1[0xc9])))) {
    iVar3 = 0;
    do {
      iVar2 = param_1[200];
      iVar4 = *(int *)(*(int *)(iVar2 + 0x60 + iVar3) + 0x40);
      if ((iVar4 != 0) && (iVar4 = FUN_00fdbbd0(iVar4,&DAT_0163d9a8), iVar4 != 0)) {
        puVar1 = (uint *)(iVar2 + 0x38 + iVar3);
        *puVar1 = *puVar1 | 1;
      }
      local_24 = local_24 + 1;
      iVar3 = iVar3 + 0x70;
    } while (local_24 < (short)param_1[0xc9]);
  }
  param_1[0x210] = param_2[0x210];
  param_1[0x211] = param_2[0x211];
  puVar5 = (undefined4 *)FUN_009f8b60();
  FUN_009f8ae0(*puVar5);
  return;
}

// 005D9950  BehaviorDebrisBase::vf48  size=213  [class]
void __fastcall BehaviorDebrisBase::vf48(int param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  BehaviorDebrisActor::vf48();
  if ((*(int *)(param_1 + 0x7b4) != 0) && (*(int *)(param_1 + 0x898) != 0)) {
    iVar1 = Hw::cHeapVariableBase::vf18();
    if (iVar1 < 0x100000) {
      FUN_00dd5650(&DAT_016438f8,iVar1,0x100000);
      *(undefined4 *)(param_1 + 0x944) = 1;
      fVar2 = (float10)FUN_00e049b0();
      fVar3 = (float10)1;
      if (fVar2 < fVar3) {
        fVar3 = (float10)0.4;
      }
      FUN_005d8530((float)fVar3);
      iVar1 = *(int *)(param_1 + 0x7b4);
      if (iVar1 != 0) {
        lib::Array<RigidBodyList::ConnectMap>::Array<RigidBodyList::ConnectMap>();
        FUN_00dd4920(iVar1);
        *(undefined4 *)(param_1 + 0x7b4) = 0;
        *(undefined4 *)(param_1 + 0x898) = 0;
        return;
      }
    }
    else {
      FUN_00912890(DAT_01885d20);
      *(undefined4 *)(param_1 + 0x880) = 1;
    }
    *(undefined4 *)(param_1 + 0x898) = 0;
  }
  return;
}

// 005D9A30  BehaviorDebrisBase::vf30  size=270  [class]
void __fastcall BehaviorDebrisBase::vf30(int param_1)

{
  int iVar1;
  
  Bh0064::vf30();
  iVar1 = *(int *)(param_1 + 0x588);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x98) != 0) {
      *(undefined4 *)(iVar1 + 0x9c) = *(undefined4 *)(iVar1 + 0x9c);
      *(undefined4 *)(iVar1 + 0x98) = 1;
    }
    if (*(int *)(param_1 + 0x8e4) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x588) + 0x90) = 1;
      *(undefined4 *)(*(int *)(param_1 + 0x588) + 0x94) = *(undefined4 *)(param_1 + 0x8e0);
    }
    iVar1 = *(int *)(param_1 + 0x588);
    *(undefined4 *)(iVar1 + 0xc4) = *(undefined4 *)(param_1 + 0x694);
    *(undefined4 *)(iVar1 + 200) = *(undefined4 *)(param_1 + 0x698);
    *(undefined4 *)(iVar1 + 0xcc) = *(undefined4 *)(param_1 + 0x69c);
    *(undefined4 *)(*(int *)(param_1 + 0x588) + 0xd0) = *(undefined4 *)(param_1 + 0x6a0);
    iVar1 = *(int *)(param_1 + 0x588);
    *(undefined4 *)(iVar1 + 0xd4) = *(undefined4 *)(param_1 + 0x6a4);
    *(undefined4 *)(iVar1 + 0xd8) = *(undefined4 *)(param_1 + 0x6a8);
    *(undefined4 *)(iVar1 + 0xdc) = *(undefined4 *)(param_1 + 0x6ac);
    *(undefined1 *)(*(int *)(param_1 + 0x588) + 0xe0) = *(undefined1 *)(param_1 + 0x6b0);
    iVar1 = *(int *)(param_1 + 0x588);
    if (*(int *)(iVar1 + 0x150) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x138));
    }
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    if (*(int *)(iVar1 + 0x150) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x138));
    }
  }
  return;
}

// 005D9B40  FUN_005d9b40  size=435  [between]
/* WARNING: Removing unreachable block (ram,0x005d9ce7) */
/* WARNING: Removing unreachable block (ram,0x005d9ce9) */
/* WARNING: Removing unreachable block (ram,0x005d9c7a) */
/* WARNING: Removing unreachable block (ram,0x005d9c80) */

float * __thiscall FUN_005d9b40(int param_1,float *param_2)

{
  short sVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  undefined1 local_50 [48];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 1.0;
  iVar4 = *(int *)(param_1 + 0x330);
  if (iVar4 != 0) {
    piVar3 = (int *)(iVar4 + 0xc4);
    iVar7 = 0;
    if (0 < *piVar3) {
      psVar8 = (short *)(*(int *)(iVar4 + 0xc0) + 0x68);
      do {
        sVar1 = *psVar8;
        iVar4 = param_1;
        if (-1 < sVar1) {
          iVar6 = *(int *)(param_1 + 0x360);
          iVar5 = param_1;
          if (iVar6 != 0) {
            iVar5 = iVar6;
          }
          if (sVar1 < *(short *)(iVar5 + 0x358)) {
            if (iVar6 == 0) {
              iVar6 = param_1;
            }
            iVar4 = (int)sVar1;
            if ((iVar4 < 0) || (*(short *)(iVar6 + 0x358) <= iVar4)) {
              iVar4 = 0;
            }
            else {
              iVar4 = iVar4 * 0xb0 + *(int *)(iVar6 + 0x350);
            }
          }
        }
        D3DXMatrixMultiply(local_50,psVar8 + -0x24,iVar4 + 0x10);
        iVar7 = iVar7 + 1;
        psVar8 = psVar8 + 0x38;
        *param_2 = *param_2 + fStack_20;
        param_2[1] = param_2[1] + fStack_1c;
        param_2[2] = fStack_18 + param_2[2];
        param_2[3] = fStack_14 + param_2[3];
      } while (iVar7 < *piVar3);
    }
    fVar2 = (float)*piVar3;
    *param_2 = *param_2 / fVar2;
    param_2[1] = param_2[1] / fVar2;
    param_2[2] = param_2[2] / fVar2;
    param_2[3] = param_2[3] / fVar2;
  }
  return param_2;
}

// 005D9D00  FUN_005d9d00  size=165  [between]
float10 FUN_005d9d00(void)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  undefined *puVar4;
  float fStack_28;
  undefined4 local_24 [8];
  
  local_24[0] = 0;
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0);
  if (iVar2 != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
    if (piVar1 != (int *)0x0) {
      puVar4 = &DAT_01be9db8;
      (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
      iVar2 = FUN_00dd6d80(puVar4);
      if (iVar2 != 0) {
        pfVar3 = (float *)FUN_005d9b40(local_24);
        if (5.0 < SQRT((*pfVar3 - (float)piVar1[0x10]) * (*pfVar3 - (float)piVar1[0x10]) +
                       (pfVar3[1] - (float)piVar1[0x11]) * (pfVar3[1] - (float)piVar1[0x11]) +
                       (pfVar3[2] - (float)piVar1[0x12]) * (pfVar3[2] - (float)piVar1[0x12]))) {
          return (float10)1;
        }
        return (float10)0;
      }
    }
  }
  return (float10)fStack_28;
}

// 005D9DB0  FUN_005d9db0  size=99  [between]
float10 __fastcall FUN_005d9db0(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  fVar2 = (float10)10.0;
  if (DAT_01b6efd4 != 0) {
    if (DAT_01b6efd4 == 1) {
      fVar2 = (float10)15.0;
    }
    else if (DAT_01b6efd4 == 2) {
      fVar2 = (float10)30.0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x4b4);
  if ((((iVar1 == 0xd0428) || (iVar1 == 0xd5035)) || (iVar1 == 0xd0438)) || (DAT_018b9174 == 0x170))
  {
    fVar2 = (float10)3.0;
  }
  return fVar2;
}

// 005D9E20  BehaviorDebrisBase::BehaviorDebrisBase_4  size=74  [class]
undefined4 * __fastcall BehaviorDebrisBase::BehaviorDebrisBase_4(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_009003e0();
  param_1[0x227] = 0;
  param_1[0x241] = 0;
  param_1[0x242] = 0;
  FUN_00a7c930();
  param_1[599] = 0;
  param_1[0x24f] = 0;
  return param_1;
}

// 005D9E70  BehaviorDebrisBase::vf04  size=6  [class]
undefined * BehaviorDebrisBase::vf04(void)

{
  return &DAT_01b35300;
}

// 005D9E80  BehaviorDebrisBase::vf00  size=30  [class]
undefined4 __thiscall BehaviorDebrisBase::vf00(undefined4 param_1,byte param_2)

{
  Behavior::Behavior_96();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 005DA7D0  BehaviorDebrisBase::BehaviorDebrisBase_3  size=91  [class]
undefined4 * __fastcall BehaviorDebrisBase::BehaviorDebrisBase_3(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_009003e0();
  param_1[0x227] = 0;
  param_1[0x241] = 0;
  param_1[0x242] = 0;
  FUN_00a7c930();
  param_1[599] = 0;
  param_1[0x24f] = 0;
  *param_1 = BehaviorDebrisObject::vftable;
  FUN_00904d60();
  return param_1;
}

// 005DBE70  BehaviorDebrisBase::BehaviorDebrisBase  size=80  [class]
undefined4 * __fastcall BehaviorDebrisBase::BehaviorDebrisBase(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_009003e0();
  param_1[0x227] = 0;
  param_1[0x241] = 0;
  param_1[0x242] = 0;
  FUN_00a7c930();
  param_1[599] = 0;
  param_1[0x24f] = 0;
  *param_1 = BehaviorDebrisBullet::vftable;
  return param_1;
}

// 005DBF20  BehaviorDebrisBase::BehaviorDebrisBase_2  size=80  [class]
undefined4 * __fastcall BehaviorDebrisBase::BehaviorDebrisBase_2(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_009003e0();
  param_1[0x227] = 0;
  param_1[0x241] = 0;
  param_1[0x242] = 0;
  FUN_00a7c930();
  param_1[599] = 0;
  param_1[0x24f] = 0;
  *param_1 = BehaviorDebrisExplode::vftable;
  return param_1;
}

// 005DC230  BehaviorDebrisBase::ExplosionSlot::vf18  size=83  [class]
void __thiscall BehaviorDebrisBase::ExplosionSlot::vf18(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined *puVar2;
  
  if ((param_2 == 0x1e) && (param_3 != (undefined4 *)0x0)) {
    puVar2 = &DAT_01be9be0;
    (**(code **)*param_3)(&DAT_01be9be0);
    iVar1 = FUN_00dd6d80(puVar2);
    if (iVar1 != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x588);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(iVar1 + 0xb0);
      }
      if (param_3[2] == iVar1) {
        FUN_005d9490();
      }
    }
  }
  return;
}

// 005DC290  BehaviorDebrisBase::DebrisPhantomListener::vf00  size=168  [class]
void BehaviorDebrisBase::DebrisPhantomListener::vf00(int param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 4);
  uVar1 = *(uint *)(iVar5 + 0x1c);
  if (*(char *)(iVar5 + 0x18) != '\x01') {
    *(undefined4 *)(param_1 + 8) = 1;
    return;
  }
  iVar5 = *(char *)(iVar5 + 0x10) + iVar5;
  if (iVar5 == 0) {
    cVar3 = '\0';
  }
  else {
    uVar2 = *(uint *)(iVar5 + 0xc);
    if (uVar2 == 0) {
      cVar3 = '\0';
    }
    else {
      cVar3 = (char)*(undefined4 *)((-(uint)(uVar2 != 0) & uVar2) + 8);
    }
  }
  if (-1 < cVar3) {
    iVar4 = FUN_008f7780(iVar5);
    if ((iVar4 != 0) && (*(int *)(iVar4 + 0x4f0) != 0)) {
      iVar4 = FUN_00a7c800();
      if (*(int *)(iVar4 + 0x4b4) != 0x700000) goto LAB_005dc32e;
    }
    if (((iVar5 != 0) && (uVar2 = *(uint *)(iVar5 + 0xc), uVar2 != 0)) &&
       (*(int *)((-(uint)(uVar2 != 0) & uVar2) + 0x38) == 5)) {
      *(uint *)(param_1 + 8) = (uint)((uVar1 & 0x1f) != 1);
      return;
    }
  }
LAB_005dc32e:
  *(undefined4 *)(param_1 + 8) = 1;
  return;
}

// 005DC340  FUN_005dc340  size=166  [callgraph]
void __fastcall FUN_005dc340(int param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  if (*(int *)(param_1 + 0x950) == 0) {
    iVar1 = FUN_0093db90(*(undefined4 *)(param_1 + 0x83c));
    if ((((iVar1 == 0) && (*(int *)(param_1 + 0x928) == 0)) && (*(int *)(param_1 + 0x89c) == 0)) &&
       (*(int *)(param_1 + 0x880) != 0)) {
      fVar2 = (float10)FUN_005d9d00();
      fVar3 = (float10)FUN_005d8650();
      fVar4 = (float10)FUN_005d8680();
      fVar4 = fVar4 + (float10)(float)(fVar3 + (float10)(float)fVar2);
      goto LAB_005dc3a7;
    }
  }
  fVar4 = (float10)-1.0;
LAB_005dc3a7:
  *(float *)(param_1 + 0x954) = (float)fVar4;
  fVar4 = (float10)FUN_00dde300(0,0x3f800000);
  *(float *)(param_1 + 0x958) = (float)((fVar4 + (float10)1.0) * (float10)5.0);
  *(undefined4 *)(param_1 + 0x524) = *(undefined4 *)(param_1 + 0x954);
  return;
}

// 005DDA00  BehaviorDebrisBase::vf4C  size=1034  [class]
void __fastcall BehaviorDebrisBase::vf4C(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float local_8;
  float local_4;
  
  Behavior::vf4C();
  if ((0.0 < *(float *)(param_1 + 0x958) != (*(float *)(param_1 + 0x958) == 0.0)) &&
     (fVar3 = *(float *)(param_1 + 0x958) - 1.0, *(float *)(param_1 + 0x958) = fVar3, fVar3 < 0.0))
  {
    FUN_005dc340();
  }
  fVar10 = (float10)1;
  iVar7 = 0;
  if ((*(int *)(param_1 + 0x948) != 0) &&
     (fVar9 = (float10)*(float *)(param_1 + 0x94c) - fVar10,
     *(float *)(param_1 + 0x94c) = (float)fVar9, fVar9 < (float10)0)) {
    *(undefined4 *)(param_1 + 0x948) = 0;
  }
  if (DAT_01b372f8 != 0) {
    FUN_009fdde0();
    return;
  }
  if (*(int *)(param_1 + 0x928) != 0) {
    return;
  }
  if ((*(int *)(param_1 + 0x890) == 0) || (*(int *)(param_1 + 0x92c) != 0)) {
    if (*(int *)(param_1 + 0x88c) == 0) goto LAB_005ddd03;
    fVar10 = (float10)FUN_00a93060();
    *(float *)(param_1 + 0x884) = (float)(fVar10 + (float10)*(float *)(param_1 + 0x884));
    if (*(int *)(param_1 + 0x920) == 0) {
      iVar8 = FUN_009f9400(*(undefined4 *)(param_1 + 0x4b4));
      if (iVar8 == 0) {
        iVar8 = FUN_009f93b0(*(undefined4 *)(param_1 + 0x4b4));
        if (iVar8 == 0) {
          fVar10 = (float10)FUN_005d9db0();
        }
        else {
          iVar8 = *(int *)(param_1 + 0x4b4);
          fVar10 = (float10)3.0;
          if (iVar8 == 0x20030) {
            fVar10 = (float10)180.0;
          }
          else if (iVar8 == 0x20180) {
            fVar10 = (float10)180.0;
          }
          else if (iVar8 == 0x20190) {
            fVar10 = (float10)180.0;
          }
          else if (iVar8 == 0x2022f) {
            fVar10 = (float10)10.0;
          }
        }
      }
      else {
        fVar10 = (float10)3.0;
      }
    }
    else {
      fVar10 = (float10)6.0;
    }
    local_8 = (float)fVar10;
    if (*(int *)(param_1 + 0x89c) != 0) {
      local_8 = *(float *)(param_1 + 0x924);
      fVar10 = (float10)local_8;
    }
    fVar10 = fVar10 - (float10)2.0;
    if (fVar10 < (float10)*(float *)(param_1 + 0x884) !=
        (fVar10 == (float10)*(float *)(param_1 + 0x884))) {
      fVar9 = (float10)1;
      fVar10 = fVar9 - ((float10)*(float *)(param_1 + 0x884) - fVar10) * (float10)0.5;
      local_4 = (float)fVar10;
      if (fVar10 < fVar9) {
        if ((fVar10 <= (float10)0.8) && (*(int *)(param_1 + 0x7b4) != 0)) {
          FUN_0091adf0(1);
          FUN_0091adf0(2);
          fVar10 = (float10)local_4;
        }
      }
      else {
        local_4 = (float)fVar9;
        fVar10 = fVar9;
      }
      iVar5 = 0;
      iVar8 = 0;
      *(undefined4 *)(param_1 + 0x944) = 1;
      if (0 < *(short *)(param_1 + 0x324)) {
        do {
          *(float *)(iVar5 + 0x1c + *(int *)(param_1 + 800)) = (float)fVar10;
          iVar8 = iVar8 + 1;
          iVar5 = iVar5 + 0x70;
        } while (iVar8 < *(short *)(param_1 + 0x324));
      }
      if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
        *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xffbfffff;
        **(undefined4 **)(param_1 + 0x370) = 1;
      }
      iVar5 = 0;
      iVar8 = FUN_00a94360();
      if (0 < iVar8) {
        do {
          FUN_00a94380(iVar5);
          iVar8 = FUN_00a81330();
          if ((iVar8 != 0) && (iVar8 = FUN_00a7c800(), iVar8 != 0)) {
            iVar6 = 0;
            iVar4 = 0;
            if (0 < *(short *)(iVar8 + 0x324)) {
              do {
                *(float *)(iVar6 + 0x1c + *(int *)(iVar8 + 800)) = local_4;
                iVar4 = iVar4 + 1;
                iVar6 = iVar6 + 0x70;
              } while (iVar4 < *(short *)(iVar8 + 0x324));
            }
          }
          iVar5 = iVar5 + 1;
          iVar8 = FUN_00a94360();
        } while (iVar5 < iVar8);
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x938) == 0) {
      fVar10 = (float10)FUN_00a93060();
    }
    fVar10 = fVar10 + (float10)*(float *)(param_1 + 0x884);
    *(float *)(param_1 + 0x884) = (float)fVar10;
    if (((float10)*(float *)(param_1 + 0x900) <= fVar10) && (*(int *)(param_1 + 0x8fc) == 0)) {
      FUN_005d9490();
    }
    local_8 = *(float *)(param_1 + 0x900) + 7.0;
  }
  if (local_8 < *(float *)(param_1 + 0x884) != (local_8 == *(float *)(param_1 + 0x884))) {
    FUN_009fdde0();
  }
LAB_005ddd03:
  if ((((*(int *)(param_1 + 0x894) != 0) && (*(char *)(param_1 + 0x470) != '\0')) &&
      ((*(byte *)(param_1 + 0x472) & 0x80) != 0)) && (*(char *)(param_1 + 0x471) != '\0')) {
    FUN_009fdde0();
  }
  if (*(int *)(param_1 + 0x8e4) != 0) {
    fVar3 = *(float *)(param_1 + 0x8e0) - 0.011111111;
    *(float *)(param_1 + 0x8e0) = fVar3;
    if (fVar3 <= 0.0) {
      iVar8 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        do {
          iVar5 = *(int *)(param_1 + 800);
          iVar4 = *(int *)(*(int *)(iVar5 + 0x60 + iVar7) + 0x40);
          if ((iVar4 != 0) && (iVar4 = FUN_00fdbbd0(iVar4,"_DEB0"), iVar4 != 0)) {
            puVar1 = (uint *)(iVar5 + 0x38 + iVar7);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar8 = iVar8 + 1;
          iVar7 = iVar7 + 0x70;
        } while (iVar8 < *(short *)(param_1 + 0x324));
      }
      *(undefined4 *)(param_1 + 0x8e0) = 0;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x8e0);
    iVar7 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar8 = 0;
      do {
        iVar5 = *(int *)(param_1 + 800);
        iVar4 = *(int *)(*(int *)(iVar5 + 0x60 + iVar8) + 0x40);
        if ((iVar4 != 0) && (iVar4 = FUN_00fdbbd0(iVar4,"_DEB0"), iVar4 != 0)) {
          *(undefined4 *)(iVar5 + 0x1c + iVar8) = uVar2;
        }
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + 0x70;
      } while (iVar7 < *(short *)(param_1 + 0x324));
    }
  }
  return;
}

// 005DF3A0  BehaviorDebrisBase::vf40  size=2039  [class]
undefined4 __fastcall BehaviorDebrisBase::vf40(int param_1)

{
  uint *puVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  LPVOID pvVar10;
  float10 fVar11;
  float10 fVar12;
  undefined4 uVar13;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_20 [28];
  
  iVar4 = Behavior::startup();
  if (iVar4 != 0) {
    *(uint *)(param_1 + 0x4c0) = *(uint *)(param_1 + 0x4c0) | 0x40;
    iVar4 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
    if (iVar4 != 0) {
      local_2c = 0;
      local_28 = 0;
      local_30 = 1;
      iVar4 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
              StaticArray<Behavior::EffectIntegrationContainer,32>(&local_30);
      if (iVar4 != 0) {
        iVar4 = FUN_00a92f90();
        if (iVar4 != 0) {
          uVar13 = 1;
          FUN_00a92f90(1);
          FUN_00e26e50(uVar13);
        }
        uVar13 = 3;
        FUN_00a92fb0(3);
        FUN_00e08640(uVar13);
        *(undefined4 *)(param_1 + 0x8e0) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x884) = 0;
        *(undefined4 *)(param_1 + 0x8f8) = 1;
        *(undefined4 *)(param_1 + 0x8d0) = 0;
        *(undefined4 *)(param_1 + 0x8f4) = 0;
        *(undefined4 *)(param_1 + 0x88c) = 1;
        *(undefined4 *)(param_1 + 0x894) = 0;
        *(undefined4 *)(param_1 + 0x8e8) = 0;
        *(undefined4 *)(param_1 + 0x8fc) = 0;
        *(undefined4 *)(param_1 + 0x690) = 0;
        *(undefined4 *)(param_1 + 0x880) = 0;
        *(undefined4 *)(param_1 + 0x888) = 0;
        *(undefined4 *)(param_1 + 0x8e4) = 0;
        *(undefined4 *)(param_1 + 0x898) = 0;
        FUN_00910ac0(0);
        *(undefined4 *)(param_1 + 0x8a0) = 0;
        *(undefined4 *)(param_1 + 0x91c) = 0;
        *(undefined4 *)(param_1 + 0x8ec) = 0;
        *(undefined4 *)(param_1 + 0x8d8) = 0;
        *(undefined4 *)(param_1 + 0x924) = 0x40a00000;
        *(undefined4 *)(param_1 + 0x8d4) = 0;
        *(undefined4 *)(param_1 + 0x8dc) = 0;
        *(undefined4 *)(param_1 + 0x8f0) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x958) = 0;
        *(undefined4 *)(param_1 + 0x918) = 0;
        *(undefined4 *)(param_1 + 0x950) = 0;
        *(undefined4 *)(param_1 + 0x94c) = 0x41f00000;
        *(undefined4 *)(param_1 + 0x944) = 0;
        *(undefined4 *)(param_1 + 0x948) = 1;
        *(undefined4 *)(param_1 + 0x904) = 0;
        *(undefined4 *)(param_1 + 0x890) = 0;
        iVar4 = FUN_005d93f0();
        if (iVar4 != 0) {
          puVar5 = (undefined4 *)FUN_00dd3500(8,&DAT_01b7c168);
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            *puVar5 = ExplosionSlot::vftable;
            puVar5[1] = param_1;
          }
          *(undefined4 **)(param_1 + 0x904) = puVar5;
          if (puVar5 == (undefined4 *)0x0) {
            return 0;
          }
          FUN_00d89ec0(0x1e,puVar5);
          sVar3 = FUN_00dde2d0(0,10);
          local_34 = (int)sVar3;
          *(undefined4 *)(param_1 + 0x88c) = 0;
          *(undefined4 *)(param_1 + 0x890) = 1;
          *(float *)(param_1 + 0x900) = (float)local_34 * 0.1 + 3.0;
        }
        *(undefined4 *)(param_1 + 0x928) = 0;
        *(undefined4 *)(param_1 + 0x92c) = 0;
        puVar5 = (undefined4 *)FUN_00dd3500(8,&DAT_01b7c168);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          *puVar5 = DiscreateSlot::vftable;
          puVar5[1] = param_1;
        }
        *(undefined4 **)(param_1 + 0x908) = puVar5;
        if (puVar5 != (undefined4 *)0x0) {
          FUN_00d89ec0(0x1f,puVar5);
          *(undefined4 *)(param_1 + 0x7b4) = 0;
          *(undefined4 *)(param_1 + 0x940) = 0;
          iVar4 = FUN_009f8d30();
          if (iVar4 == 0) {
            iVar4 = *(int *)(param_1 + 0x588);
            if ((iVar4 != 0) && (*(int *)(iVar4 + 0x90) != 0)) {
              *(undefined4 *)(param_1 + 0x8e4) = 1;
              *(undefined4 *)(param_1 + 0x8e0) = *(undefined4 *)(iVar4 + 0x94);
            }
            if (*(int *)(param_1 + 0x8e4) == 0) {
              *(undefined4 *)(param_1 + 0x8e4) = 1;
              *(undefined4 *)(param_1 + 0x8e0) = 0x3f800000;
            }
            if ((*(float *)(param_1 + 0x8e0) <= 0.0) &&
               (local_34 = 0, 0 < *(short *)(param_1 + 0x324))) {
              iVar4 = 0;
              do {
                iVar2 = *(int *)(param_1 + 800);
                iVar6 = *(int *)(*(int *)(iVar2 + 0x60 + iVar4) + 0x40);
                if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,"_DEB0"), iVar6 != 0)) {
                  puVar1 = (uint *)(iVar2 + 0x38 + iVar4);
                  *puVar1 = *puVar1 & 0xfffffffe;
                }
                local_34 = local_34 + 1;
                iVar4 = iVar4 + 0x70;
              } while (local_34 < *(short *)(param_1 + 0x324));
            }
            local_38 = *(int *)(param_1 + 0x8e0);
            local_34 = 0;
            if (0 < *(short *)(param_1 + 0x324)) {
              iVar4 = 0;
              do {
                iVar2 = *(int *)(param_1 + 800);
                iVar6 = *(int *)(*(int *)(iVar2 + 0x60 + iVar4) + 0x40);
                if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,"_DEB0"), iVar6 != 0)) {
                  *(int *)(iVar2 + 0x1c + iVar4) = local_38;
                }
                local_34 = local_34 + 1;
                iVar4 = iVar4 + 0x70;
              } while (local_34 < *(short *)(param_1 + 0x324));
            }
            *(undefined4 *)(param_1 + 0x89c) = 1;
            *(undefined4 *)(param_1 + 0x938) = 0;
LAB_005dfb44:
            iVar4 = *(int *)(param_1 + 0x588);
            if ((((iVar4 != 0) && (*(int *)(iVar4 + 0xa8) != 0)) && (*(int *)(iVar4 + 0xac) != 0))
               && (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0)) {
              *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xffbfffff;
              **(undefined4 **)(param_1 + 0x370) = 1;
            }
            FUN_00d8b460(param_1);
            *(undefined4 *)(param_1 + 0x93c) = 1;
            return 1;
          }
          iVar4 = FUN_00dd3500(0x3080,&DAT_01b7bd48);
          if (iVar4 == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = lib::StaticArray<RigidBodyList::ConnectMap,256>::
                    StaticArray<RigidBodyList::ConnectMap,256>();
          }
          *(int *)(param_1 + 0x7b4) = iVar4;
          if ((iVar4 != 0) && (iVar4 = FUN_009fdd80(iVar4), iVar4 != 0)) {
            iVar4 = FUN_00923ff0(param_1);
            *(int *)(param_1 + 0x940) = iVar4;
            if (iVar4 != 0) {
              fVar11 = (float10)FUN_00916de0();
              if ((float10)0 == fVar11) {
                iVar4 = *(int *)(param_1 + 0x7b4);
                if (iVar4 != 0) {
                  lib::Array<RigidBodyList::ConnectMap>::Array<RigidBodyList::ConnectMap>();
                  FUN_00dd4920(iVar4);
                  *(undefined4 *)(param_1 + 0x7b4) = 0;
                }
                FUN_00a805f0();
                return 1;
              }
              FUN_0091c3e0(6,1);
              FUN_0091adf0(8);
              *(undefined4 *)(param_1 + 0x460) = 0x3f333333;
              *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x100000;
              FUN_0091adf0(0x20);
              FUN_0091afb0(0x80);
              FUN_0091adf0(0x200000);
              FUN_0091c130(0);
              iVar4 = *(int *)(param_1 + 0x588);
              if ((iVar4 == 0) || (*(int *)(iVar4 + 0x2c) == 0)) {
                uVar13 = cXmlBinary::cXmlBinary_41();
              }
              else {
                uVar13 = *(undefined4 *)(iVar4 + 0x30);
              }
              FUN_0091b870(uVar13);
              FUN_0091afb0(0x8000);
              iVar4 = *(int *)(param_1 + 0x588);
              if ((iVar4 != 0) && (*(int *)(iVar4 + 0x34) != 0)) {
                FUN_0091c760(*(undefined4 *)(iVar4 + 0x38));
              }
              iVar4 = *(int *)(param_1 + 0x588);
              if ((iVar4 != 0) && (*(int *)(iVar4 + 0x98) != 0)) {
                FUN_0091c550(0x21,*(undefined4 *)(iVar4 + 0x9c));
                FUN_0091c550(0x22,*(undefined4 *)(*(int *)(param_1 + 0x588) + 0x9c));
              }
              iVar4 = *(int *)(param_1 + 0x588);
              if ((iVar4 != 0) && (*(int *)(iVar4 + 0x90) != 0)) {
                *(undefined4 *)(param_1 + 0x8e4) = 1;
                local_34 = *(int *)(iVar4 + 0x94);
                *(int *)(param_1 + 0x8e0) = local_34;
                local_38 = 0;
                if (0 < *(short *)(param_1 + 0x324)) {
                  iVar4 = 0;
                  do {
                    iVar2 = *(int *)(param_1 + 800);
                    iVar6 = *(int *)(*(int *)(iVar2 + 0x60 + iVar4) + 0x40);
                    if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,"_DEB0"), iVar6 != 0)) {
                      *(int *)(iVar2 + 0x1c + iVar4) = local_34;
                    }
                    local_38 = local_38 + 1;
                    iVar4 = iVar4 + 0x70;
                  } while (local_38 < *(short *)(param_1 + 0x324));
                }
                if (*(float *)(param_1 + 0x8e0) <= 0.0) {
                  iVar4 = 0;
                  local_38 = 0;
                  if (0 < *(short *)(param_1 + 0x324)) {
                    do {
                      iVar2 = *(int *)(param_1 + 800);
                      iVar6 = *(int *)(*(int *)(iVar2 + 0x60 + iVar4) + 0x40);
                      if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,"_DEB0"), iVar6 != 0)) {
                        puVar1 = (uint *)(iVar2 + 0x38 + iVar4);
                        *puVar1 = *puVar1 & 0xfffffffe;
                      }
                      local_38 = local_38 + 1;
                      iVar4 = iVar4 + 0x70;
                    } while (local_38 < *(short *)(param_1 + 0x324));
                  }
                }
              }
              iVar4 = *(int *)(param_1 + 0x588);
              if (iVar4 != 0) {
                *(undefined4 *)(param_1 + 0x694) = *(undefined4 *)(iVar4 + 0xc4);
                *(undefined4 *)(param_1 + 0x698) = *(undefined4 *)(iVar4 + 200);
                *(undefined4 *)(param_1 + 0x69c) = *(undefined4 *)(iVar4 + 0xcc);
                iVar4 = *(int *)(param_1 + 0x588);
                *(undefined4 *)(param_1 + 0x6a0) = *(undefined4 *)(iVar4 + 0xd0);
                *(undefined4 *)(param_1 + 0x6a4) = *(undefined4 *)(iVar4 + 0xd4);
                *(undefined4 *)(param_1 + 0x6a8) = *(undefined4 *)(iVar4 + 0xd8);
                *(undefined4 *)(param_1 + 0x6ac) = *(undefined4 *)(iVar4 + 0xdc);
                *(undefined1 *)(param_1 + 0x6b0) = *(undefined1 *)(*(int *)(param_1 + 0x588) + 0xe0)
                ;
              }
              if (*(int *)(param_1 + 0x8f8) != 0) {
                FUN_004066f0();
                FUN_00912660(&local_38,0);
                uVar7 = FUN_0091a9d0();
                uVar8 = FUN_0091a9d0();
                FUN_00911f60(local_20,&local_30);
                local_34 = FUN_00915420();
                piVar9 = (int *)FUN_00900480();
                uVar13 = (**(code **)(*piVar9 + 0x14))
                                   (local_34,local_20,&local_30,uVar7 & 0x1f,uVar8 >> 0x10,0);
                lib::AllocatedArray<hkpPhantomListener*>::AllocatedArray<hkpPhantomListener*>
                          (uVar13);
                pvVar10 = TlsGetValue(DAT_01f8fc4c);
                puVar5 = (undefined4 *)(**(code **)(**(int **)((int)pvVar10 + 0x2c) + 4))(4);
                if (puVar5 == (undefined4 *)0x0) {
                  puVar5 = (undefined4 *)0x0;
                }
                else {
                  *puVar5 = DebrisPhantomListener::vftable;
                }
                FUN_00900940(puVar5);
                FUN_009009c0("fixedRootCheck");
                FUN_00900bd0();
                FUN_01006000();
                FUN_00406760();
              }
              goto LAB_005dfb44;
            }
            *(undefined4 *)(param_1 + 0x944) = 1;
            fVar12 = (float10)FUN_00e049b0();
            fVar11 = (float10)1;
            if (fVar12 < fVar11) {
              fVar11 = (float10)0.4;
            }
            FUN_005d8530((float)fVar11);
            iVar4 = *(int *)(param_1 + 0x7b4);
            if (iVar4 != 0) {
              lib::Array<RigidBodyList::ConnectMap>::Array<RigidBodyList::ConnectMap>();
              FUN_00dd4920(iVar4);
              *(undefined4 *)(param_1 + 0x7b4) = 0;
            }
          }
        }
      }
    }
  }
  return 0;
}

// 005E1870  BehaviorDebrisBase::vf54  size=1055  [class]
void __fastcall BehaviorDebrisBase::vf54(int *param_1)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float local_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  undefined **local_1f0;
  uint local_1ec;
  int *local_1e8;
  int local_1e4;
  undefined1 *local_1e0;
  int local_1dc [3];
  undefined1 local_1d0 [380];
  undefined1 auStack_54 [80];
  
  Behavior::vf54();
  if (param_1[0x1ed] == 0) {
LAB_005e18b2:
    switchD_0080dbae::default();
  }
  else {
    iVar2 = param_1[0x220];
    if ((param_1[0x234] == 0) || (param_1[0x23d] != 0)) {
      FUN_0091e980(param_1);
    }
    if (iVar2 != 0) goto LAB_005e18b2;
  }
  if (param_1[0x1ed] == 0) {
    return;
  }
  if (param_1[0x220] != 0) {
    return;
  }
  if (param_1[0x21c] == 0) {
    return;
  }
  FUN_004066f0();
  local_1ec = 0x7f7fffee;
  local_1e0 = local_1d0;
  local_1f0 = hkpAllCdPointCollector::vftable;
  local_1dc[1] = 0x80000008;
  local_1dc[0] = 0;
  FUN_00900350(&local_1f0);
  local_224 = (float)(uint)(local_1dc[0] != 0);
  hkpCdPointCollector::hkpCdPointCollector_4();
  if (local_224 == 0.0) {
    local_1e8 = local_1dc;
    local_1f0 = hkpAllCdBodyPairCollector::vftable;
    local_1e0 = &DAT_80000010;
    local_1e4 = 0;
    local_1ec = local_1ec & 0xffffff00;
    FUN_00900320(&local_1f0);
    local_224 = (float)(uint)(local_1e4 != 0);
    hkpCdBodyPairCollector::hkpCdBodyPairCollector();
  }
  if (param_1[0x12d] == 0xe00a7) {
    local_224 = 0.0;
LAB_005e1992:
    FUN_009174c0();
    FUN_00a8b6e0();
    (**(code **)(*param_1 + 0x118))(0);
  }
  else {
    if (((local_224 == 0.0) || ((int *)param_1[0x162] == (int *)0x0)) ||
       (*(int *)param_1[0x162] == 0)) goto LAB_005e1992;
    FUN_00917560();
    if (param_1[0x239] == 0) {
      param_1[0x239] = 1;
      param_1[0x238] = 0x3f800000;
    }
    if (param_1[0x162] != 0) {
      FUN_005d9170();
      iVar2 = param_1[0x162];
      if (1 < *(int *)(iVar2 + 8)) {
        param_1[0x225] = 1;
      }
      if (((*(int *)(param_1[0xcc] + 0xcc) < 0xb) && (*(int *)(iVar2 + 0x34) != 0)) &&
         (FUN_009f8ae0(*(undefined4 *)(iVar2 + 0x38)), param_1[0x1ed] != 0)) {
        FUN_0091c760(*(undefined4 *)(param_1[0x162] + 0x38));
      }
    }
    iVar2 = FUN_009f9460(param_1[0x12d]);
    if ((((iVar2 != 0) || (iVar2 = FUN_009f94a0(param_1[0x12d]), iVar2 != 0)) ||
        (iVar2 = FUN_009f9480(param_1[0x12d]), iVar2 != 0)) && (*(int *)(param_1[0xcc] + 0xc4) != 0)
       ) {
      FUN_005d95e0(&fStack_210);
      fStack_220 = fStack_210 * -0.01;
      fStack_21c = fStack_20c * -0.01;
      fStack_218 = fStack_208 * -0.01;
      fStack_214 = fStack_204 * -0.01;
      (**(code **)(*param_1 + 0x70))(&fStack_220);
      local_224 = 0.0;
      fStack_220 = 1.0;
      fStack_21c = 0.0;
      FUN_00ddcfe0(auStack_54,&local_224,0x3fc90fdb);
      D3DXVec3TransformNormal(&fStack_204,&fStack_214,auStack_54);
      fStack_230 = fStack_210 * 0.02;
      fStack_22c = fStack_20c * 0.02;
      fStack_228 = fStack_208 * 0.02;
      local_224 = fStack_204 * 0.02;
      (**(code **)(*param_1 + 0x70))(&fStack_230);
      switchD_0080dbae::default();
      if (param_1[0x1ed] != 0) {
        FUN_0091ea00(param_1);
      }
    }
    if (param_1[0x248] == 0) goto LAB_005e19bc;
  }
  param_1[0x223] = 1;
LAB_005e19bc:
  FUN_00900ca0();
  if (param_1[0x1ed] != 0) {
    param_1[0x226] = 1;
    if (param_1[0x211] == 0) {
      FUN_0091adf0(2);
    }
    if (param_1[0x210] == 0) {
      FUN_0091adf0(1);
    }
  }
  if (((*(int *)(param_1[0xcc] + 0xc4) != 0) && (local_224 == 0.0)) && (param_1[0x12d] != 0x20141))
  {
    fVar3 = (float10)FUN_00916de0();
    fVar3 = fVar3 * (float10)-1.0;
    fStack_210 = (float)fVar3;
    fStack_20c = (float)((float10)0.2 * fVar3);
    fStack_208 = (float)fVar3;
    pfVar1 = (float *)FUN_005d95e0(&fStack_220);
    fStack_200 = fStack_210 * *pfVar1;
    fStack_1fc = pfVar1[1] * fStack_20c;
    fStack_1f8 = pfVar1[2] * fStack_208;
    fStack_1f4 = pfVar1[3] * fStack_204;
    fVar3 = (float10)FUN_00a93060();
    if ((float10)0 != fVar3) {
      FUN_0091ab40(&fStack_200);
    }
  }
  FUN_00406760();
  return;
}

