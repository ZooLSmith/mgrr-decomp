// src/lib/AllocatedArray.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00402420..00D8A480, 179 functions

#include "mgrr.h"

// 00402420  lib::AllocatedArray<BattleRegionManagerImplement::Unit>::vf00  size=30  [class]
undefined4 __thiscall
lib::AllocatedArray<BattleRegionManagerImplement::Unit>::vf00(undefined4 param_1,byte param_2)

{
  Array<BattleRegionManagerImplement::Unit>::Array<BattleRegionManagerImplement::Unit>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00402440  lib::AllocatedArray<BattleRegionManagerImplement::Unit>::AllocatedArray<BattleRegionManagerImplement::Unit>  size=95  [class]
undefined4 * __thiscall
lib::AllocatedArray<BattleRegionManagerImplement::Unit>::
AllocatedArray<BattleRegionManagerImplement::Unit>(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *param_1 = BattleRegionManagerImplement::vftable;
  param_1[1] = 0;
  cEspControler::cEspControler();
  uVar1 = param_2;
  puVar2 = (undefined4 *)FUN_00dd3500(0x18,param_2);
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = vftable;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar3 = puVar2;
  }
  param_2 = uVar1;
  FUN_00402270(0x20,&param_2);
  param_1[1] = puVar3;
  return param_1;
}

// 006152A0  FUN_006152a0  size=254  [callgraph]
undefined4 __thiscall FUN_006152a0(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  LONG LVar4;
  int *local_8;
  int *local_4;
  
  FUN_00615230();
  local_8 = (int *)0x0;
  local_4 = (int *)0x0;
  cVar2 = lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>::CoreT<sys::AllocatorByHeap>
                    (*param_3);
  if (cVar2 != '\0') {
    if (local_8 != (int *)0x0) {
      iVar3 = (**(code **)(*local_8 + 4))(param_2 * 0xc);
      if (iVar3 != 0) {
        FUN_00401f90(&local_8);
        piVar1 = local_4;
        if (*(int *)(param_1 + 4) != 0) {
          *(undefined4 *)(param_1 + 8) = 0;
        }
        *(int *)(param_1 + 4) = iVar3;
        *(uint *)(param_1 + 0xc) = (uint)(param_2 * 0xc) / 0xc;
        if (local_4 != (int *)0x0) {
          LVar4 = InterlockedDecrement(local_4 + 1);
          if (LVar4 == 0) {
            (**(code **)(*piVar1 + 4))();
            LVar4 = InterlockedDecrement(piVar1 + 2);
            if (LVar4 == 0) {
              (**(code **)(*piVar1 + 8))();
            }
          }
        }
        return 1;
      }
    }
  }
  piVar1 = local_4;
  if (local_4 != (int *)0x0) {
    LVar4 = InterlockedDecrement(local_4 + 1);
    if (LVar4 == 0) {
      (**(code **)(*piVar1 + 4))();
      LVar4 = InterlockedDecrement(piVar1 + 2);
      if (LVar4 == 0) {
        (**(code **)(*piVar1 + 8))();
      }
    }
  }
  return 0;
}

// 006153A0  lib::AllocatedArray<Em0130::RollerMove::sMoveCommand>::AllocatedArray<Em0130::RollerMove::sMoveCommand>  size=184  [class]
undefined4 __fastcall
lib::AllocatedArray<Em0130::RollerMove::sMoveCommand>::
AllocatedArray<Em0130::RollerMove::sMoveCommand>(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *local_4;
  
  local_4 = (undefined4 *)0x0;
  puVar2 = (undefined4 *)FUN_00dd3500(0x18,&DAT_01b7bd48);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = vftable;
    puVar2[4] = 0;
    puVar2[5] = 0;
    local_4 = &DAT_01b7bd48;
    cVar1 = FUN_006152a0(0x10,&local_4);
    if (cVar1 != '\0') {
      *param_1 = puVar2;
      param_1[10] = 0x3e75c290;
      param_1[4] = 0;
      param_1[0xe] = 0x3ef5c290;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[0xf] = 0xbbc49ba7;
      param_1[0xc] = 0x3bc49ba7;
      param_1[0xd] = 0x3c1d4952;
      param_1[0xb] = 0x3e99999a;
      param_1[0x17] = 0x3d75c28f;
      return 1;
    }
  }
  FUN_00dd5650(&DAT_016460b4);
  return 0;
}

// 00616010  lib::AllocatedArray<Em0130::RollerMove::sMoveCommand>::vf00  size=30  [class]
undefined4 __thiscall
lib::AllocatedArray<Em0130::RollerMove::sMoveCommand>::vf00(undefined4 param_1,byte param_2)

{
  Array<Em0130::RollerMove::sMoveCommand>::Array<Em0130::RollerMove::sMoveCommand>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008D9D30  lib::AllocatedArray<AnimationMap::Unit>::vf00  size=30  [class]
undefined4 __thiscall lib::AllocatedArray<AnimationMap::Unit>::vf00(undefined4 param_1,byte param_2)

{
  Array<AnimationMap::Unit>::Array<AnimationMap::Unit>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008D9D50  lib::AllocatedArray<AnimationMapResource*>::vf00  size=30  [class]
undefined4 __thiscall
lib::AllocatedArray<AnimationMapResource*>::vf00(undefined4 param_1,byte param_2)

{
  Array<AnimationMapResource*>::Array<AnimationMapResource*>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008D9D70  FUN_008d9d70  size=28  [between]
void __fastcall FUN_008d9d70(int *param_1)

{
  if (*param_1 != 0) {
    FUN_008d98a0(*param_1);
    *param_1 = 0;
  }
  return;
}

// 008D9D90  lib::AllocatedArray<AnimationMapResource*>::AllocatedArray<AnimationMapResource*>  size=102  [class]
undefined4 * __thiscall
lib::AllocatedArray<AnimationMapResource*>::AllocatedArray<AnimationMapResource*>
          (undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  param_1[1] = param_2;
  *param_1 = AnimationMapManagerImplement::vftable;
  param_1[8] = 0;
  puVar1 = (undefined4 *)FUN_00dd3500(0x18,param_1[1]);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = vftable;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar2 = puVar1;
  }
  param_2 = param_1[1];
  FUN_008d9af0(0x20,&param_2);
  param_1[10] = puVar2;
  FUN_00dd7240();
  return param_1;
}

// 008DA3D0  FUN_008da3d0  size=112  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_008da3d0(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  
  if ((_DAT_01b35c0c & 1) == 0) {
    _DAT_01b35c0c = _DAT_01b35c0c | 1;
    DAT_01b35c08 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  iVar1 = DAT_01b35c08;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_2,DAT_01b35c08);
  if (cVar2 == '\0') {
    return 0;
  }
  uVar3 = FUN_008da100(param_1);
  (**(code **)(*param_1 + 0x14))(param_2,iVar1);
  return uVar3;
}

// 008DA440  lib::AllocatedArray<AnimationMap::Unit>::AllocatedArray<AnimationMap::Unit>  size=329  [class]
undefined4 __thiscall
lib::AllocatedArray<AnimationMap::Unit>::AllocatedArray<AnimationMap::Unit>
          (undefined4 *param_1,int *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *unaff_EBP;
  int iVar3;
  undefined4 uStack_44;
  undefined4 *local_40;
  undefined1 uStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int iStack_4;
  
  local_40 = param_1;
  cVar1 = (**(code **)*param_2)();
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*param_2 + 0x10))("countOf",7);
    if (cVar1 != '\0') {
      (**(code **)(*param_2 + 0x2c))(&iStack_4);
      (**(code **)(*param_2 + 0x14))("countOf",7);
    }
    if (iStack_4 != 0) {
      puVar2 = (undefined4 *)FUN_00dd3500(0x18,&DAT_01b7bd48);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = vftable;
        puVar2[4] = 0;
        puVar2[5] = 0;
      }
      FUN_008d99e0(iStack_4,&stack0xffffffb4);
      *param_1 = puVar2;
      if (puVar2[1] != 0) {
        puVar2[2] = 0;
      }
      iVar3 = 0;
      if (0 < iStack_4) {
        do {
          uStack_30 = 0x40a00000;
          uStack_2c = 0xbf800000;
          uStack_28 = 0xbf800000;
          uStack_44 = 0;
          uStack_24 = 0xbf800000;
          uStack_34 = 0;
          uStack_20 = 1;
          uStack_1c = 1;
          uStack_18 = 0;
          uStack_14 = 0;
          uStack_10 = 0;
          uStack_c = 0xffffffff;
          local_40 = (undefined4 *)((uint)local_40 & 0xffffff00);
          uStack_3c = 0;
          FUN_008da3d0(param_2,&DAT_0164a428,&uStack_44);
          (**(code **)(*(int *)*unaff_EBP + 8))(&uStack_44);
          iVar3 = iVar3 + 1;
        } while (iVar3 < iStack_4);
      }
    }
  }
  return 1;
}

// 008DA5C0  FUN_008da5c0  size=112  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_008da5c0(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  
  if ((_DAT_01b35bfc & 1) == 0) {
    _DAT_01b35bfc = _DAT_01b35bfc | 1;
    DAT_01b35bf8 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  iVar1 = DAT_01b35bf8;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_2,DAT_01b35bf8);
  if (cVar2 == '\0') {
    return 0;
  }
  uVar3 = lib::AllocatedArray<AnimationMap::Unit>::AllocatedArray<AnimationMap::Unit>(param_1);
  (**(code **)(*param_1 + 0x14))(param_2,iVar1);
  return uVar3;
}

// 008DC230  lib::AllocatedArray<EntityHandle>::vf00  size=30  [class]
undefined4 __thiscall lib::AllocatedArray<EntityHandle>::vf00(undefined4 param_1,byte param_2)

{
  Array<EntityHandle>::Array<EntityHandle>_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008DC920  lib::AllocatedArray<KogekkoWallContents::Unit>::vf04  size=4  [class]
undefined4 __fastcall lib::AllocatedArray<KogekkoWallContents::Unit>::vf04(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// 008DF640  lib::AllocatedArray<ContentsBase*>::AllocatedArray<ContentsBase*>  size=108  [class]
undefined4 * __thiscall
lib::AllocatedArray<ContentsBase*>::AllocatedArray<ContentsBase*>
          (undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *param_1 = ContentsManagerImplement::vftable;
  param_1[1] = param_2;
  param_1[8] = 0;
  param_1[10] = 0;
  FUN_00dd7240();
  puVar1 = (undefined4 *)FUN_00dd3500(0x18,param_1[1]);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = vftable;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar2 = puVar1;
  }
  param_2 = param_1[1];
  FUN_008df370(0x80,&param_2);
  param_1[0xb] = puVar2;
  return param_1;
}

// 008DFA50  lib::AllocatedArray<TelegraphNetContents::PostObject>::vf00  size=30  [class]
undefined4 __thiscall
lib::AllocatedArray<TelegraphNetContents::PostObject>::vf00(undefined4 param_1,byte param_2)

{
  Array<TelegraphNetContents::PostObject>::Array<TelegraphNetContents::PostObject>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008DFA70  lib::AllocatedArray<KogekkoWallContents::Unit>::vf00  size=30  [class]
undefined4 __thiscall
lib::AllocatedArray<KogekkoWallContents::Unit>::vf00(undefined4 param_1,byte param_2)

{
  Array<KogekkoWallContents::Unit>::Array<KogekkoWallContents::Unit>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008DFA90  lib::AllocatedArray<ContentsBase*>::vf00  size=30  [class]
undefined4 __thiscall lib::AllocatedArray<ContentsBase*>::vf00(undefined4 param_1,byte param_2)

{
  Array<ContentsBase*>::Array<ContentsBase*>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008DFAF0  FUN_008dfaf0  size=62  [callgraph]
bool FUN_008dfaf0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00dd3500(0x30,param_1);
  if (iVar1 != 0) {
    DAT_01b35d60 = lib::AllocatedArray<ContentsBase*>::AllocatedArray<ContentsBase*>(param_1);
    return DAT_01b35d60 != 0;
  }
  DAT_01b35d60 = 0;
  return false;
}

// 008E05E0  FUN_008e05e0  size=244  [callgraph]
undefined4 __thiscall FUN_008e05e0(int param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  LONG LVar4;
  int *local_8;
  int *local_4;
  
  FUN_008e0570();
  local_8 = (int *)0x0;
  local_4 = (int *)0x0;
  cVar2 = lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>::CoreT<sys::AllocatorByHeap>
                    (*param_3);
  if (cVar2 != '\0') {
    if (local_8 != (int *)0x0) {
      iVar3 = (**(code **)(*local_8 + 4))(param_2 * 4);
      if (iVar3 != 0) {
        FUN_00401f90(&local_8);
        piVar1 = local_4;
        if (*(int *)(param_1 + 4) != 0) {
          *(undefined4 *)(param_1 + 8) = 0;
        }
        *(uint *)(param_1 + 0xc) = param_2 & 0x3fffffff;
        *(int *)(param_1 + 4) = iVar3;
        if (local_4 != (int *)0x0) {
          LVar4 = InterlockedDecrement(local_4 + 1);
          if (LVar4 == 0) {
            (**(code **)(*piVar1 + 4))();
            LVar4 = InterlockedDecrement(piVar1 + 2);
            if (LVar4 == 0) {
              (**(code **)(*piVar1 + 8))();
            }
          }
        }
        return 1;
      }
    }
  }
  piVar1 = local_4;
  if (local_4 != (int *)0x0) {
    LVar4 = InterlockedDecrement(local_4 + 1);
    if (LVar4 == 0) {
      (**(code **)(*piVar1 + 4))();
      LVar4 = InterlockedDecrement(piVar1 + 2);
      if (LVar4 == 0) {
        (**(code **)(*piVar1 + 8))();
      }
    }
  }
  return 0;
}

// 008E06E0  lib::AllocatedArray<Wind*>::AllocatedArray<Wind*>  size=92  [class]
undefined4 * __fastcall lib::AllocatedArray<Wind*>::AllocatedArray<Wind*>(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *local_4;
  
  *param_1 = WindManagerImplement::vftable;
  param_1[1] = 0;
  local_4 = param_1;
  puVar1 = (undefined4 *)FUN_00dd3500(0x18,DAT_01b35d94);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = vftable;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar2 = puVar1;
  }
  local_4 = DAT_01b35d94;
  FUN_008e05e0(0x10,&local_4);
  param_1[1] = puVar2;
  return param_1;
}

// 008E0820  lib::AllocatedArray<Wind*>::vf00  size=30  [class]
undefined4 __thiscall lib::AllocatedArray<Wind*>::vf00(undefined4 param_1,byte param_2)

{
  Array<Wind*>::Array<Wind*>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008E0880  FUN_008e0880  size=58  [callgraph]
undefined4 FUN_008e0880(undefined4 param_1)

{
  int iVar1;
  
  DAT_01b35d94 = param_1;
  iVar1 = FUN_00dd3500(8,param_1);
  if (iVar1 != 0) {
    DAT_01b35d98 = lib::AllocatedArray<Wind*>::AllocatedArray<Wind*>();
    return 1;
  }
  DAT_01b35d98 = 0;
  return 1;
}

// 008EA190  lib::AllocatedArray<CharacterControl*>::AllocatedArray<CharacterControl*>  size=100  [class]
undefined4 * __fastcall
lib::AllocatedArray<CharacterControl*>::AllocatedArray<CharacterControl*>(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *local_4;
  
  *param_1 = CharacterControlManagerImplement::vftable;
  param_1[8] = 0;
  param_1[10] = 0;
  local_4 = param_1;
  puVar1 = (undefined4 *)FUN_00dd3500(0x18,&DAT_01b7c218);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = vftable;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar2 = puVar1;
  }
  local_4 = &DAT_01b7c218;
  FUN_008e9f50(0x20,&local_4);
  param_1[1] = puVar2;
  FUN_00dd7240();
  return param_1;
}

// 008EB8C0  lib::AllocatedArray<CharacterControl*>::vf00  size=30  [class]
undefined4 __thiscall lib::AllocatedArray<CharacterControl*>::vf00(undefined4 param_1,byte param_2)

{
  Array<CharacterControl*>::Array<CharacterControl*>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008EB980  FUN_008eb980  size=58  [callgraph]
bool FUN_008eb980(void)

{
  int iVar1;
  
  iVar1 = FUN_00dd3500(0x30,&DAT_01b7c218);
  if (iVar1 != 0) {
    DAT_01b35d9c = lib::AllocatedArray<CharacterControl*>::AllocatedArray<CharacterControl*>();
    return DAT_01b35d9c != 0;
  }
  DAT_01b35d9c = 0;
  return false;
}

// 008FA3A0  FUN_008fa3a0  size=244  [callgraph]
undefined4 __thiscall FUN_008fa3a0(int param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  LONG LVar4;
  int *local_8;
  int *local_4;
  
  FUN_008fa330();
  local_8 = (int *)0x0;
  local_4 = (int *)0x0;
  cVar2 = lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>::CoreT<sys::AllocatorByHeap>
                    (*param_3);
  if (cVar2 != '\0') {
    if (local_8 != (int *)0x0) {
      iVar3 = (**(code **)(*local_8 + 4))(param_2 * 4);
      if (iVar3 != 0) {
        FUN_00401f90(&local_8);
        piVar1 = local_4;
        if (*(int *)(param_1 + 4) != 0) {
          *(undefined4 *)(param_1 + 8) = 0;
        }
        *(uint *)(param_1 + 0xc) = param_2 & 0x3fffffff;
        *(int *)(param_1 + 4) = iVar3;
        if (local_4 != (int *)0x0) {
          LVar4 = InterlockedDecrement(local_4 + 1);
          if (LVar4 == 0) {
            (**(code **)(*piVar1 + 4))();
            LVar4 = InterlockedDecrement(piVar1 + 2);
            if (LVar4 == 0) {
              (**(code **)(*piVar1 + 8))();
            }
          }
        }
        return 1;
      }
    }
  }
  piVar1 = local_4;
  if (local_4 != (int *)0x0) {
    LVar4 = InterlockedDecrement(local_4 + 1);
    if (LVar4 == 0) {
      (**(code **)(*piVar1 + 4))();
      LVar4 = InterlockedDecrement(piVar1 + 2);
      if (LVar4 == 0) {
        (**(code **)(*piVar1 + 8))();
      }
    }
  }
  return 0;
}

// 008FA520  FUN_008fa520  size=749  [callgraph]
void FUN_008fa520(float *param_1,float *param_2,float param_3,int param_4,int *param_5,int *param_6)

{
  float fVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  float10 fVar8;
  float10 extraout_ST0;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined1 auStack_30 [8];
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  uVar21 = FUN_01007460(param_2,param_4 + 0x170);
  local_80 = *param_1 + local_80;
  fStack_7c = param_1[1] + fStack_7c;
  fStack_78 = param_1[2] + fStack_78;
  fStack_74 = param_1[3] + fStack_74;
  local_70 = (local_80 - *(float *)(param_4 + 0x140)) * param_3;
  fStack_6c = (fStack_7c - *(float *)(param_4 + 0x144)) * param_3;
  fStack_68 = (fStack_78 - *(float *)(param_4 + 0x148)) * param_3;
  fStack_64 = (fStack_74 - *(float *)(param_4 + 0x14c)) * param_3;
  auVar16._4_4_ = -(uint)(ABS(*(float *)(param_4 + 0x1b4) - fStack_6c) <= 0.001);
  auVar16._0_4_ = -(uint)(ABS(*(float *)(param_4 + 0x1b0) - local_70) <= 0.001);
  auVar16._8_4_ = -(uint)(ABS(*(float *)(param_4 + 0x1b8) - fStack_68) <= 0.001);
  auVar16._12_4_ = -(uint)(ABS(*(float *)(param_4 + 0x1bc) - fStack_64) <= 0.001);
  uVar6 = movmskps((int)((ulonglong)uVar21 >> 0x20),auVar16);
  local_20 = 0.001;
  fStack_1c = 0.001;
  fStack_18 = 0.001;
  fStack_14 = 0.001;
  piVar4 = (int *)uVar21;
  if (((byte)uVar6 & 7) != 7) {
    if (param_5 == (int *)0x0) {
      FUN_0118fe70();
      piVar4 = (int *)(**(code **)(*(int *)(param_4 + 0xe0) + 0x40))(&local_70);
    }
    else {
      pfVar2 = (float *)*param_5;
      *pfVar2 = local_70;
      pfVar2[1] = fStack_6c;
      pfVar2[2] = fStack_68;
      pfVar2[3] = fStack_64;
      *(int *)(*param_5 + 0xc) = param_4;
      *param_5 = *param_5 + 0x10;
      piVar4 = param_5;
    }
  }
  fVar9 = *param_2;
  fVar10 = param_2[1];
  fVar11 = param_2[2];
  fVar12 = param_2[3];
  fVar1 = *(float *)(param_4 + 0x160);
  fVar17 = *(float *)(param_4 + 0x164);
  fVar18 = *(float *)(param_4 + 0x168);
  fVar19 = *(float *)(param_4 + 0x16c);
  auVar15._0_4_ = fVar18 * fVar11 + fVar1 * fVar9;
  auVar15._4_4_ = fVar19 * fVar12 + fVar17 * fVar10;
  auVar15._8_4_ = fVar1 * fVar9 + fVar18 * fVar11;
  auVar15._12_4_ = fVar17 * fVar10 + fVar19 * fVar12;
  local_80 = ((fVar17 * fVar11 - fVar18 * fVar10) - fVar12 * fVar1) + fVar19 * fVar9;
  fStack_7c = ((fVar18 * fVar9 - fVar1 * fVar11) - fVar12 * fVar17) + fVar19 * fVar10;
  fStack_78 = ((fVar1 * fVar10 - fVar17 * fVar9) - fVar12 * fVar18) + fVar19 * fVar11;
  fStack_74 = auVar15._8_4_ + auVar15._12_4_;
  fVar9 = fStack_78 * fStack_78 + local_80 * local_80;
  fVar10 = fStack_74 * fStack_74 + fStack_7c * fStack_7c;
  fVar11 = local_80 * local_80 + fStack_78 * fStack_78;
  fVar12 = fStack_7c * fStack_7c + fStack_74 * fStack_74;
  auVar13._0_4_ = fVar10 + fVar9;
  auVar13._4_4_ = fVar9 + fVar10;
  auVar13._8_4_ = fVar12 + fVar11;
  auVar13._12_4_ = fVar11 + fVar12;
  auVar16 = rsqrtps(auVar15,auVar13);
  fVar9 = auVar16._0_4_;
  fVar10 = auVar16._4_4_;
  fVar11 = auVar16._8_4_;
  fVar12 = auVar16._12_4_;
  local_80 = local_80 * (3.0 - fVar9 * auVar13._0_4_ * fVar9) * fVar9 * 0.5;
  fStack_7c = fStack_7c * (3.0 - fVar10 * auVar13._4_4_ * fVar10) * fVar10 * 0.5;
  fStack_78 = fStack_78 * (3.0 - fVar11 * auVar13._8_4_ * fVar11) * fVar11 * 0.5;
  fStack_74 = fStack_74 * (3.0 - fVar12 * auVar13._12_4_ * fVar12) * fVar12 * 0.5;
  fStack_60 = local_80 * local_80;
  fStack_5c = fStack_7c * fStack_7c;
  fStack_58 = fStack_78 * fStack_78;
  fStack_54 = fStack_74 * fStack_74;
  fStack_50 = 3.0;
  fStack_4c = 3.0;
  fStack_48 = 3.0;
  fStack_44 = 3.0;
  fStack_40 = 0.5;
  fStack_3c = 0.5;
  fStack_38 = 0.5;
  fStack_34 = 0.5;
  if (1.4210855e-14 < fStack_5c + fStack_60 + fStack_58) {
    local_70 = ABS(fStack_74);
    fVar7 = (float10)local_70;
    fStack_6c = 0.0;
    fStack_68 = 0.0;
    fStack_64 = 0.0;
    auStack_30._4_4_ = fStack_74;
    auStack_30._0_4_ = fStack_74;
    fStack_28 = fStack_74;
    fStack_24 = fStack_74;
    if (NAN(local_70) || 1.0 < local_70 == (local_70 == 1.0)) {
      piVar4 = (int *)FUN_00fdc4e0();
      fVar8 = extraout_ST0;
      fVar9 = (float)auStack_30._0_4_;
      fVar10 = (float)auStack_30._4_4_;
      fVar11 = fStack_28;
      fVar12 = fStack_24;
    }
    else {
      fVar8 = (float10)0;
      piVar4 = (int *)CONCAT22((short)((uint)piVar4 >> 0x10),
                               (ushort)(fVar8 < fVar7) << 8 |
                               (ushort)(NAN(fVar8) || NAN(fVar7)) << 10 |
                               (ushort)(fVar8 == fVar7) << 0xe);
      fVar9 = fStack_74;
      fVar10 = fStack_74;
      fVar11 = fStack_74;
      fVar12 = fStack_74;
      if (fVar8 >= fVar7) {
        fVar8 = (float10)3.1415927;
      }
    }
    auVar14._0_4_ = fStack_5c + fStack_60 + fStack_58;
    auVar14._4_4_ = fStack_5c + fStack_60 + fStack_58;
    auVar14._8_4_ = fStack_5c + fStack_60 + fStack_58;
    auVar14._12_4_ = fStack_5c + fStack_60 + fStack_58;
    fVar1 = (float)((fVar8 + fVar8) * (float10)param_3);
    _auStack_30 = ZEXT812(0);
    fStack_24 = 0.0;
    auVar16 = rsqrtps(_auStack_30,auVar14);
    fVar17 = auVar16._0_4_;
    fVar18 = auVar16._4_4_;
    fVar19 = auVar16._8_4_;
    fVar20 = auVar16._12_4_;
    local_80 = (float)(-(uint)(fVar9 < 0.0) & 0x80000000 ^
                      (uint)((float)(~-(uint)(auVar14._0_4_ <= 0.0) &
                                    (uint)((fStack_50 - fVar17 * auVar14._0_4_ * fVar17) *
                                          fStack_40 * fVar17)) * local_80)) * fVar1;
    fStack_7c = (float)(-(uint)(fVar10 < 0.0) & 0x80000000 ^
                       (uint)((float)(~-(uint)(auVar14._4_4_ <= 0.0) &
                                     (uint)((fStack_4c - fVar18 * auVar14._4_4_ * fVar18) *
                                           fStack_3c * fVar18)) * fStack_7c)) * fVar1;
    fStack_78 = (float)(-(uint)(fVar11 < 0.0) & 0x80000000 ^
                       (uint)((float)(~-(uint)(auVar14._8_4_ <= 0.0) &
                                     (uint)((fStack_48 - fVar19 * auVar14._8_4_ * fVar19) *
                                           fStack_38 * fVar19)) * fStack_78)) * fVar1;
    fStack_74 = (float)(-(uint)(fVar12 < 0.0) & 0x80000000 ^
                       (uint)((float)(~-(uint)(auVar14._12_4_ <= 0.0) &
                                     (uint)((fStack_44 - fVar20 * auVar14._12_4_ * fVar20) *
                                           fStack_34 * fVar20)) * fStack_74)) * fVar1;
  }
  else {
    local_80 = 0.0;
    fStack_7c = 0.0;
    fStack_78 = 0.0;
    fStack_74 = 0.0;
  }
  auVar3._4_4_ = -(uint)(ABS(*(float *)(param_4 + 0x1c4) - fStack_7c) <= fStack_1c);
  auVar3._0_4_ = -(uint)(ABS(*(float *)(param_4 + 0x1c0) - local_80) <= local_20);
  auVar3._8_4_ = -(uint)(ABS(*(float *)(param_4 + 0x1c8) - fStack_78) <= fStack_18);
  auVar3._12_4_ = -(uint)(ABS(*(float *)(param_4 + 0x1cc) - fStack_74) <= fStack_14);
  iVar5 = movmskps(piVar4,auVar3);
  if (iVar5 != 0xf) {
    if (param_6 == (int *)0x0) {
      FUN_0118fe70();
      (**(code **)(*(int *)(param_4 + 0xe0) + 0x44))(&local_80);
      return;
    }
    pfVar2 = (float *)*param_6;
    *pfVar2 = local_80;
    pfVar2[1] = fStack_7c;
    pfVar2[2] = fStack_78;
    pfVar2[3] = fStack_74;
    *(int *)(*param_6 + 0xc) = param_4;
    *param_6 = *param_6 + 0x10;
  }
  return;
}

// 008FA810  FUN_008fa810  size=1062  [callgraph]
void FUN_008fa810(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 float param_6)

{
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  undefined1 in_XMM3 [16];
  undefined1 auVar10 [16];
  float fVar13;
  float local_120 [4];
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  undefined4 local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined4 local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  float afStack_b0 [12];
  undefined1 auStack_80 [16];
  float local_70;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined1 local_50 [76];
  
  if (*(char *)(param_1 + 0xe8) == '\x04') {
    local_104 = 1.0 / param_6;
    if (param_2 != 0) {
      param_3 = param_2;
    }
    local_c0 = *(undefined4 *)(param_3 + 0x40);
    local_bc = *(undefined4 *)(param_3 + 0x44);
    local_b8 = *(undefined4 *)(param_3 + 0x48);
    fVar5 = *(float *)(param_3 + 0x10);
    local_120[0] = SQRT(*(float *)(param_3 + 0x14) * *(float *)(param_3 + 0x14) + fVar5 * fVar5 +
                        *(float *)(param_3 + 0x18) * *(float *)(param_3 + 0x18));
    local_120[1] = SQRT(*(float *)(param_3 + 0x20) * *(float *)(param_3 + 0x20) +
                        *(float *)(param_3 + 0x24) * *(float *)(param_3 + 0x24) +
                        *(float *)(param_3 + 0x28) * *(float *)(param_3 + 0x28));
    fVar5 = SQRT(*(float *)(param_3 + 0x38) * *(float *)(param_3 + 0x38) +
                 *(float *)(param_3 + 0x34) * *(float *)(param_3 + 0x34) +
                 *(float *)(param_3 + 0x30) * *(float *)(param_3 + 0x30));
    local_110 = *(float *)(param_3 + 0x28) / fVar5;
    local_10c = *(float *)(param_3 + 0x38) / fVar5;
    fVar2 = (float10)FUN_00ddbaa0(-(*(float *)(param_3 + 0x18) / fVar5));
    local_108 = (float)fVar2;
    fVar3 = (float10)fpatan((float10)local_110,(float10)local_10c);
    local_70 = (float)fVar3;
    fVar4 = (float10)fpatan((float10)*(float *)(param_3 + 0x14) / (float10)local_120[1],
                            (float10)*(float *)(param_3 + 0x10) / (float10)local_120[0]);
    fVar3 = (float10)0;
    local_c8 = (float)fVar3;
    local_cc = (float)fVar3;
    local_d0 = (float)fVar3;
    local_d4 = (float)fVar3;
    local_dc = (float)fVar3;
    local_e0 = (float)fVar3;
    local_e4 = (float)fVar3;
    local_e8 = (float)fVar3;
    local_f0 = (float)fVar3;
    local_f4 = (float)fVar3;
    local_f8 = (float)fVar3;
    local_fc = (float)fVar3;
    local_c4 = 0x3f800000;
    local_d8 = 0x3f800000;
    local_ec = 0x3f800000;
    local_100 = 0x3f800000;
    if (fVar3 != fVar4) {
      D3DXMatrixRotationZ(local_50,(float)fVar4);
      D3DXMatrixMultiply(&local_108,&fStack_58,&local_108);
      fVar2 = (float10)local_108;
    }
    if ((float10)0 != fVar2) {
      D3DXMatrixRotationY(local_50,(float)fVar2);
      D3DXMatrixMultiply(&local_108,&fStack_58,&local_108);
    }
    if (local_70 != 0.0) {
      D3DXMatrixRotationX(local_50,local_70);
      D3DXMatrixMultiply(&local_108,&fStack_58,&local_108);
    }
    local_d0 = (float)local_c0;
    local_cc = (float)local_bc;
    local_c8 = (float)local_b8;
    FUN_01005190(&local_100);
    fVar5 = afStack_b0[5] + afStack_b0[0] + afStack_b0[10];
    if (fVar5 <= 0.0) {
      local_120[0] = 1.4013e-45;
      local_120[1] = 2.8026e-45;
      local_120[2] = 0.0;
      uVar1 = (uint)(afStack_b0[0] < afStack_b0[5]);
      if (afStack_b0[uVar1 * 5] < afStack_b0[10]) {
        uVar1 = 2;
      }
      fVar5 = local_120[uVar1];
      fVar6 = local_120[(int)fVar5];
      fVar7 = SQRT((afStack_b0[uVar1 * 5] -
                   (afStack_b0[(int)fVar6 * 5] + afStack_b0[(int)fVar5 * 5])) + 1.0);
      fVar8 = 0.5 / fVar7;
      local_120[uVar1] = fVar7 * 0.5;
      local_120[3] = (afStack_b0[(int)fVar6 + (int)fVar5 * 4] -
                     afStack_b0[(int)fVar5 + (int)fVar6 * 4]) * fVar8;
      local_120[(int)fVar5] =
           (afStack_b0[uVar1 + (int)fVar5 * 4] + afStack_b0[(int)fVar5 + uVar1 * 4]) * fVar8;
      local_120[(int)fVar6] =
           (afStack_b0[uVar1 + (int)fVar6 * 4] + afStack_b0[(int)fVar6 + uVar1 * 4]) * fVar8;
    }
    else {
      local_120[3] = SQRT(fVar5 + 1.0);
      local_120[2] = 0.5 / local_120[3];
      local_120[0] = (afStack_b0[6] - afStack_b0[9]) * local_120[2];
      local_120[1] = (afStack_b0[8] - afStack_b0[2]) * local_120[2];
      local_120[2] = (afStack_b0[1] - afStack_b0[4]) * local_120[2];
      local_120[3] = local_120[3] * 0.5;
    }
    fVar5 = local_120[2] * local_120[2] + local_120[0] * local_120[0];
    fVar6 = local_120[3] * local_120[3] + local_120[1] * local_120[1];
    fVar7 = local_120[0] * local_120[0] + local_120[2] * local_120[2];
    fVar8 = local_120[1] * local_120[1] + local_120[3] * local_120[3];
    fVar9 = fVar6 + fVar5;
    fVar5 = fVar5 + fVar6;
    fVar6 = fVar8 + fVar7;
    fVar7 = fVar7 + fVar8;
    auVar10._4_4_ = fVar5;
    auVar10._0_4_ = fVar9;
    auVar10._8_4_ = fVar6;
    auVar10._12_4_ = fVar7;
    auVar10 = rsqrtps(in_XMM3,auVar10);
    fVar8 = auVar10._0_4_;
    fVar11 = auVar10._4_4_;
    fVar12 = auVar10._8_4_;
    fVar13 = auVar10._12_4_;
    fStack_60 = (3.0 - fVar8 * fVar9 * fVar8) * fVar8 * 0.5 * local_120[0];
    fStack_5c = (3.0 - fVar11 * fVar5 * fVar11) * fVar11 * 0.5 * local_120[1];
    fStack_58 = (3.0 - fVar12 * fVar6 * fVar12) * fVar12 * 0.5 * local_120[2];
    fStack_54 = (3.0 - fVar13 * fVar7 * fVar13) * fVar13 * 0.5 * local_120[3];
    FUN_008fa520(auStack_80,&fStack_60,local_104,param_1,param_4,param_5);
    return;
  }
  if (param_3 != 0) {
    *(ushort *)(param_3 + 0xa2) = *(ushort *)(param_3 + 0xa2) | 4;
    FUN_01005140(param_3 + 0x10);
  }
  return;
}

// 008FAC40  FUN_008fac40  size=85  [callgraph]
void FUN_008fac40(void)

{
  char cVar1;
  int in_stack_00000014;
  
  cVar1 = *(char *)(in_stack_00000014 + 8);
  if (cVar1 == '\r') {
    FUN_008f8d20();
    return;
  }
  if (cVar1 == '\t') {
    cVar1 = *(char *)(*(int *)(in_stack_00000014 + 0x34) + 8);
    if (cVar1 == '\r') {
      FUN_008f8d20();
      return;
    }
    if (cVar1 == '\x1b') {
      FUN_008f8280();
      return;
    }
  }
  else {
    if (cVar1 == '\x05') {
      FUN_008f9fc0();
      return;
    }
    if (cVar1 == '\x1b') {
      FUN_008f8280();
      return;
    }
  }
  return;
}

// 008FACA0  FUN_008faca0  size=85  [callgraph]
void FUN_008faca0(undefined4 param_1,int param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_2 + 8);
  if (cVar1 == '\r') {
    FUN_008f9810();
    return;
  }
  if (cVar1 == '\t') {
    cVar1 = *(char *)(*(int *)(param_2 + 0x34) + 8);
    if (cVar1 == '\r') {
      FUN_008f9810();
      return;
    }
    if (cVar1 == '\x1b') {
      FUN_008f9a20();
      return;
    }
  }
  else {
    if (cVar1 == '\x05') {
      FUN_008fa0a0();
      return;
    }
    if (cVar1 == '\x1b') {
      FUN_008f9a20();
      return;
    }
  }
  return;
}

// 008FAD00  FUN_008fad00  size=85  [callgraph]
void FUN_008fad00(undefined4 param_1,int param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_2 + 8);
  if (cVar1 == '\r') {
    FUN_008f8e50();
    return;
  }
  if (cVar1 == '\t') {
    cVar1 = *(char *)(*(int *)(param_2 + 0x34) + 8);
    if (cVar1 == '\r') {
      FUN_008f8e50();
      return;
    }
    if (cVar1 == '\x1b') {
      FUN_008f8320();
      return;
    }
  }
  else {
    if (cVar1 == '\x05') {
      FUN_008fa1e0();
      return;
    }
    if (cVar1 == '\x1b') {
      FUN_008f8320();
      return;
    }
  }
  return;
}

// 008FAE70  lib::AllocatedArray<ImpactHistory::Unit>::AllocatedArray<ImpactHistory::Unit>  size=104  [class]
undefined4 *
lib::AllocatedArray<ImpactHistory::Unit>::AllocatedArray<ImpactHistory::Unit>(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *local_4;
  
  puVar1 = (undefined4 *)FUN_00dd3500(4,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_00dd3500(0x18,&DAT_01b7c218);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = vftable;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar3 = puVar2;
    }
    local_4 = &DAT_01b7c218;
    FUN_008fa3a0(0x40,&local_4);
    *puVar1 = puVar3;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 008FAFB0  lib::AllocatedArray<ImpactHistory::Unit>::vf00  size=30  [class]
undefined4 __thiscall
lib::AllocatedArray<ImpactHistory::Unit>::vf00(undefined4 param_1,byte param_2)

{
  Array<ImpactHistory::Unit>::Array<ImpactHistory::Unit>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008FEA20  lib::AllocatedArray<EffectCollisionMaterialImplement::Materials::Unit::Other>::vf04  size=4  [class]
undefined4 __fastcall
lib::AllocatedArray<EffectCollisionMaterialImplement::Materials::Unit::Other>::vf04(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// 008FEA60  lib::AllocatedArray<EffectCollisionMaterialImplement::Materials::Unit*>::vf04  size=4  [class]
undefined4 __fastcall
lib::AllocatedArray<EffectCollisionMaterialImplement::Materials::Unit*>::vf04(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// 008FF7C0  FUN_008ff7c0  size=246  [callgraph]
undefined4 __thiscall FUN_008ff7c0(int param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  LONG LVar4;
  int *local_8;
  int *local_4;
  
  FUN_008ff6e0();
  local_8 = (int *)0x0;
  local_4 = (int *)0x0;
  cVar2 = lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>::CoreT<sys::AllocatorByHeap>
                    (*param_3);
  if (cVar2 != '\0') {
    if (local_8 != (int *)0x0) {
      iVar3 = (**(code **)(*local_8 + 4))(param_2 * 8);
      if (iVar3 != 0) {
        FUN_00401f90(&local_8);
        piVar1 = local_4;
        if (*(int *)(param_1 + 4) != 0) {
          *(undefined4 *)(param_1 + 8) = 0;
        }
        *(uint *)(param_1 + 0xc) = param_2 & 0x1fffffff;
        *(int *)(param_1 + 4) = iVar3;
        if (local_4 != (int *)0x0) {
          LVar4 = InterlockedDecrement(local_4 + 1);
          if (LVar4 == 0) {
            (**(code **)(*piVar1 + 4))();
            LVar4 = InterlockedDecrement(piVar1 + 2);
            if (LVar4 == 0) {
              (**(code **)(*piVar1 + 8))();
            }
          }
        }
        return 1;
      }
    }
  }
  piVar1 = local_4;
  if (local_4 != (int *)0x0) {
    LVar4 = InterlockedDecrement(local_4 + 1);
    if (LVar4 == 0) {
      (**(code **)(*piVar1 + 4))();
      LVar4 = InterlockedDecrement(piVar1 + 2);
      if (LVar4 == 0) {
        (**(code **)(*piVar1 + 8))();
      }
    }
  }
  return 0;
}

// 008FF8C0  FUN_008ff8c0  size=244  [callgraph]
undefined4 __thiscall FUN_008ff8c0(int param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  LONG LVar4;
  int *local_8;
  int *local_4;
  
  FUN_008ff750();
  local_8 = (int *)0x0;
  local_4 = (int *)0x0;
  cVar2 = lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>::CoreT<sys::AllocatorByHeap>
                    (*param_3);
  if (cVar2 != '\0') {
    if (local_8 != (int *)0x0) {
      iVar3 = (**(code **)(*local_8 + 4))(param_2 * 4);
      if (iVar3 != 0) {
        FUN_00401f90(&local_8);
        piVar1 = local_4;
        if (*(int *)(param_1 + 4) != 0) {
          *(undefined4 *)(param_1 + 8) = 0;
        }
        *(uint *)(param_1 + 0xc) = param_2 & 0x3fffffff;
        *(int *)(param_1 + 4) = iVar3;
        if (local_4 != (int *)0x0) {
          LVar4 = InterlockedDecrement(local_4 + 1);
          if (LVar4 == 0) {
            (**(code **)(*piVar1 + 4))();
            LVar4 = InterlockedDecrement(piVar1 + 2);
            if (LVar4 == 0) {
              (**(code **)(*piVar1 + 8))();
            }
          }
        }
        return 1;
      }
    }
  }
  piVar1 = local_4;
  if (local_4 != (int *)0x0) {
    LVar4 = InterlockedDecrement(local_4 + 1);
    if (LVar4 == 0) {
      (**(code **)(*piVar1 + 4))();
      LVar4 = InterlockedDecrement(piVar1 + 2);
      if (LVar4 == 0) {
        (**(code **)(*piVar1 + 8))();
      }
    }
  }
  return 0;
}

// 008FF9C0  lib::AllocatedArray<EffectCollisionMaterialImplement::Materials::Unit::Other>::AllocatedArray<EffectCollisionMaterialImplement::Materials::Unit::Other>  size=720  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
lib::AllocatedArray<EffectCollisionMaterialImplement::Materials::Unit::Other>::
AllocatedArray<EffectCollisionMaterialImplement::Materials::Unit::Other>(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcStack_60;
  char **ppcStack_5c;
  char *pcStack_58;
  char *pcStack_54;
  undefined *puStack_50;
  char *pcStack_4c;
  char *pcStack_48;
  char *pcStack_44;
  char *pcStack_40;
  char *pcStack_3c;
  char *pcStack_38;
  char *pcStack_34;
  char *pcStack_30;
  char *pcStack_2c;
  char *pcStack_28;
  int iStack_24;
  char *pcStack_20;
  undefined4 uStack_1c;
  
  uStack_1c = 7;
  pcStack_20 = "material";
  iStack_24 = 0x8ff9dd;
  cVar2 = (**(code **)(*param_2 + 0x10))();
  if (cVar2 != '\0') {
    pcStack_28 = (char *)0x8ff9eb;
    iStack_24 = param_1;
    (**(code **)(*param_2 + 0x2c))();
    pcStack_28 = (char *)0x7;
    pcStack_2c = "material";
    pcStack_30 = (char *)0x8ff9fb;
    (**(code **)(*param_2 + 0x14))();
  }
  iStack_24 = 7;
  pcStack_28 = "mostsmall";
  pcStack_2c = (char *)0x8ffa0b;
  cVar2 = (**(code **)(*param_2 + 0x10))();
  if (cVar2 != '\0') {
    pcStack_2c = (char *)(param_1 + 4);
    pcStack_30 = (char *)0x8ffa1c;
    (**(code **)(*param_2 + 0x2c))();
    pcStack_30 = (char *)0x7;
    pcStack_34 = "mostsmall";
    pcStack_38 = (char *)0x8ffa2c;
    (**(code **)(*param_2 + 0x14))();
  }
  pcStack_2c = (char *)0x7;
  pcStack_30 = "small";
  pcStack_34 = (char *)0x8ffa3c;
  cVar2 = (**(code **)(*param_2 + 0x10))();
  if (cVar2 != '\0') {
    pcStack_34 = (char *)(param_1 + 8);
    pcStack_38 = (char *)0x8ffa4d;
    (**(code **)(*param_2 + 0x2c))();
    pcStack_38 = (char *)0x7;
    pcStack_3c = "small";
    pcStack_40 = (char *)0x8ffa5d;
    (**(code **)(*param_2 + 0x14))();
  }
  pcStack_34 = (char *)0x7;
  pcStack_38 = "middle";
  pcStack_3c = (char *)0x8ffa6d;
  cVar2 = (**(code **)(*param_2 + 0x10))();
  if (cVar2 != '\0') {
    pcStack_3c = (char *)(param_1 + 0xc);
    pcStack_40 = (char *)0x8ffa7e;
    (**(code **)(*param_2 + 0x2c))();
    pcStack_40 = (char *)0x7;
    pcStack_44 = "middle";
    pcStack_48 = (char *)0x8ffa8e;
    (**(code **)(*param_2 + 0x14))();
  }
  pcStack_3c = (char *)0x7;
  pcStack_40 = "large";
  pcStack_44 = (char *)0x8ffa9e;
  cVar2 = (**(code **)(*param_2 + 0x10))();
  if (cVar2 != '\0') {
    pcStack_44 = (char *)(param_1 + 0x10);
    pcStack_48 = (char *)0x8ffaaf;
    (**(code **)(*param_2 + 0x2c))();
    pcStack_48 = (char *)0x7;
    pcStack_4c = "large";
    puStack_50 = (undefined *)0x8ffabf;
    (**(code **)(*param_2 + 0x14))();
  }
  pcStack_44 = (char *)0x7;
  pcStack_48 = "mostlarge";
  pcStack_4c = (char *)0x8ffacf;
  cVar2 = (**(code **)(*param_2 + 0x10))();
  if (cVar2 != '\0') {
    pcStack_4c = (char *)(param_1 + 0x14);
    puStack_50 = (undefined *)0x8ffae0;
    (**(code **)(*param_2 + 0x2c))();
    puStack_50 = (undefined *)0x7;
    pcStack_54 = "mostlarge";
    pcStack_58 = (char *)0x8ffaf0;
    (**(code **)(*param_2 + 0x14))();
  }
  pcStack_4c = (char *)0x7;
  puStack_50 = &DAT_0164be98;
  pcStack_54 = (char *)0x8ffb00;
  cVar2 = (**(code **)(*param_2 + 0x10))();
  if (cVar2 != '\0') {
    pcStack_54 = (char *)(param_1 + 0x18);
    pcStack_58 = (char *)0x8ffb11;
    (**(code **)(*param_2 + 0x2c))();
    pcStack_58 = (char *)0x7;
    ppcStack_5c = (char **)&DAT_0164be98;
    pcStack_60 = (char *)0x8ffb21;
    (**(code **)(*param_2 + 0x14))();
  }
  pcStack_54 = (char *)0x7;
  pcStack_58 = "countOfOthers";
  pcStack_34 = (char *)0x0;
  ppcStack_5c = (char **)0x8ffb37;
  cVar2 = (**(code **)(*param_2 + 0x10))();
  if (cVar2 != '\0') {
    ppcStack_5c = &pcStack_3c;
    pcStack_60 = (char *)0x8ffb49;
    (**(code **)(*param_2 + 0x2c))();
    pcStack_60 = (char *)0x7;
    (**(code **)(*param_2 + 0x14))("countOfOthers");
  }
  if (pcStack_3c != (char *)0x0) {
    ppcStack_5c = (char **)&DAT_01b7bd48;
    pcStack_60 = (char *)0x18;
    puVar3 = (undefined4 *)FUN_00dd3500();
    puVar5 = (undefined4 *)0x0;
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar3 = vftable;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar5 = puVar3;
    }
    ppcStack_5c = &pcStack_48;
    pcStack_60 = pcStack_3c;
    pcStack_48 = (char *)&DAT_01b7bd48;
    FUN_008ff7c0();
    *(undefined4 **)(param_1 + 0x1c) = puVar5;
  }
  iVar4 = 0;
  if (0 < (int)pcStack_3c) {
    do {
      if ((_DAT_01b35dc4 & 1) == 0) {
        _DAT_01b35dc4 = _DAT_01b35dc4 | 1;
        DAT_01b35dc0 = DAT_01884314;
        DAT_01884314 = DAT_01884314 + 1;
      }
      iVar1 = DAT_01b35dc0;
      pcStack_60 = "others";
      ppcStack_5c = (char **)DAT_01b35dc0;
      cVar2 = (**(code **)(*param_2 + 0x10))();
      if (cVar2 != '\0') {
        ppcStack_5c = (char **)0x7;
        pcStack_60 = "objid";
        cVar2 = (**(code **)(*param_2 + 0x10))();
        if (cVar2 != '\0') {
          (**(code **)(*param_2 + 0x2c))(&puStack_50);
          (**(code **)(*param_2 + 0x14))("objid",7);
        }
        cVar2 = (**(code **)(*param_2 + 0x10))("effect",7);
        if (cVar2 != '\0') {
          (**(code **)(*param_2 + 0x2c))(&pcStack_54);
          (**(code **)(*param_2 + 0x14))("effect",7);
        }
        (**(code **)(*param_2 + 0x14))("others",iVar1);
        (**(code **)(**(int **)(param_1 + 0x1c) + 8))(&pcStack_60);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)pcStack_3c);
  }
  return 1;
}

// 008FFD50  lib::AllocatedArray<EffectCollisionMaterialImplement::Materials::Unit::Other>::vf00  size=30  [class]
undefined4 __thiscall
lib::AllocatedArray<EffectCollisionMaterialImplement::Materials::Unit::Other>::vf00
          (undefined4 param_1,byte param_2)

{
  Array<EffectCollisionMaterialImplement::Materials::Unit::Other>::
  Array<EffectCollisionMaterialImplement::Materials::Unit::Other>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008FFD70  lib::AllocatedArray<EffectCollisionMaterialImplement::Materials::Unit*>::vf00  size=30  [class]
undefined4 __thiscall
lib::AllocatedArray<EffectCollisionMaterialImplement::Materials::Unit*>::vf00
          (undefined4 param_1,byte param_2)

{
  Array<EffectCollisionMaterialImplement::Materials::Unit*>::
  Array<EffectCollisionMaterialImplement::Materials::Unit*>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008FFE30  lib::AllocatedArray<EffectCollisionMaterialImplement::Materials::Unit*>::AllocatedArray<EffectCollisionMaterialImplement::Materials::Unit*>  size=605  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
lib::AllocatedArray<EffectCollisionMaterialImplement::Materials::Unit*>::
AllocatedArray<EffectCollisionMaterialImplement::Materials::Unit*>(int *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  char *pcStack_3c;
  int *piStack_38;
  char *pcStack_34;
  int *piStack_30;
  char *pcStack_2c;
  int *piStack_28;
  char *pcStack_24;
  int *piStack_20;
  char *pcStack_1c;
  undefined4 uStack_18;
  
  uStack_18 = 0xb;
  pcStack_1c = "mostsmall";
  piStack_20 = (int *)0x8ffe4b;
  cVar2 = (**(code **)(*param_2 + 0x10))();
  if (cVar2 != '\0') {
    piStack_20 = param_1 + 1;
    pcStack_24 = (char *)0x8ffe5c;
    (**(code **)(*param_2 + 0x1c))();
    pcStack_24 = (char *)0xb;
    piStack_28 = (int *)0x164bec4;
    pcStack_2c = (char *)0x8ffe6c;
    (**(code **)(*param_2 + 0x14))();
  }
  piStack_20 = (int *)0xb;
  pcStack_24 = "small";
  piStack_28 = (int *)0x8ffe7c;
  cVar2 = (**(code **)(*param_2 + 0x10))();
  if (cVar2 != '\0') {
    piStack_28 = param_1 + 2;
    pcStack_2c = (char *)0x8ffe8d;
    (**(code **)(*param_2 + 0x1c))();
    pcStack_2c = (char *)0xb;
    piStack_30 = (int *)0x164bebc;
    pcStack_34 = (char *)0x8ffe9d;
    (**(code **)(*param_2 + 0x14))();
  }
  piStack_28 = (int *)0xb;
  pcStack_2c = "middle";
  piStack_30 = (int *)0x8ffead;
  cVar2 = (**(code **)(*param_2 + 0x10))();
  if (cVar2 != '\0') {
    piStack_30 = param_1 + 3;
    pcStack_34 = (char *)0x8ffebe;
    (**(code **)(*param_2 + 0x1c))();
    pcStack_34 = (char *)0xb;
    piStack_38 = (int *)0x164beb4;
    pcStack_3c = (char *)0x8ffece;
    (**(code **)(*param_2 + 0x14))();
  }
  piStack_30 = (int *)0xb;
  pcStack_34 = "large";
  piStack_38 = (int *)0x8ffede;
  cVar2 = (**(code **)(*param_2 + 0x10))();
  if (cVar2 != '\0') {
    piStack_38 = param_1 + 4;
    pcStack_3c = (char *)0x8ffeef;
    (**(code **)(*param_2 + 0x1c))();
    pcStack_3c = (char *)0xb;
    (**(code **)(*param_2 + 0x14))("large");
  }
  piStack_38 = (int *)0xb;
  pcStack_3c = "mostlarge";
  cVar2 = (**(code **)(*param_2 + 0x10))();
  if (cVar2 != '\0') {
    (**(code **)(*param_2 + 0x1c))(param_1 + 5);
    (**(code **)(*param_2 + 0x14))("mostlarge",0xb);
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_0164be98,0xb);
  if (cVar2 != '\0') {
    (**(code **)(*param_2 + 0x1c))(param_1 + 6);
    (**(code **)(*param_2 + 0x14))(&DAT_0164be98,0xb);
  }
  cVar2 = (**(code **)(*param_2 + 0x10))("countOf",7);
  if (cVar2 != '\0') {
    (**(code **)(*param_2 + 0x2c))(param_1);
    (**(code **)(*param_2 + 0x14))("countOf",7);
  }
  puVar3 = (undefined4 *)FUN_00dd3500(0x18,&DAT_01b7bd48);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = vftable;
    puVar3[4] = 0;
    puVar3[5] = 0;
  }
  pcStack_34 = (char *)&DAT_01b7bd48;
  FUN_008ff8c0(*param_1,&pcStack_34);
  param_1[7] = (int)puVar3;
  pcStack_3c = (char *)0x0;
  if (0 < *param_1) {
    do {
      pcStack_34 = (char *)FUN_00dd3500(0x20,&DAT_01b7bd48);
      if (pcStack_34 == (char *)0x0) {
        pcStack_34 = (char *)0x0;
      }
      else {
        pcStack_34[0x1c] = '\0';
        pcStack_34[0x1d] = '\0';
        pcStack_34[0x1e] = '\0';
        pcStack_34[0x1f] = '\0';
      }
      if ((_DAT_01b35dcc & 1) == 0) {
        _DAT_01b35dcc = _DAT_01b35dcc | 1;
        DAT_01b35dc8 = DAT_01884314;
        DAT_01884314 = DAT_01884314 + 1;
      }
      iVar1 = DAT_01b35dc8;
      cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_0164a428,DAT_01b35dc8);
      if (cVar2 != '\0') {
        AllocatedArray<EffectCollisionMaterialImplement::Materials::Unit::Other>::
        AllocatedArray<EffectCollisionMaterialImplement::Materials::Unit::Other>(param_2);
        (**(code **)(*param_2 + 0x14))(&DAT_0164a428,iVar1);
      }
      (**(code **)(*(int *)param_1[7] + 8))(&pcStack_3c);
      pcStack_3c = pcStack_3c + 1;
    } while ((int)pcStack_3c < *param_1);
  }
  return 1;
}

// 009000C0  FUN_009000c0  size=112  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_009000c0(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  
  if ((_DAT_01b35dd4 & 1) == 0) {
    _DAT_01b35dd4 = _DAT_01b35dd4 | 1;
    DAT_01b35dd0 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  iVar1 = DAT_01b35dd0;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_2,DAT_01b35dd0);
  if (cVar2 == '\0') {
    return 0;
  }
  uVar3 = lib::AllocatedArray<EffectCollisionMaterialImplement::Materials::Unit*>::
          AllocatedArray<EffectCollisionMaterialImplement::Materials::Unit*>(param_1);
  (**(code **)(*param_1 + 0x14))(param_2,iVar1);
  return uVar3;
}

// 00903CD0  FUN_00903cd0  size=244  [callgraph]
undefined4 __thiscall FUN_00903cd0(int param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  LONG LVar4;
  int *local_8;
  int *local_4;
  
  FUN_00903bf0();
  local_8 = (int *)0x0;
  local_4 = (int *)0x0;
  cVar2 = lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>::CoreT<sys::AllocatorByHeap>
                    (*param_3);
  if (cVar2 != '\0') {
    if (local_8 != (int *)0x0) {
      iVar3 = (**(code **)(*local_8 + 4))(param_2 * 4);
      if (iVar3 != 0) {
        FUN_00401f90(&local_8);
        piVar1 = local_4;
        if (*(int *)(param_1 + 4) != 0) {
          *(undefined4 *)(param_1 + 8) = 0;
        }
        *(uint *)(param_1 + 0xc) = param_2 & 0x3fffffff;
        *(int *)(param_1 + 4) = iVar3;
        if (local_4 != (int *)0x0) {
          LVar4 = InterlockedDecrement(local_4 + 1);
          if (LVar4 == 0) {
            (**(code **)(*piVar1 + 4))();
            LVar4 = InterlockedDecrement(piVar1 + 2);
            if (LVar4 == 0) {
              (**(code **)(*piVar1 + 8))();
            }
          }
        }
        return 1;
      }
    }
  }
  piVar1 = local_4;
  if (local_4 != (int *)0x0) {
    LVar4 = InterlockedDecrement(local_4 + 1);
    if (LVar4 == 0) {
      (**(code **)(*piVar1 + 4))();
      LVar4 = InterlockedDecrement(piVar1 + 2);
      if (LVar4 == 0) {
        (**(code **)(*piVar1 + 8))();
      }
    }
  }
  return 0;
}

// 00903DD0  FUN_00903dd0  size=244  [callgraph]
undefined4 __thiscall FUN_00903dd0(int param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  LONG LVar4;
  int *local_8;
  int *local_4;
  
  FUN_00903c60();
  local_8 = (int *)0x0;
  local_4 = (int *)0x0;
  cVar2 = lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>::CoreT<sys::AllocatorByHeap>
                    (*param_3);
  if (cVar2 != '\0') {
    if (local_8 != (int *)0x0) {
      iVar3 = (**(code **)(*local_8 + 4))(param_2 * 4);
      if (iVar3 != 0) {
        FUN_00401f90(&local_8);
        piVar1 = local_4;
        if (*(int *)(param_1 + 4) != 0) {
          *(undefined4 *)(param_1 + 8) = 0;
        }
        *(uint *)(param_1 + 0xc) = param_2 & 0x3fffffff;
        *(int *)(param_1 + 4) = iVar3;
        if (local_4 != (int *)0x0) {
          LVar4 = InterlockedDecrement(local_4 + 1);
          if (LVar4 == 0) {
            (**(code **)(*piVar1 + 4))();
            LVar4 = InterlockedDecrement(piVar1 + 2);
            if (LVar4 == 0) {
              (**(code **)(*piVar1 + 8))();
            }
          }
        }
        return 1;
      }
    }
  }
  piVar1 = local_4;
  if (local_4 != (int *)0x0) {
    LVar4 = InterlockedDecrement(local_4 + 1);
    if (LVar4 == 0) {
      (**(code **)(*piVar1 + 4))();
      LVar4 = InterlockedDecrement(piVar1 + 2);
      if (LVar4 == 0) {
        (**(code **)(*piVar1 + 8))();
      }
    }
  }
  return 0;
}

// 00903ED0  lib::AllocatedArray<hkpPhantomListener*>::AllocatedArray<hkpPhantomListener*>  size=157  [class]
void __thiscall
lib::AllocatedArray<hkpPhantomListener*>::AllocatedArray<hkpPhantomListener*>
          (undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *param_1 = param_2;
  puVar1 = (undefined4 *)FUN_00dd3500(0x18,&DAT_01b7c218);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = vftable;
    puVar1[4] = 0;
    puVar1[5] = 0;
  }
  param_2 = &DAT_01b7c218;
  FUN_00903cd0(4,&param_2);
  param_1[1] = puVar1;
  puVar2 = (undefined4 *)FUN_00dd3500(0x18,&DAT_01b7c218);
  puVar1 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = AllocatedArray<hkpPhantomOverlapListener*>::vftable;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar1 = puVar2;
  }
  param_2 = &DAT_01b7c218;
  FUN_00903dd0(4,&param_2);
  param_1[2] = puVar1;
  return;
}

// 00904300  lib::AllocatedArray<hkpPhantomListener*>::vf00  size=30  [class]
undefined4 __thiscall
lib::AllocatedArray<hkpPhantomListener*>::vf00(undefined4 param_1,byte param_2)

{
  Array<hkpPhantomListener*>::Array<hkpPhantomListener*>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00904320  lib::AllocatedArray<hkpPhantomOverlapListener*>::vf00  size=30  [class]
undefined4 __thiscall
lib::AllocatedArray<hkpPhantomOverlapListener*>::vf00(undefined4 param_1,byte param_2)

{
  Array<hkpPhantomOverlapListener*>::Array<hkpPhantomOverlapListener*>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00904370  FUN_00904370  size=32  [callgraph]
void __fastcall FUN_00904370(int param_1)

{
  if ((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 8) != 0)) {
    FUN_011980a0(*(int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

// 009043A0  FUN_009043a0  size=63  [callgraph]
void __thiscall FUN_009043a0(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 8) == 0) {
    *(undefined4 *)(param_1 + 8) = param_2;
    return;
  }
  if (*(int *)(param_1 + 4) != 0) {
    FUN_011980a0(*(int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = param_2;
    return;
  }
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}

// 009043E0  FUN_009043e0  size=9  [callgraph]
bool __fastcall FUN_009043e0(int param_1)

{
  return *(int *)(param_1 + 8) != 0;
}

// 009043F0  FUN_009043f0  size=9  [callgraph]
void __fastcall FUN_009043f0(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

// 00904560  FUN_00904560  size=239  [callgraph]
void __thiscall
FUN_00904560(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = param_5;
  uVar2 = param_4;
  if (*(int *)(param_1 + 8) != 0) {
    FUN_004066f0();
    iVar4 = *(int *)(param_1 + 8);
    iVar5 = 0;
    if (0 < *(int *)(iVar4 + 0xc)) {
      do {
        iVar4 = *(int *)(*(int *)(iVar4 + 8) + iVar5 * 4);
        FUN_0119f6a0(param_2);
        FUN_0119f6e0(param_3);
        param_5._0_2_ = (undefined2)((uint)uVar3 >> 0x10);
        param_4._0_2_ = (undefined2)((uint)param_6 >> 0x10);
        *(short *)(iVar4 + 0x194) = (short)((uint)uVar2 >> 0x10);
        *(undefined2 *)(iVar4 + 0x196) = (undefined2)param_5;
        *(undefined2 *)(iVar4 + 0x1fe) = (undefined2)param_4;
        iVar4 = *(int *)(param_1 + 8);
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(iVar4 + 0xc));
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 00904650  FUN_00904650  size=39  [callgraph]
undefined4 __thiscall FUN_00904650(int param_1,int param_2)

{
  if ((param_2 != 0) && (*(int *)(param_1 + 8) != 0)) {
    *(int *)(param_1 + 4) = param_2;
    FUN_01197f50(*(int *)(param_1 + 8));
    return 1;
  }
  return 0;
}

// 00904680  FUN_00904680  size=55  [callgraph]
void __fastcall FUN_00904680(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    FUN_01006000();
    iVar1 = 0;
    if (0 < *(int *)(*(int *)(param_1 + 8) + 0xc)) {
      do {
        FUN_01006000();
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(*(int *)(param_1 + 8) + 0xc));
    }
  }
  return;
}

// 00904750  FUN_00904750  size=83  [callgraph]
int * __thiscall FUN_00904750(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x80)) {
    piVar1 = *(int **)(param_1 + 0x7c);
    piVar4 = piVar1;
    do {
      if (*piVar4 == param_3) {
        iVar2 = piVar1[iVar3 * 4 + 2];
        param_2[1] = piVar1[iVar3 * 4 + 3];
        *param_2 = iVar2;
        return param_2;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x80));
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}

// 00904840  FUN_00904840  size=754  [callgraph]
void __fastcall FUN_00904840(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int *piVar10;
  uint uVar11;
  int local_1c;
  uint local_18;
  int local_14;
  
  iVar7 = *(int *)(param_1 + 8);
  local_14 = 0;
  if (*(int *)(iVar7 + 0xc) < 1) {
    return;
  }
LAB_00904860:
  iVar7 = *(int *)(*(int *)(iVar7 + 8) + local_14 * 4);
  uVar2 = *(uint *)(iVar7 + 0xc);
  *(undefined4 *)(iVar7 + 0xc) = 0;
  local_18 = 1;
  local_1c = 8;
  uVar11 = 0xffffffe0;
LAB_00904890:
  iVar8 = 0;
  if (0 < *(int *)(iVar7 + 0x80)) {
    piVar3 = *(int **)(iVar7 + 0x7c);
    piVar10 = piVar3;
    do {
      if (*piVar10 == uVar11 + 0x2021) {
        iVar8 = 0;
        piVar10 = piVar3;
        goto LAB_009048c2;
      }
      iVar8 = iVar8 + 1;
      piVar10 = piVar10 + 4;
    } while (iVar8 < *(int *)(iVar7 + 0x80));
  }
  goto LAB_009049b7;
  while( true ) {
    iVar8 = iVar8 + 1;
    piVar10 = piVar10 + 4;
    if (*(int *)(iVar7 + 0x80) <= iVar8) break;
LAB_009048c2:
    if (*piVar10 == uVar11 + 0x2021) {
      iVar8 = piVar3[iVar8 * 4 + 2];
      goto LAB_009048de;
    }
  }
  iVar8 = 0;
LAB_009048de:
  if (DAT_01885d68 != 1) {
    iVar4 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
    if ((*(int *)(iVar4 + 4) == 0) && (DAT_01b35fac != 0)) {
      if (DAT_01885db8 == 0) {
        FUN_00dd72e0();
      }
      else {
        FUN_00dd5650(&DAT_0163b898);
      }
    }
    piVar3 = (int *)(iVar4 + 4);
    *piVar3 = *piVar3 + 1;
  }
  puVar9 = (uint *)(-(uint)(*(uint *)(iVar7 + 0xc) != 0) & *(uint *)(iVar7 + 0xc));
  if ((int)(uVar11 + 0x20) < 0x20) {
    if (uVar11 + 0x20 < 0x20) {
      *puVar9 = *puVar9 | local_18;
    }
  }
  else if (uVar11 < 0x20) {
    puVar9[1] = puVar9[1] | 1 << ((byte)uVar11 & 0x1f);
  }
  *(int *)(local_1c + (int)puVar9) = iVar8;
  if (DAT_01885d68 != 1) {
    piVar3 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar3 = *piVar3 + -1;
    if (((*piVar3 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
LAB_009049b7:
  pvVar6 = ThreadLocalStoragePointer;
  iVar8 = _tls_index;
  local_1c = local_1c + 4;
  local_18 = local_18 << 1 | (uint)((int)local_18 < 0);
  uVar1 = uVar11 + 0x21;
  uVar11 = uVar11 + 1;
  if (0x28 < uVar1) goto code_r0x009049d3;
  goto LAB_00904890;
code_r0x009049d3:
  if ((DAT_01885d68 != 1) &&
     (iVar4 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4), *(int *)(iVar4 + 4) == 0))
  {
    if ((*(int *)(iVar4 + 8) == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
      FUN_00dd72c0();
    }
    *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
  }
  if ((*(int *)(iVar7 + 0xc) == 0) || ((*(byte *)(*(int *)(iVar7 + 0xc) + 2) & 1) == 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((DAT_01885d68 != 1) && (iVar4 = *(int *)((int)pvVar6 + iVar8 * 4), *(int *)(iVar4 + 4) == 0))
  {
    piVar3 = (int *)(iVar4 + 8);
    *piVar3 = *piVar3 + -1;
    if ((*piVar3 == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
      FUN_00dd7300();
    }
  }
  if (bVar5) {
    if (DAT_01885d68 != 1) {
      iVar4 = *(int *)((int)pvVar6 + iVar8 * 4);
      if ((*(int *)(iVar4 + 4) == 0) && (DAT_01b35fac != 0)) {
        if (DAT_01885db8 == 0) {
          FUN_00dd72e0();
        }
        else {
          FUN_00dd5650(&DAT_0163b898);
        }
      }
      piVar3 = (int *)(iVar4 + 4);
      *piVar3 = *piVar3 + 1;
    }
    puVar9 = (uint *)(-(uint)(*(uint *)(iVar7 + 0xc) != 0) & *(uint *)(iVar7 + 0xc));
    *puVar9 = *puVar9 | 0x10000;
    puVar9[0x12] = uVar2;
    if (DAT_01885d68 != 1) {
      piVar3 = (int *)(*(int *)((int)pvVar6 + iVar8 * 4) + 4);
      *piVar3 = *piVar3 + -1;
      if (((*piVar3 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  iVar7 = *(int *)(param_1 + 8);
  local_14 = local_14 + 1;
  if (*(int *)(iVar7 + 0xc) <= local_14) {
    return;
  }
  goto LAB_00904860;
}

// 00904C40  FUN_00904c40  size=20  [callgraph]
void FUN_00904c40(void)

{
  FUN_00dd7270();
  FUN_00dd7270();
  return;
}

// 00904C60  FUN_00904c60  size=37  [callgraph]
void __thiscall FUN_00904c60(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_010060a0();
    *(undefined4 *)(param_1 + 0x20) = param_2;
    return;
  }
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}

// 00904CF0  FUN_00904cf0  size=36  [callgraph]
void __thiscall FUN_00904cf0(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_010060a0();
  }
  *(undefined4 *)(param_1 + 0x1d0) = param_3;
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}

// 00904D20  FUN_00904d20  size=53  [callgraph]
void __thiscall FUN_00904d20(int param_1,undefined4 param_2,undefined4 *param_3)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_010060a0();
  }
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x30) = *param_3;
  *(undefined4 *)(param_1 + 0x34) = param_3[1];
  *(undefined4 *)(param_1 + 0x38) = param_3[2];
  *(undefined4 *)(param_1 + 0x3c) = param_3[3];
  return;
}

// 00904D60  FUN_00904d60  size=9  [callgraph]
void __fastcall FUN_00904d60(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// 00926440  lib::AllocatedArray<RigidBodyManagerImplement::Work*>::AllocatedArray<RigidBodyManagerImplement::Work*>  size=154  [class]
undefined4 * __fastcall
lib::AllocatedArray<RigidBodyManagerImplement::Work*>::
AllocatedArray<RigidBodyManagerImplement::Work*>(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puStack_18;
  char *pcStack_14;
  
  *param_1 = RigidBodyManagerImplement::vftable;
  param_1[2] = 0;
  pcStack_14 = (char *)0x926459;
  Hw::cHeapFixed::cHeapFixed();
  param_1[0x1c] = 0;
  param_1[0x24] = 0;
  pcStack_14 = (char *)0x92646a;
  FUN_00dd7240();
  pcStack_14 = "RigidBodyManagerImplement::WorkFactory";
  puStack_18 = &DAT_01b7c218;
  (**(code **)(param_1[4] + 0x40))(8,0x400,0x10);
  if (param_1[0x1c] == 0) {
    puVar1 = (undefined4 *)FUN_00dd3500(0x18,&DAT_01b7c218);
    puVar2 = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *puVar1 = vftable;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar2 = puVar1;
    }
    puStack_18 = &DAT_01b7c218;
    FUN_009233c0(0x400,&puStack_18);
    param_1[0x1c] = puVar2;
  }
  return param_1;
}

// 009277B0  lib::AllocatedArray<RigidBodyManagerImplement::Work*>::vf00  size=30  [class]
undefined4 __thiscall
lib::AllocatedArray<RigidBodyManagerImplement::Work*>::vf00(undefined4 param_1,byte param_2)

{
  Array<RigidBodyManagerImplement::Work*>::Array<RigidBodyManagerImplement::Work*>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009277E0  FUN_009277e0  size=29  [callgraph]
void __fastcall FUN_009277e0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_01b35f9c + 0x30))(*param_1);
  if (iVar1 != 0) {
    hkpAllCdPointCollector::hkpAllCdPointCollector_40();
    return;
  }
  return;
}

// 009284F0  FUN_009284f0  size=61  [callgraph]
bool FUN_009284f0(void)

{
  int iVar1;
  
  iVar1 = FUN_00dd3500(0x98,&DAT_01b7c218);
  if (iVar1 != 0) {
    DAT_01b35f9c = lib::AllocatedArray<RigidBodyManagerImplement::Work*>::
                   AllocatedArray<RigidBodyManagerImplement::Work*>();
    return DAT_01b35f9c != 0;
  }
  DAT_01b35f9c = 0;
  return false;
}

// 0092E800  FUN_0092e800  size=259  [callgraph]
undefined4 __thiscall FUN_0092e800(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  LONG LVar4;
  int *local_8;
  int *local_4;
  
  FUN_0092e790();
  local_8 = (int *)0x0;
  local_4 = (int *)0x0;
  cVar2 = lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>::CoreT<sys::AllocatorByHeap>
                    (*param_3);
  if (cVar2 != '\0') {
    if (local_8 != (int *)0x0) {
      iVar3 = (**(code **)(*local_8 + 4))(param_2 * 0x8c);
      if (iVar3 != 0) {
        FUN_00401f90(&local_8);
        piVar1 = local_4;
        if (*(int *)(param_1 + 4) != 0) {
          *(undefined4 *)(param_1 + 8) = 0;
        }
        *(uint *)(param_1 + 0xc) = (uint)(param_2 * 0x8c) / 0x8c;
        *(int *)(param_1 + 4) = iVar3;
        if (local_4 != (int *)0x0) {
          LVar4 = InterlockedDecrement(local_4 + 1);
          if (LVar4 == 0) {
            (**(code **)(*piVar1 + 4))();
            LVar4 = InterlockedDecrement(piVar1 + 2);
            if (LVar4 == 0) {
              (**(code **)(*piVar1 + 8))();
            }
          }
        }
        return 1;
      }
    }
  }
  piVar1 = local_4;
  if (local_4 != (int *)0x0) {
    LVar4 = InterlockedDecrement(local_4 + 1);
    if (LVar4 == 0) {
      (**(code **)(*piVar1 + 4))();
      LVar4 = InterlockedDecrement(piVar1 + 2);
      if (LVar4 == 0) {
        (**(code **)(*piVar1 + 8))();
      }
    }
  }
  return 0;
}

// 0092E970  lib::AllocatedArray<HkDataManagerImplement::ReserveUnit>::AllocatedArray<HkDataManagerImplement::ReserveUnit>  size=230  [class]
undefined4 * __fastcall
lib::AllocatedArray<HkDataManagerImplement::ReserveUnit>::
AllocatedArray<HkDataManagerImplement::ReserveUnit>(undefined4 *param_1)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  undefined4 *puStack_1c;
  char *pcStack_18;
  
  *param_1 = HkDataManagerImplement::vftable;
  param_1[2] = 0;
  pcStack_18 = (char *)0x92e98a;
  Hw::cHeapFixed::cHeapFixed();
  pcStack_18 = "HkxFactory";
  puStack_1c = &DAT_01b7c218;
  param_1[0x26] = 0;
  param_1[0x2e] = 0;
  (**(code **)(param_1[4] + 0x40))(0x48,0x200,4);
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  puVar2 = (undefined4 *)(**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0xffffffff;
  }
  param_1[0x1c] = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    FUN_00dd5650(&DAT_0164d780);
    return param_1;
  }
  param_1[0x1d] = 0;
  puVar2 = (undefined4 *)FUN_00dd3500(0x18,&DAT_01b7c218);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = vftable;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puStack_1c = &DAT_01b7c218;
    FUN_0092e800(0x200,&puStack_1c);
    param_1[0x1d] = puVar2;
  }
  FUN_00dd7290(0);
  return param_1;
}

// 0092ED60  lib::AllocatedArray<HkDataManagerImplement::ReserveUnit>::vf00  size=30  [class]
undefined4 __thiscall
lib::AllocatedArray<HkDataManagerImplement::ReserveUnit>::vf00(undefined4 param_1,byte param_2)

{
  Array<HkDataManagerImplement::ReserveUnit>::Array<HkDataManagerImplement::ReserveUnit>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0093BC10  lib::AllocatedArray<stNeedCharUnit*>::vf00  size=30  [class]
undefined4 __thiscall lib::AllocatedArray<stNeedCharUnit*>::vf00(undefined4 param_1,byte param_2)

{
  Array<stNeedCharUnit*>::Array<stNeedCharUnit*>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0093CE00  lib::AllocatedArray<DatsuSetTableImplement::Unit>::vf00  size=30  [class]
undefined4 __thiscall
lib::AllocatedArray<DatsuSetTableImplement::Unit>::vf00(undefined4 param_1,byte param_2)

{
  Array<DatsuSetTableImplement::Unit>::Array<DatsuSetTableImplement::Unit>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0093CE20  lib::AllocatedArray<DatsuSetTableResource*>::vf00  size=30  [class]
undefined4 __thiscall
lib::AllocatedArray<DatsuSetTableResource*>::vf00(undefined4 param_1,byte param_2)

{
  Array<DatsuSetTableResource*>::Array<DatsuSetTableResource*>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0093CE40  FUN_0093ce40  size=355  [between]
undefined4 __thiscall FUN_0093ce40(int param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_0164a424,7);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x2c))(param_1);
    (**(code **)(*param_2 + 0x14))(&DAT_0164a424,7);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_0164f2e0,7);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x2c))(param_1 + 4);
    (**(code **)(*param_2 + 0x14))(&DAT_0164f2e0,7);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_0164f2dc,7);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x2c))(param_1 + 8);
    (**(code **)(*param_2 + 0x14))(&DAT_0164f2dc,7);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))("yellow",7);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x2c))(param_1 + 0x10);
    (**(code **)(*param_2 + 0x14))("yellow",7);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))("white",7);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x2c))(param_1 + 0xc);
    (**(code **)(*param_2 + 0x14))("white",7);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))("rainbow",7);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x2c))(param_1 + 0x14);
    (**(code **)(*param_2 + 0x14))("rainbow",7);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_0164f2bc,7);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x2c))(param_1 + 0x18);
    (**(code **)(*param_2 + 0x14))(&DAT_0164f2bc,7);
  }
  return 1;
}

// 0093CFB0  lib::AllocatedArray<DatsuSetTableResource*>::AllocatedArray<DatsuSetTableResource*>  size=102  [class]
undefined4 * __thiscall
lib::AllocatedArray<DatsuSetTableResource*>::AllocatedArray<DatsuSetTableResource*>
          (undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  param_1[1] = param_2;
  *param_1 = DatsuSetTableManagerImplement::vftable;
  param_1[8] = 0;
  puVar1 = (undefined4 *)FUN_00dd3500(0x18,param_1[1]);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = vftable;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar2 = puVar1;
  }
  param_2 = param_1[1];
  FUN_0093cbe0(0x20,&param_2);
  param_1[10] = puVar2;
  FUN_00dd7240();
  return param_1;
}

// 0093D160  FUN_0093d160  size=62  [callgraph]
bool FUN_0093d160(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00dd3500(0x30,param_1);
  if (iVar1 != 0) {
    DAT_01b36a20 = lib::AllocatedArray<DatsuSetTableResource*>::
                   AllocatedArray<DatsuSetTableResource*>(param_1);
    return DAT_01b36a20 != 0;
  }
  DAT_01b36a20 = 0;
  return false;
}

// 0093D220  lib::AllocatedArray<DatsuSetTableImplement::Unit>::AllocatedArray<DatsuSetTableImplement::Unit>  size=304  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
lib::AllocatedArray<DatsuSetTableImplement::Unit>::AllocatedArray<DatsuSetTableImplement::Unit>
          (int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  int unaff_EBX;
  int iVar4;
  int iStack_4;
  
  cVar2 = (**(code **)*param_2)();
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(*param_2 + 0x10))("countOf",7);
    if (cVar2 != '\0') {
      (**(code **)(*param_2 + 0x2c))(&iStack_4);
      (**(code **)(*param_2 + 0x14))("countOf",7);
    }
    puVar3 = (undefined4 *)FUN_00dd3500(0x18,*(undefined4 *)(param_1 + 4));
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar3 = vftable;
      puVar3[4] = 0;
      puVar3[5] = 0;
    }
    FUN_0093cad0(iStack_4,&stack0xffffffd4);
    *(undefined4 **)(param_1 + 8) = puVar3;
    if (puVar3[1] != 0) {
      puVar3[2] = 0;
    }
    iVar4 = 0;
    if (0 < iStack_4) {
      do {
        if ((_DAT_01b36a4c & 1) == 0) {
          _DAT_01b36a4c = _DAT_01b36a4c | 1;
          DAT_01b36a48 = DAT_01884314;
          DAT_01884314 = DAT_01884314 + 1;
        }
        iVar1 = DAT_01b36a48;
        cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_0164a428,DAT_01b36a48);
        if (cVar2 != '\0') {
          FUN_0093ce40(param_2);
          (**(code **)(*param_2 + 0x14))(&DAT_0164a428,iVar1);
        }
        (**(code **)(**(int **)(unaff_EBX + 8) + 8))(&stack0xffffffd4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < iStack_4);
    }
  }
  return 1;
}

// 00943AD0  lib::AllocatedArray<DebrisExplodeParameterImplement::Unit>::vf00  size=30  [class]
undefined4 __thiscall
lib::AllocatedArray<DebrisExplodeParameterImplement::Unit>::vf00(undefined4 param_1,byte param_2)

{
  Array<DebrisExplodeParameterImplement::Unit>::Array<DebrisExplodeParameterImplement::Unit>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00943AF0  lib::AllocatedArray<DebrisExplodeParameterResource*>::vf00  size=30  [class]
undefined4 __thiscall
lib::AllocatedArray<DebrisExplodeParameterResource*>::vf00(undefined4 param_1,byte param_2)

{
  Array<DebrisExplodeParameterResource*>::Array<DebrisExplodeParameterResource*>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00943B10  FUN_00943b10  size=502  [between]
undefined4 __thiscall FUN_00943b10(int param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_0164a424,7);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x2c))(param_1);
    (**(code **)(*param_2 + 0x14))(&DAT_0164a424,7);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))("waitFrame",0xb);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x1c))(param_1 + 4);
    (**(code **)(*param_2 + 0x14))("waitFrame",0xb);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))("addFrame",0xb);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x1c))(param_1 + 8);
    (**(code **)(*param_2 + 0x14))("addFrame",0xb);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))("slowZangeki",7);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x2c))(param_1 + 0xc);
    (**(code **)(*param_2 + 0x14))("slowZangeki",7);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))("waitZangeki",7);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x2c))(param_1 + 0x10);
    (**(code **)(*param_2 + 0x14))("waitZangeki",7);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))("searchRange",0xb);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x14);
    (**(code **)(*param_2 + 0x14))("searchRange",0xb);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))("selfExplode",7);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x2c))(param_1 + 0x18);
    (**(code **)(*param_2 + 0x14))("selfExplode",7);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))("weightThreshold",0xb);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x1c);
    (**(code **)(*param_2 + 0x14))("weightThreshold",0xb);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))("selfExplodeInterval",0xb);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x20);
    (**(code **)(*param_2 + 0x14))("selfExplodeInterval",0xb);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))("selfExplodeAddInterval",0xb);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x24);
    (**(code **)(*param_2 + 0x14))("selfExplodeAddInterval",0xb);
  }
  return 1;
}

// 00943D10  lib::AllocatedArray<DebrisExplodeParameterResource*>::AllocatedArray<DebrisExplodeParameterResource*>  size=102  [class]
undefined4 * __thiscall
lib::AllocatedArray<DebrisExplodeParameterResource*>::
AllocatedArray<DebrisExplodeParameterResource*>(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  param_1[1] = param_2;
  *param_1 = DebrisExplodeParameterManagerImplement::vftable;
  param_1[8] = 0;
  puVar1 = (undefined4 *)FUN_00dd3500(0x18,param_1[1]);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = vftable;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar2 = puVar1;
  }
  param_2 = param_1[1];
  FUN_009438b0(0x20,&param_2);
  param_1[10] = puVar2;
  FUN_00dd7240();
  return param_1;
}

// 00943F70  FUN_00943f70  size=62  [callgraph]
bool FUN_00943f70(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00dd3500(0x30,param_1);
  if (iVar1 != 0) {
    DAT_01b36a50 = lib::AllocatedArray<DebrisExplodeParameterResource*>::
                   AllocatedArray<DebrisExplodeParameterResource*>(param_1);
    return DAT_01b36a50 != 0;
  }
  DAT_01b36a50 = 0;
  return false;
}

// 00944030  lib::AllocatedArray<DebrisExplodeParameterImplement::Unit>::AllocatedArray<DebrisExplodeParameterImplement::Unit>  size=304  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
lib::AllocatedArray<DebrisExplodeParameterImplement::Unit>::
AllocatedArray<DebrisExplodeParameterImplement::Unit>(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  int unaff_EBX;
  int iVar4;
  int iStack_4;
  
  cVar2 = (**(code **)*param_2)();
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(*param_2 + 0x10))("countOf",7);
    if (cVar2 != '\0') {
      (**(code **)(*param_2 + 0x2c))(&iStack_4);
      (**(code **)(*param_2 + 0x14))("countOf",7);
    }
    puVar3 = (undefined4 *)FUN_00dd3500(0x18,*(undefined4 *)(param_1 + 4));
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar3 = vftable;
      puVar3[4] = 0;
      puVar3[5] = 0;
    }
    FUN_009437b0(iStack_4,&stack0xffffffc8);
    *(undefined4 **)(param_1 + 8) = puVar3;
    if (puVar3[1] != 0) {
      puVar3[2] = 0;
    }
    iVar4 = 0;
    if (0 < iStack_4) {
      do {
        if ((_DAT_01b3732c & 1) == 0) {
          _DAT_01b3732c = _DAT_01b3732c | 1;
          DAT_01b37328 = DAT_01884314;
          DAT_01884314 = DAT_01884314 + 1;
        }
        iVar1 = DAT_01b37328;
        cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_0164a428,DAT_01b37328);
        if (cVar2 != '\0') {
          FUN_00943b10(param_2);
          (**(code **)(*param_2 + 0x14))(&DAT_0164a428,iVar1);
        }
        (**(code **)(**(int **)(unaff_EBX + 8) + 8))(&stack0xffffffc8);
        iVar4 = iVar4 + 1;
      } while (iVar4 < iStack_4);
    }
  }
  return 1;
}

// 009490C0  lib::AllocatedArray<stGimmickInfoData*>::vf00  size=30  [class]
undefined4 __thiscall lib::AllocatedArray<stGimmickInfoData*>::vf00(undefined4 param_1,byte param_2)

{
  Array<stGimmickInfoData*>::Array<stGimmickInfoData*>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00956BA0  lib::AllocatedArray<stItemData*>::vf00  size=30  [class]
undefined4 __thiscall lib::AllocatedArray<stItemData*>::vf00(undefined4 param_1,byte param_2)

{
  Array<stItemData*>::Array<stItemData*>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00956BC0  lib::AllocatedArray<stItemDropData*>::vf00  size=30  [class]
undefined4 __thiscall lib::AllocatedArray<stItemDropData*>::vf00(undefined4 param_1,byte param_2)

{
  Array<stItemDropData*>::Array<stItemDropData*>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A55F90  lib::AllocatedArray<cMesh*>::vf04  size=4  [class]
undefined4 __fastcall lib::AllocatedArray<cMesh*>::vf04(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// 00A56210  lib::AllocatedArray<cAntiqueScrollWork::PlaneInfo>::vf04  size=4  [class]
undefined4 __fastcall lib::AllocatedArray<cAntiqueScrollWork::PlaneInfo>::vf04(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// 00A62BB0  lib::AllocatedArray<AutoRotateController::Unit>::AllocatedArray<AutoRotateController::Unit>  size=82  [class]
void __thiscall
lib::AllocatedArray<AutoRotateController::Unit>::AllocatedArray<AutoRotateController::Unit>
          (undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *local_4;
  
  local_4 = param_1;
  puVar1 = (undefined4 *)FUN_00dd3500(0x18,&DAT_01b7bd48);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = vftable;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar2 = puVar1;
  }
  local_4 = &DAT_01b7bd48;
  FUN_00a62480(param_2,&local_4);
  *param_1 = puVar2;
  return;
}

// 00A62C10  lib::AllocatedArray<cMesh*>::AllocatedArray<cMesh*>  size=310  [class]
undefined4 __thiscall
lib::AllocatedArray<cMesh*>::AllocatedArray<cMesh*>
          (undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)FUN_00dd3500(0x18,&DAT_01b7bd48);
  iVar1 = (int)param_2;
  if (local_8 == (undefined4 *)0x0) {
    local_8 = (undefined4 *)0x0;
  }
  else {
    local_8[1] = 0;
    local_8[2] = 0;
    local_8[3] = 0;
    *local_8 = vftable;
    local_8[4] = 0;
    local_8[5] = 0;
  }
  iVar2 = (int)*(short *)((int)param_2 + 0x324);
  iVar4 = 0;
  iVar5 = 0;
  if (0 < iVar2) {
    iVar3 = 0;
    do {
      if ((iVar5 < 0) || (iVar2 <= iVar5)) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar1 + 800) + iVar3;
      }
      iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 0x40);
      if ((iVar2 != 0) && (iVar2 = FUN_00fdbbd0(iVar2,param_3), iVar2 != 0)) {
        iVar4 = iVar4 + 1;
      }
      iVar2 = (int)*(short *)(iVar1 + 0x324);
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + 0x70;
    } while (iVar5 < iVar2);
  }
  *param_1 = 0;
  if (iVar4 != 0) {
    param_2 = &DAT_01b7bd48;
    FUN_00a62570(iVar4,&param_2);
    *param_1 = local_8;
    iVar2 = (int)*(short *)(iVar1 + 0x324);
    iVar4 = 0;
    if (0 < iVar2) {
      iVar5 = 0;
      do {
        if ((iVar4 < 0) || (iVar2 <= iVar4)) {
          param_2 = (undefined4 *)0x0;
        }
        else {
          param_2 = (undefined4 *)(*(int *)(iVar1 + 800) + iVar5);
        }
        iVar2 = *(int *)(*(int *)((int)param_2 + 0x60) + 0x40);
        if ((iVar2 != 0) && (iVar2 = FUN_00fdbbd0(iVar2,param_3), iVar2 != 0)) {
          (**(code **)(*(int *)*param_1 + 8))(&param_2);
        }
        iVar2 = (int)*(short *)(iVar1 + 0x324);
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar4 < iVar2);
    }
  }
  return 1;
}

// 00A631F0  lib::AllocatedArray<AntiqueScrollMultipleData::Unit>::AllocatedArray<AntiqueScrollMultipleData::Unit>  size=2761  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
lib::AllocatedArray<AntiqueScrollMultipleData::Unit>::
AllocatedArray<AntiqueScrollMultipleData::Unit>(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  int *piStack_180;
  char *pcStack_17c;
  int *piStack_178;
  char *pcStack_174;
  int *piStack_170;
  char *pcStack_16c;
  int *piStack_168;
  char *pcStack_164;
  int *piStack_160;
  char *pcStack_15c;
  int *piStack_158;
  char *pcStack_154;
  int *piStack_150;
  char *pcStack_14c;
  int *piStack_148;
  char *pcStack_144;
  int *piStack_140;
  char *pcStack_13c;
  int *piStack_138;
  char *pcStack_134;
  int *piStack_130;
  char *pcStack_12c;
  int *piStack_128;
  char *pcStack_124;
  int *piStack_120;
  char *pcStack_11c;
  int *piStack_118;
  char *pcStack_114;
  int *piStack_110;
  char *pcStack_10c;
  int *piStack_108;
  char *pcStack_104;
  int *piStack_100;
  char *pcStack_fc;
  int *piStack_f8;
  char *pcStack_f4;
  int *piStack_f0;
  char *pcStack_ec;
  int *piStack_e8;
  char *pcStack_e4;
  int *piStack_e0;
  char *pcStack_dc;
  int *piStack_d8;
  char *pcStack_d4;
  int *piStack_d0;
  char *pcStack_cc;
  int *piStack_c8;
  char *pcStack_c4;
  undefined4 uStack_c0;
  
  uStack_c0 = 7;
  pcStack_c4 = "countOfBaseUnits";
  piStack_c8 = (int *)0xa63213;
  cVar3 = (**(code **)(*param_2 + 0x10))();
  if (cVar3 != '\0') {
    pcStack_cc = (char *)0xa63221;
    piStack_c8 = param_1;
    (**(code **)(*param_2 + 0x2c))();
    pcStack_cc = (char *)0x7;
    piStack_d0 = (int *)0x1662928;
    pcStack_d4 = (char *)0xa63231;
    (**(code **)(*param_2 + 0x14))();
  }
  piStack_c8 = (int *)0x7;
  pcStack_cc = "countOfBranchBeginUnits";
  piStack_d0 = (int *)0xa63241;
  cVar3 = (**(code **)(*param_2 + 0x10))();
  if (cVar3 != '\0') {
    piStack_d0 = param_1 + 1;
    pcStack_d4 = (char *)0xa63252;
    (**(code **)(*param_2 + 0x2c))();
    pcStack_d4 = (char *)0x7;
    piStack_d8 = (int *)0x1662adc;
    pcStack_dc = (char *)0xa63262;
    (**(code **)(*param_2 + 0x14))();
  }
  piStack_d0 = (int *)0x7;
  pcStack_d4 = "countOfBranchEndUnits";
  piStack_d8 = (int *)0xa63272;
  cVar3 = (**(code **)(*param_2 + 0x10))();
  if (cVar3 != '\0') {
    piStack_d8 = param_1 + 2;
    pcStack_dc = (char *)0xa63283;
    (**(code **)(*param_2 + 0x2c))();
    pcStack_dc = (char *)0x7;
    piStack_e0 = (int *)0x1662ac4;
    pcStack_e4 = (char *)0xa63293;
    (**(code **)(*param_2 + 0x14))();
  }
  piStack_d8 = (int *)0x7;
  pcStack_dc = "countOfBranchUnits";
  piStack_e0 = (int *)0xa632a3;
  cVar3 = (**(code **)(*param_2 + 0x10))();
  if (cVar3 != '\0') {
    piStack_e0 = param_1 + 3;
    pcStack_e4 = (char *)0xa632b4;
    (**(code **)(*param_2 + 0x2c))();
    pcStack_e4 = (char *)0x7;
    piStack_e8 = (int *)0x1662914;
    pcStack_ec = (char *)0xa632c4;
    (**(code **)(*param_2 + 0x14))();
  }
  piStack_e0 = (int *)0x7;
  pcStack_e4 = "countOfStartUnits";
  piStack_e8 = (int *)0xa632d4;
  cVar3 = (**(code **)(*param_2 + 0x10))();
  if (cVar3 == '\0') {
LAB_00a632fb:
    param_1[4] = 0;
  }
  else {
    piStack_e8 = param_1 + 4;
    pcStack_ec = (char *)0xa632e5;
    cVar3 = (**(code **)(*param_2 + 0x2c))();
    pcStack_ec = (char *)0x7;
    piStack_f0 = (int *)0x1662ab0;
    pcStack_f4 = (char *)0xa632f7;
    (**(code **)(*param_2 + 0x14))();
    if (cVar3 == '\0') goto LAB_00a632fb;
  }
  piStack_e8 = (int *)0x7;
  pcStack_ec = "countOfEndUnits";
  piStack_f0 = (int *)0xa63312;
  cVar3 = (**(code **)(*param_2 + 0x10))();
  if (cVar3 == '\0') {
LAB_00a63339:
    param_1[5] = 0;
  }
  else {
    piStack_f0 = param_1 + 5;
    pcStack_f4 = (char *)0xa63323;
    cVar3 = (**(code **)(*param_2 + 0x2c))();
    pcStack_f4 = (char *)0x7;
    piStack_f8 = (int *)0x1662aa0;
    pcStack_fc = (char *)0xa63335;
    (**(code **)(*param_2 + 0x14))();
    if (cVar3 == '\0') goto LAB_00a63339;
  }
  piStack_f0 = (int *)0x7;
  pcStack_f4 = "countOfDecorationUnits";
  piStack_f8 = (int *)0xa63350;
  cVar3 = (**(code **)(*param_2 + 0x10))();
  if (cVar3 != '\0') {
    piStack_f8 = param_1 + 6;
    pcStack_fc = (char *)0xa63361;
    (**(code **)(*param_2 + 0x2c))();
    pcStack_fc = (char *)0x7;
    piStack_100 = (int *)0x16628fc;
    pcStack_104 = (char *)0xa63371;
    (**(code **)(*param_2 + 0x14))();
  }
  piStack_f8 = (int *)0xb;
  pcStack_fc = "lengthTotal";
  piStack_100 = (int *)0xa63381;
  cVar3 = (**(code **)(*param_2 + 0x10))();
  if (cVar3 != '\0') {
    piStack_100 = param_1 + 7;
    pcStack_104 = (char *)0xa63392;
    (**(code **)(*param_2 + 0x1c))();
    pcStack_104 = (char *)0xb;
    piStack_108 = (int *)0x1662964;
    pcStack_10c = (char *)0xa633a2;
    (**(code **)(*param_2 + 0x14))();
  }
  piStack_100 = (int *)0xb;
  pcStack_104 = "lengthOfUnit";
  piStack_108 = (int *)0xa633b2;
  cVar3 = (**(code **)(*param_2 + 0x10))();
  if (cVar3 != '\0') {
    piStack_108 = param_1 + 8;
    pcStack_10c = (char *)0xa633c3;
    (**(code **)(*param_2 + 0x1c))();
    pcStack_10c = (char *)0xb;
    piStack_110 = (int *)0x1662954;
    pcStack_114 = (char *)0xa633d3;
    (**(code **)(*param_2 + 0x14))();
  }
  piStack_108 = (int *)0xb;
  pcStack_10c = "lengthOfUnitUnder";
  piStack_110 = (int *)0xa633e3;
  cVar3 = (**(code **)(*param_2 + 0x10))();
  if (cVar3 == '\0') {
LAB_00a6340a:
    param_1[9] = 0;
  }
  else {
    piStack_110 = param_1 + 9;
    pcStack_114 = (char *)0xa633f4;
    cVar3 = (**(code **)(*param_2 + 0x1c))();
    pcStack_114 = (char *)0xb;
    piStack_118 = (int *)0x1662a8c;
    pcStack_11c = (char *)0xa63406;
    (**(code **)(*param_2 + 0x14))();
    if (cVar3 == '\0') goto LAB_00a6340a;
  }
  piStack_110 = (int *)0xb;
  pcStack_114 = "lengthOfStUnit";
  piStack_118 = (int *)0xa6341f;
  cVar3 = (**(code **)(*param_2 + 0x10))();
  if (cVar3 == '\0') {
LAB_00a63446:
    param_1[0xf] = 0;
  }
  else {
    piStack_118 = param_1 + 0xf;
    pcStack_11c = (char *)0xa63430;
    cVar3 = (**(code **)(*param_2 + 0x1c))();
    pcStack_11c = (char *)0xb;
    piStack_120 = (int *)0x1662a7c;
    pcStack_124 = (char *)0xa63442;
    (**(code **)(*param_2 + 0x14))();
    if (cVar3 == '\0') goto LAB_00a63446;
  }
  piStack_118 = (int *)0xb;
  pcStack_11c = "lengthOfStUnitUnder";
  piStack_120 = (int *)0xa6345b;
  cVar3 = (**(code **)(*param_2 + 0x10))();
  if (cVar3 == '\0') {
LAB_00a63482:
    param_1[0x10] = 0;
  }
  else {
    piStack_120 = param_1 + 0x10;
    pcStack_124 = (char *)0xa6346c;
    cVar3 = (**(code **)(*param_2 + 0x1c))();
    pcStack_124 = (char *)0xb;
    piStack_128 = (int *)0x1662a68;
    pcStack_12c = (char *)0xa6347e;
    (**(code **)(*param_2 + 0x14))();
    if (cVar3 == '\0') goto LAB_00a63482;
  }
  piStack_120 = (int *)0xb;
  pcStack_124 = "lengthOfEndUnit";
  piStack_128 = (int *)0xa63497;
  cVar3 = (**(code **)(*param_2 + 0x10))();
  if (cVar3 == '\0') {
LAB_00a634be:
    param_1[0x11] = 0;
  }
  else {
    piStack_128 = param_1 + 0x11;
    pcStack_12c = (char *)0xa634a8;
    cVar3 = (**(code **)(*param_2 + 0x1c))();
    pcStack_12c = (char *)0xb;
    piStack_130 = (int *)0x1662a58;
    pcStack_134 = (char *)0xa634ba;
    (**(code **)(*param_2 + 0x14))();
    if (cVar3 == '\0') goto LAB_00a634be;
  }
  piStack_128 = (int *)0xb;
  pcStack_12c = "lengthOfEndUnitUnder";
  piStack_130 = (int *)0xa634d3;
  cVar3 = (**(code **)(*param_2 + 0x10))();
  if (cVar3 == '\0') {
LAB_00a634fa:
    param_1[0x12] = 0;
  }
  else {
    piStack_130 = param_1 + 0x12;
    pcStack_134 = (char *)0xa634e4;
    cVar3 = (**(code **)(*param_2 + 0x1c))();
    pcStack_134 = (char *)0xb;
    piStack_138 = (int *)0x1662a40;
    pcStack_13c = (char *)0xa634f6;
    (**(code **)(*param_2 + 0x14))();
    if (cVar3 == '\0') goto LAB_00a634fa;
  }
  piStack_130 = (int *)0x7;
  pcStack_134 = "branchEnable";
  piStack_138 = (int *)0xa6350f;
  cVar3 = (**(code **)(*param_2 + 0x10))();
  if (cVar3 != '\0') {
    piStack_138 = param_1 + 10;
    pcStack_13c = (char *)0xa63520;
    (**(code **)(*param_2 + 0x2c))();
    pcStack_13c = (char *)0x7;
    piStack_140 = (int *)0x1662944;
    pcStack_144 = (char *)0xa63530;
    (**(code **)(*param_2 + 0x14))();
  }
  piStack_138 = (int *)0xb;
  pcStack_13c = "speed";
  piStack_140 = (int *)0xa63540;
  cVar3 = (**(code **)(*param_2 + 0x10))();
  if (cVar3 != '\0') {
    piStack_140 = param_1 + 0xb;
    pcStack_144 = (char *)0xa63551;
    (**(code **)(*param_2 + 0x1c))();
    pcStack_144 = (char *)0xb;
    piStack_148 = (int *)0x166293c;
    pcStack_14c = (char *)0xa63561;
    (**(code **)(*param_2 + 0x14))();
  }
  piStack_140 = (int *)0x7;
  pcStack_144 = "direction";
  piStack_148 = (int *)0xa63571;
  cVar3 = (**(code **)(*param_2 + 0x10))();
  if (cVar3 == '\0') {
LAB_00a63598:
    param_1[0xc] = 2;
  }
  else {
    piStack_148 = param_1 + 0xc;
    pcStack_14c = (char *)0xa63582;
    cVar3 = (**(code **)(*param_2 + 0x2c))();
    pcStack_14c = (char *)0x7;
    piStack_150 = (int *)0x1662a34;
    pcStack_154 = (char *)0xa63594;
    (**(code **)(*param_2 + 0x14))();
    if (cVar3 == '\0') goto LAB_00a63598;
  }
  piStack_148 = (int *)0x7;
  pcStack_14c = "originObjId";
  piStack_150 = (int *)0xa635af;
  cVar3 = (**(code **)(*param_2 + 0x10))();
  if (cVar3 == '\0') {
LAB_00a635d6:
    param_1[0xd] = -1;
  }
  else {
    piStack_150 = param_1 + 0xd;
    pcStack_154 = (char *)0xa635c0;
    cVar3 = (**(code **)(*param_2 + 0x2c))();
    pcStack_154 = (char *)0x7;
    piStack_158 = (int *)0x1662a28;
    pcStack_15c = (char *)0xa635d2;
    (**(code **)(*param_2 + 0x14))();
    if (cVar3 == '\0') goto LAB_00a635d6;
  }
  piStack_150 = (int *)0x7;
  pcStack_154 = "initialMove";
  piStack_158 = (int *)0xa635ed;
  cVar3 = (**(code **)(*param_2 + 0x10))();
  if (cVar3 == '\0') {
LAB_00a63614:
    param_1[0xe] = 1;
  }
  else {
    piStack_158 = param_1 + 0xe;
    pcStack_15c = (char *)0xa635fe;
    cVar3 = (**(code **)(*param_2 + 0x2c))();
    pcStack_15c = (char *)0x7;
    piStack_160 = (int *)0x1662a1c;
    pcStack_164 = (char *)0xa63610;
    (**(code **)(*param_2 + 0x14))();
    if (cVar3 == '\0') goto LAB_00a63614;
  }
  piStack_158 = (int *)0xb;
  pcStack_15c = "timeOfSlowStart";
  piStack_160 = (int *)0xa6362b;
  cVar3 = (**(code **)(*param_2 + 0x10))();
  if (cVar3 == '\0') {
LAB_00a63652:
    param_1[0x13] = 0;
  }
  else {
    piStack_160 = param_1 + 0x13;
    pcStack_164 = (char *)0xa6363c;
    cVar3 = (**(code **)(*param_2 + 0x1c))();
    pcStack_164 = (char *)0xb;
    piStack_168 = (int *)0x1662a0c;
    pcStack_16c = (char *)0xa6364e;
    (**(code **)(*param_2 + 0x14))();
    if (cVar3 == '\0') goto LAB_00a63652;
  }
  piStack_160 = (int *)0xb;
  pcStack_164 = "distanceOfSlowEnd";
  piStack_168 = (int *)0xa63667;
  cVar3 = (**(code **)(*param_2 + 0x10))();
  if (cVar3 == '\0') {
LAB_00a6368e:
    param_1[0x14] = 0;
  }
  else {
    piStack_168 = param_1 + 0x14;
    pcStack_16c = (char *)0xa63678;
    cVar3 = (**(code **)(*param_2 + 0x1c))();
    pcStack_16c = (char *)0xb;
    piStack_170 = (int *)0x16629f8;
    pcStack_174 = (char *)0xa6368a;
    (**(code **)(*param_2 + 0x14))();
    if (cVar3 == '\0') goto LAB_00a6368e;
  }
  piStack_168 = (int *)0xb;
  pcStack_16c = "distanceOfUnitErase";
  piStack_170 = (int *)0xa636a3;
  cVar3 = (**(code **)(*param_2 + 0x10))();
  if (cVar3 == '\0') {
LAB_00a636ca:
    param_1[0x15] = param_1[7];
  }
  else {
    piStack_170 = param_1 + 0x15;
    pcStack_174 = (char *)0xa636b4;
    cVar3 = (**(code **)(*param_2 + 0x1c))();
    pcStack_174 = (char *)0xb;
    piStack_178 = (int *)0x16629e4;
    pcStack_17c = (char *)0xa636c6;
    (**(code **)(*param_2 + 0x14))();
    if (cVar3 == '\0') goto LAB_00a636ca;
  }
  piStack_170 = (int *)0xb;
  pcStack_174 = "distanceOfStSetting";
  piStack_178 = (int *)0xa636e0;
  cVar3 = (**(code **)(*param_2 + 0x10))();
  if (cVar3 == '\0') {
LAB_00a63707:
    param_1[0x16] = (int)-(float)param_1[7];
  }
  else {
    piStack_178 = param_1 + 0x16;
    pcStack_17c = (char *)0xa636f1;
    cVar3 = (**(code **)(*param_2 + 0x1c))();
    pcStack_17c = (char *)0xb;
    piStack_180 = (int *)0x16629d0;
    (**(code **)(*param_2 + 0x14))();
    if (cVar3 == '\0') goto LAB_00a63707;
  }
  piStack_178 = (int *)0xb;
  pcStack_17c = "distanceOfEndUnit";
  piStack_180 = (int *)0xa63722;
  cVar3 = (**(code **)(*param_2 + 0x10))();
  if (cVar3 == '\0') {
LAB_00a63749:
    param_1[0x17] = param_1[7];
  }
  else {
    piStack_180 = param_1 + 0x17;
    cVar3 = (**(code **)(*param_2 + 0x1c))();
    (**(code **)(*param_2 + 0x14))("distanceOfEndUnit",0xb);
    if (cVar3 == '\0') goto LAB_00a63749;
  }
  piStack_180 = (int *)0xb;
  cVar3 = (**(code **)(*param_2 + 0x10))("distanceOfEndUnitStSetting");
  if (cVar3 == '\0') {
LAB_00a63786:
    param_1[0x18] = param_1[0x16];
  }
  else {
    cVar3 = (**(code **)(*param_2 + 0x1c))(param_1 + 0x18);
    (**(code **)(*param_2 + 0x14))("distanceOfEndUnitStSetting",0xb);
    if (cVar3 == '\0') goto LAB_00a63786;
  }
  cVar3 = (**(code **)(*param_2 + 0x10))("distanceOfBehindUnitErase",0xb);
  if (cVar3 == '\0') {
LAB_00a637c3:
    param_1[0x19] = param_1[7];
  }
  else {
    cVar3 = (**(code **)(*param_2 + 0x1c))(param_1 + 0x19);
    (**(code **)(*param_2 + 0x14))("distanceOfBehindUnitErase",0xb);
    if (cVar3 == '\0') goto LAB_00a637c3;
  }
  cVar3 = (**(code **)(*param_2 + 0x10))("decorationUnitsMax",7);
  if (cVar3 != '\0') {
    cVar3 = (**(code **)(*param_2 + 0x2c))(param_1 + 0x1a);
    (**(code **)(*param_2 + 0x14))("decorationUnitsMax",7);
    if (cVar3 != '\0') goto LAB_00a63807;
  }
  param_1[0x1a] = 10;
LAB_00a63807:
  iVar6 = param_1[6];
  iVar1 = *param_1;
  iVar2 = param_1[3];
  piVar4 = (int *)FUN_00dd3500(0x18,&DAT_01b7bd48);
  pcVar5 = (char *)0x0;
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4[1] = 0;
    piVar4[2] = 0;
    piVar4[3] = 0;
    *piVar4 = (int)vftable;
    piVar4[4] = 0;
    piVar4[5] = 0;
  }
  piStack_180 = &DAT_01b7bd48;
  FUN_00a62880(iVar6 + iVar1 + 4 + iVar2,&piStack_180);
  if (0 < *param_1) {
    do {
      if ((_DAT_01be995c & 1) == 0) {
        _DAT_01be995c = _DAT_01be995c | 1;
        DAT_01be9958 = DAT_01884314;
        DAT_01884314 = DAT_01884314 + 1;
      }
      iVar6 = DAT_01be9958;
      cVar3 = (**(code **)(*param_2 + 0x10))(&DAT_0164a428,DAT_01be9958);
      if (cVar3 != '\0') {
        FUN_00a5eb00(param_2);
        (**(code **)(*param_2 + 0x14))(&DAT_0164a428,iVar6);
      }
      if (pcStack_17c != (char *)0xffffffff) {
        piStack_e0 = (int *)0x0;
        pcStack_dc = pcVar5;
        (**(code **)(*piVar4 + 8))(&pcStack_17c);
      }
      pcVar5 = pcVar5 + 1;
    } while ((int)pcVar5 < *param_1);
  }
  iVar6 = 0;
  if (0 < param_1[1]) {
    do {
      if ((_DAT_01be995c & 1) == 0) {
        _DAT_01be995c = _DAT_01be995c | 1;
        DAT_01be9958 = DAT_01884314;
        DAT_01884314 = DAT_01884314 + 1;
      }
      iVar1 = DAT_01be9958;
      cVar3 = (**(code **)(*param_2 + 0x10))(&DAT_0164a428,DAT_01be9958);
      if (cVar3 != '\0') {
        FUN_00a5eb00(param_2);
        (**(code **)(*param_2 + 0x14))(&DAT_0164a428,iVar1);
      }
      if (pcStack_17c != (char *)0xffffffff) {
        piStack_e0 = (int *)0x1;
        pcStack_dc = (char *)0x0;
        (**(code **)(*piVar4 + 8))(&pcStack_17c);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_1[1]);
  }
  iVar6 = 0;
  if (0 < param_1[2]) {
    do {
      if ((_DAT_01be995c & 1) == 0) {
        _DAT_01be995c = _DAT_01be995c | 1;
        DAT_01be9958 = DAT_01884314;
        DAT_01884314 = DAT_01884314 + 1;
      }
      iVar1 = DAT_01be9958;
      cVar3 = (**(code **)(*param_2 + 0x10))(&DAT_0164a428,DAT_01be9958);
      if (cVar3 != '\0') {
        FUN_00a5eb00(param_2);
        (**(code **)(*param_2 + 0x14))(&DAT_0164a428,iVar1);
      }
      if (pcStack_17c != (char *)0xffffffff) {
        piStack_e0 = (int *)0x2;
        pcStack_dc = (char *)0x0;
        (**(code **)(*piVar4 + 8))(&pcStack_17c);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_1[2]);
  }
  pcVar5 = (char *)0x0;
  if (0 < param_1[3]) {
    do {
      if ((_DAT_01be995c & 1) == 0) {
        _DAT_01be995c = _DAT_01be995c | 1;
        DAT_01be9958 = DAT_01884314;
        DAT_01884314 = DAT_01884314 + 1;
      }
      iVar6 = DAT_01be9958;
      cVar3 = (**(code **)(*param_2 + 0x10))(&DAT_0164a428,DAT_01be9958);
      if (cVar3 != '\0') {
        FUN_00a5eb00(param_2);
        (**(code **)(*param_2 + 0x14))(&DAT_0164a428,iVar6);
      }
      if (pcStack_17c != (char *)0xffffffff) {
        piStack_e0 = (int *)0x3;
        pcStack_dc = pcVar5;
        (**(code **)(*piVar4 + 8))(&pcStack_17c);
      }
      pcVar5 = pcVar5 + 1;
    } while ((int)pcVar5 < param_1[3]);
  }
  pcVar5 = (char *)0x0;
  if (0 < param_1[4]) {
    do {
      if ((_DAT_01be995c & 1) == 0) {
        _DAT_01be995c = _DAT_01be995c | 1;
        DAT_01be9958 = DAT_01884314;
        DAT_01884314 = DAT_01884314 + 1;
      }
      iVar6 = DAT_01be9958;
      cVar3 = (**(code **)(*param_2 + 0x10))(&DAT_0164a428,DAT_01be9958);
      if (cVar3 != '\0') {
        FUN_00a5eb00(param_2);
        (**(code **)(*param_2 + 0x14))(&DAT_0164a428,iVar6);
      }
      if (pcStack_17c != (char *)0xffffffff) {
        piStack_e0 = (int *)0x4;
        pcStack_dc = pcVar5;
        (**(code **)(*piVar4 + 8))(&pcStack_17c);
      }
      pcVar5 = pcVar5 + 1;
    } while ((int)pcVar5 < param_1[4]);
  }
  pcVar5 = (char *)0x0;
  if (0 < param_1[5]) {
    do {
      if ((_DAT_01be995c & 1) == 0) {
        _DAT_01be995c = _DAT_01be995c | 1;
        DAT_01be9958 = DAT_01884314;
        DAT_01884314 = DAT_01884314 + 1;
      }
      iVar6 = DAT_01be9958;
      cVar3 = (**(code **)(*param_2 + 0x10))(&DAT_0164a428,DAT_01be9958);
      if (cVar3 != '\0') {
        FUN_00a5eb00(param_2);
        (**(code **)(*param_2 + 0x14))(&DAT_0164a428,iVar6);
      }
      if (pcStack_17c != (char *)0xffffffff) {
        piStack_e0 = (int *)0x5;
        pcStack_dc = pcVar5;
        (**(code **)(*piVar4 + 8))(&pcStack_17c);
      }
      pcVar5 = pcVar5 + 1;
    } while ((int)pcVar5 < param_1[5]);
  }
  pcVar5 = (char *)0x0;
  if (param_1[6] < 1) {
    param_1[0x1b] = (int)piVar4;
    return 1;
  }
  do {
    if ((_DAT_01be995c & 1) == 0) {
      _DAT_01be995c = _DAT_01be995c | 1;
      DAT_01be9958 = DAT_01884314;
      DAT_01884314 = DAT_01884314 + 1;
    }
    iVar6 = DAT_01be9958;
    cVar3 = (**(code **)(*param_2 + 0x10))(&DAT_0164a428,DAT_01be9958);
    if (cVar3 != '\0') {
      FUN_00a5eb00(param_2);
      (**(code **)(*param_2 + 0x14))(&DAT_0164a428,iVar6);
    }
    if (pcStack_17c != (char *)0xffffffff) {
      piStack_e0 = (int *)0x6;
      pcStack_dc = pcVar5;
      (**(code **)(*piVar4 + 8))(&pcStack_17c);
    }
    pcVar5 = pcVar5 + 1;
  } while ((int)pcVar5 < param_1[6]);
  param_1[0x1b] = (int)piVar4;
  return 1;
}

// 00A63CC0  lib::AllocatedArray<eObjId>::AllocatedArray<eObjId>  size=166  [class]
undefined4 __fastcall lib::AllocatedArray<eObjId>::AllocatedArray<eObjId>(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int local_4;
  
  local_4 = param_1;
  if (*(int *)(param_1 + 4) == 0) {
    iVar1 = FUN_00a5a420();
    if (*(int *)(param_1 + 0xb4) != -1) {
      iVar1 = iVar1 + 2;
    }
    puVar2 = (undefined4 *)FUN_00dd3500(0x18,*(undefined4 *)(param_1 + 0x14));
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = vftable;
    puVar2[4] = 0;
    puVar2[5] = 0;
    local_4 = *(int *)(param_1 + 0x14);
    FUN_00a62a90(iVar1,&local_4);
    *(undefined4 **)(param_1 + 4) = puVar2;
  }
  if (*(int *)(*(int *)(param_1 + 4) + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 8) = 0;
  }
  FUN_00a60680(*(undefined4 *)(param_1 + 4));
  if (*(int *)(param_1 + 0xb4) != -1) {
    (**(code **)(**(int **)(param_1 + 4) + 8))(param_1 + 0xb4);
  }
  return 1;
}

// 00A64100  lib::AllocatedArray<AutoRotateController::Unit>::vf00  size=30  [class]
undefined4 __thiscall
lib::AllocatedArray<AutoRotateController::Unit>::vf00(undefined4 param_1,byte param_2)

{
  Array<AutoRotateController::Unit>::Array<AutoRotateController::Unit>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A64120  lib::AllocatedArray<cMesh*>::vf00  size=30  [class]
undefined4 __thiscall lib::AllocatedArray<cMesh*>::vf00(undefined4 param_1,byte param_2)

{
  Array<cMesh*>::Array<cMesh*>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A64140  lib::AllocatedArray<AntiqueScrollData::Unit>::vf00  size=30  [class]
undefined4 __thiscall
lib::AllocatedArray<AntiqueScrollData::Unit>::vf00(undefined4 param_1,byte param_2)

{
  Array<AntiqueScrollData::Unit>::Array<AntiqueScrollData::Unit>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A64160  lib::AllocatedArray<AntiqueScrollMultipleData::UnitInfo>::vf00  size=30  [class]
undefined4 __thiscall
lib::AllocatedArray<AntiqueScrollMultipleData::UnitInfo>::vf00(undefined4 param_1,byte param_2)

{
  Array<AntiqueScrollMultipleData::UnitInfo>::Array<AntiqueScrollMultipleData::UnitInfo>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A64180  lib::AllocatedArray<AntiqueScrollMultipleData::Unit>::vf00  size=30  [class]
undefined4 __thiscall
lib::AllocatedArray<AntiqueScrollMultipleData::Unit>::vf00(undefined4 param_1,byte param_2)

{
  Array<AntiqueScrollMultipleData::Unit>::Array<AntiqueScrollMultipleData::Unit>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A641A0  lib::AllocatedArray<cAntiqueScrollWork::PlaneInfo>::vf00  size=30  [class]
undefined4 __thiscall
lib::AllocatedArray<cAntiqueScrollWork::PlaneInfo>::vf00(undefined4 param_1,byte param_2)

{
  Array<cAntiqueScrollWork::PlaneInfo>::Array<cAntiqueScrollWork::PlaneInfo>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A641C0  lib::AllocatedArray<eObjId>::vf00  size=30  [class]
undefined4 __thiscall lib::AllocatedArray<eObjId>::vf00(undefined4 param_1,byte param_2)

{
  Array<eObjId>::Array<eObjId>_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A652B0  lib::AllocatedArray<AntiqueScrollMultipleData::UnitInfo>::AllocatedArray<AntiqueScrollMultipleData::UnitInfo>  size=360  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char __thiscall
lib::AllocatedArray<AntiqueScrollMultipleData::UnitInfo>::
AllocatedArray<AntiqueScrollMultipleData::UnitInfo>(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 unaff_EBP;
  int unaff_ESI;
  undefined4 *puStack_47c;
  int local_478 [28];
  undefined1 auStack_408 [1032];
  
  local_478[0] = param_1;
  cVar2 = (**(code **)(*param_2 + 0x10))("unitMax",8);
  if (cVar2 != '\0') {
    (**(code **)(*param_2 + 0x28))(param_1 + 0x1c);
    (**(code **)(*param_2 + 0x14))("unitMax",8);
  }
  puVar3 = (undefined4 *)FUN_00dd3500(0x18,&DAT_01b7bd48);
  uVar5 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = vftable;
    puVar3[4] = 0;
    puVar3[5] = 0;
  }
  puStack_47c = &DAT_01b7bd48;
  FUN_00a62780(*(undefined4 *)(param_1 + 0x1c),&puStack_47c);
  *(undefined4 **)(param_1 + 0x24) = puVar3;
  if (*(int *)(param_1 + 0x1c) == 0) {
    cVar2 = '\0';
  }
  else {
    while( true ) {
      _memset(local_478,0,0x70);
      uVar4 = FUN_00959930(auStack_408,"unitParts%d",uVar5);
      if ((_DAT_01be9964 & 1) == 0) {
        _DAT_01be9964 = _DAT_01be9964 | 1;
        DAT_01be9960 = DAT_01884314;
        DAT_01884314 = DAT_01884314 + 1;
      }
      iVar1 = DAT_01be9960;
      cVar2 = (**(code **)(*param_2 + 0x10))(uVar4,DAT_01be9960);
      if (cVar2 == '\0') {
        cVar2 = '\0';
      }
      else {
        cVar2 = AllocatedArray<AntiqueScrollMultipleData::Unit>::
                AllocatedArray<AntiqueScrollMultipleData::Unit>(param_2);
        (**(code **)(*param_2 + 0x14))(uVar4,iVar1);
      }
      if (cVar2 != '\x01') break;
      (**(code **)(**(int **)(unaff_ESI + 0x24) + 8))(&stack0xfffffb80);
      uVar5 = uVar5 + 1;
      if (*(uint *)(unaff_ESI + 0x1c) <= uVar5) {
        return (char)((uint)unaff_EBP >> 0x18);
      }
    }
  }
  return cVar2;
}

// 00A65460  FUN_00a65460  size=942  [callgraph]
undefined4 __fastcall FUN_00a65460(int *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float *pfStack_12c;
  uint *puStack_128;
  int iStack_124;
  int local_120;
  int local_11c;
  int local_118;
  int iStack_114;
  uint uStack_108;
  int iStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined4 auStack_f0 [4];
  int iStack_e0;
  undefined4 auStack_80 [5];
  int iStack_6c;
  
  if ((param_1[0x2d] != -1) && (param_1[2] == 0)) {
    iVar3 = FUN_00a82090("TRAIN_REVERSE",param_1[0x2d],0);
    param_1[2] = iVar3;
    if (iVar3 == 0) {
      return 0;
    }
    local_120 = 0;
    local_11c = 0x40490fdb;
    local_118 = 0;
    FUN_00a7cf00(&local_120);
    local_120 = 0x41900000;
    local_11c = 0;
    local_118 = 0;
    FUN_00a7ce90(&local_120);
    piVar4 = (int *)FUN_00a7c800();
    (**(code **)(*piVar4 + 0x20))();
  }
  cVar2 = FUN_00a608e0(param_1 + 0x44,0x10);
  if (cVar2 == '\0') {
    return 0;
  }
  uStack_108 = 0;
  if (param_1[4] != 0) {
    puStack_128 = (uint *)(param_1 + 9);
    pfStack_12c = (float *)(param_1 + 0x46);
    iStack_124 = 0;
    do {
      iVar3 = param_1[6];
      if (uStack_108 < *(uint *)(iVar3 + 8)) {
        puVar6 = (uint *)(*(int *)(iVar3 + 4) + iStack_124);
      }
      else {
        puVar6 = (uint *)(*(uint *)(iVar3 + 8) * 0x8c + *(int *)(iVar3 + 4));
      }
      if (puVar6 != (uint *)0x0) {
        *puStack_128 = puVar6[0x10];
        fStack_140 = pfStack_12c[-2];
        fStack_13c = pfStack_12c[-1];
        fStack_138 = *pfStack_12c;
        fStack_134 = pfStack_12c[1];
        fStack_100 = pfStack_12c[2];
        fStack_fc = pfStack_12c[3];
        fStack_f8 = pfStack_12c[4];
        fStack_f4 = pfStack_12c[5];
        uVar5 = puVar6[0xe];
        if (param_1[0x2f] == 0) {
          fVar1 = (float)puVar6[0x18];
        }
        else {
          fVar1 = (float)puVar6[0x1a];
        }
        if (uVar5 == 0) {
          fStack_140 = fVar1 + fStack_140;
        }
        else if (uVar5 == 1) {
          fStack_13c = fVar1 + fStack_13c;
        }
        else if (uVar5 == 2) {
          fStack_138 = fVar1 + fStack_138;
        }
        iStack_104 = 0;
        if (0 < (int)puVar6[0x1d]) {
          do {
            if (iStack_104 == 0) {
              if ((param_1[0x2f] != 0) || (param_1[0x30] != 0)) goto LAB_00a657bb;
              if (*(uint *)(*param_1 + 0x1c) <= *puVar6) goto LAB_00a657bb;
              puVar7 = (undefined4 *)(*(int *)(*(int *)(*param_1 + 0x24) + 4) + *puVar6 * 0x70);
              puVar8 = auStack_f0;
              for (iVar3 = 0x1c; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              if (iStack_e0 < 1) goto LAB_00a657bb;
              FUN_00a61d20(puVar6,4,&fStack_140,&fStack_100);
              fVar1 = (float)puVar6[0x11];
            }
            else {
              fVar1 = (float)puVar6[0xb];
              if (uVar5 == 0) {
                fStack_140 = fVar1 + fStack_140;
              }
              else if (uVar5 == 1) {
                fStack_13c = fStack_13c + fVar1;
              }
              else if (uVar5 == 2) {
                fStack_138 = fStack_138 + fVar1;
              }
LAB_00a657bb:
              FUN_00a61d20(puVar6,0,&fStack_140,&fStack_100);
              fVar1 = (float)puVar6[10];
            }
            uVar5 = puVar6[0xe];
            if (uVar5 == 0) {
              fStack_140 = fVar1 + fStack_140;
            }
            else if (uVar5 == 1) {
              fStack_13c = fVar1 + fStack_13c;
            }
            else if (uVar5 == 2) {
              fStack_138 = fVar1 + fStack_138;
            }
            iStack_104 = iStack_104 + 1;
          } while (iStack_104 < (int)puVar6[0x1d]);
        }
        if (param_1[0x2f] == 1) {
          uVar5 = *puVar6;
          if (uVar5 < *(uint *)(*param_1 + 0x1c)) {
            puVar7 = (undefined4 *)(*(int *)(*(int *)(*param_1 + 0x24) + 4) + uVar5 * 0x70);
            puVar8 = auStack_80;
            for (iVar3 = 0x1c; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
            if (0 < iStack_6c) {
              local_120 = param_1[uVar5 * 8 + 0x44];
              local_11c = param_1[uVar5 * 8 + 0x45];
              local_118 = param_1[uVar5 * 8 + 0x46];
              iStack_114 = param_1[uVar5 * 8 + 0x47];
              iVar3 = lib::StaticArray<AntiqueScrollMultiple,20>::
                      StaticArray<AntiqueScrollMultiple,20>(puVar6,5,&local_120);
              if (iVar3 == 1) {
                puVar6[0x1f] = 2;
              }
              FUN_00a5f230(puVar6);
              iVar3 = *(int *)(puVar6[1] + 4);
              if (iVar3 != *(int *)(puVar6[1] + 8) * 0x160 + iVar3) {
                do {
                  FUN_00a59870();
                  iVar3 = iVar3 + 0x160;
                } while (iVar3 != *(int *)(puVar6[1] + 8) * 0x160 + *(int *)(puVar6[1] + 4));
              }
            }
          }
        }
      }
      puStack_128 = puStack_128 + 1;
      iStack_124 = iStack_124 + 0x8c;
      uStack_108 = uStack_108 + 1;
      pfStack_12c = pfStack_12c + 8;
    } while (uStack_108 < (uint)param_1[4]);
  }
  return 1;
}

// 00A658A0  FUN_00a658a0  size=1740  [callgraph]
undefined4 __thiscall
FUN_00a658a0(int param_1,int *param_2,float param_3,int param_4,float param_5,float param_6)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  uint uVar11;
  float10 fVar12;
  float10 fVar13;
  float10 extraout_ST0;
  undefined *puVar14;
  int local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44 [4];
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  
  if (param_2 == (int *)0x0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x324) = 0;
  local_50 = -1.0;
  *(undefined4 *)(param_1 + 0x328) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x32c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x330) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x334) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x338) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x33c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x340) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x344) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x348) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x350) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x354) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x358) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x35c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x360) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x364) = 0xffffffff;
  if (0.0 < param_3) {
    local_50 = 1.0;
  }
  local_30 = 0.0;
  local_2c = 0.0;
  local_28 = 0.0;
  local_54 = 0.0;
  local_48 = 0;
  local_4c = 0;
  if ((param_2[0x1f] == 1) && ((float)param_2[0x19] < (float)param_2[9])) {
    local_40 = *(float *)(*param_2 * 0x20 + 0x110 + param_1);
    iVar7 = *param_2 * 0x20 + 0x110 + param_1;
    local_3c = *(float *)(iVar7 + 4);
    local_38 = *(float *)(iVar7 + 8);
    local_34 = *(undefined4 *)(iVar7 + 0xc);
    FUN_00a55590(param_2,param_2[0x19],&local_40);
    iVar7 = lib::StaticArray<AntiqueScrollMultiple,20>::StaticArray<AntiqueScrollMultiple,20>
                      (param_2,5,&local_40);
    if (iVar7 == 1) {
      param_2[0x1f] = 2;
    }
  }
  iVar7 = *(int *)(param_2[1] + 4);
  bVar5 = false;
  if (iVar7 != *(int *)(param_2[1] + 8) * 0x160 + iVar7) {
    do {
      local_38 = 0.0;
      iVar8 = param_2[0xe];
      if (iVar8 == 0) {
        local_40 = param_3;
LAB_00a65b11:
        local_3c = 0.0;
      }
      else {
        if (iVar8 != 1) {
          if (iVar8 != 2) {
            return 0;
          }
          local_40 = 0.0;
          local_38 = param_3;
          goto LAB_00a65b11;
        }
        local_40 = 0.0;
        local_38 = 0.0;
        local_3c = param_3;
      }
      FUN_00a54d30(&local_40);
      FUN_00a59870();
      iVar8 = param_2[0xe];
      fVar4 = *(float *)(iVar7 + 0x110);
      if (((iVar8 != 0) && (fVar4 = *(float *)(iVar7 + 0x114), iVar8 != 1)) &&
         (fVar4 = *(float *)(iVar7 + 0x118), iVar8 != 2)) {
        return 0;
      }
      fVar13 = (float10)0;
      fVar12 = (float10)local_50;
      if (((fVar12 < fVar13) && (local_54 < fVar4)) || (!bVar5)) {
        local_48 = *(undefined4 *)(iVar7 + 0xfc);
        bVar5 = true;
        local_4c = *(undefined4 *)(iVar7 + 0x100);
        local_54 = fVar4;
        local_30 = *(float *)(iVar7 + 0x110);
        local_2c = *(float *)(iVar7 + 0x114);
        local_28 = *(float *)(iVar7 + 0x118);
        local_24 = *(undefined4 *)(iVar7 + 0x11c);
      }
      iVar3 = *param_2;
      pfVar1 = (float *)(iVar3 * 0x20 + 0x110 + param_1);
      if (iVar8 == 0) {
        fVar2 = *pfVar1;
      }
      else if (iVar8 == 1) {
        fVar2 = pfVar1[1];
      }
      else {
        if (iVar8 != 2) {
          return 0;
        }
        fVar2 = pfVar1[2];
      }
      if ((NAN(fVar12) || NAN(fVar13)) || fVar12 < fVar13 == (fVar12 == fVar13)) {
        fVar4 = fVar4 - fVar2;
        fVar2 = (*(float *)(iVar7 + 0x100) + *(float *)(iVar7 + 0xfc)) * 0.5 + (float)param_2[0x1b];
      }
      else {
        fVar4 = fVar2 - fVar4;
        fVar2 = (*(float *)(iVar7 + 0x100) + *(float *)(iVar7 + 0xfc)) * 0.5 + (float)param_2[0x17];
      }
      if (fVar2 < fVar4 != (fVar2 == fVar4)) {
        uVar11 = 0;
        fVar4 = (float)param_2[0xb] + (float)param_2[10] + (float)param_2[5];
        param_2[5] = (int)fVar4;
        if ((param_2[0xc] == 0) || (fVar4 < (float)param_2[8])) {
          if (param_2[0x1f] == 0) {
            uVar11 = -(uint)(param_2[6] != 0) & 3;
          }
          else if (param_2[0x1f] == 1) {
            iVar8 = FUN_00a59ea0(iVar3);
            if (0 < iVar8) {
              uVar11 = 5;
            }
          }
          else {
            uVar11 = 0xffffffff;
          }
        }
        else {
          if (param_2[6] == 0) {
            if (param_2[0x1f] == 0) {
              uVar11 = 1;
              param_2[6] = 1;
              if ((param_2[0x1e] == 1) && (*(int *)(param_1 + 8) != 0)) {
                if (param_4 == 0) {
                  fVar13 = (float10)200.0;
                }
                else {
                  fVar13 = (float10)FUN_00dde300((float)fVar13,0x3f800000);
                  fVar13 = fVar13 * (float10)400.0 + (float10)200.0;
                }
                local_20 = 0x41900000;
                local_1c = 0;
                local_18 = (float)(fVar13 + (float10)param_5);
                FUN_00a7ce90(&local_20);
                piVar10 = (int *)FUN_00a7c800();
                (**(code **)(*piVar10 + 0x1c))();
                FUN_00a7c800();
                switchD_0080dbae::default();
                fVar13 = (float10)0;
              }
            }
            else if (param_2[0x1f] == 1) {
              iVar8 = FUN_00a59ea0(iVar3);
              fVar13 = extraout_ST0;
              if (0 < iVar8) {
                uVar11 = 5;
              }
            }
            else {
              uVar11 = 0xffffffff;
            }
          }
          else {
            uVar11 = 2;
            param_2[6] = 0;
            if ((param_2[0x1e] == 1) && (*(int *)(param_1 + 8) != 0)) {
              piVar10 = (int *)FUN_00a7c800();
              (**(code **)(*piVar10 + 0x20))();
              fVar13 = (float10)0;
            }
          }
          param_2[5] = (int)(float)fVar13;
          param_2[8] = (int)param_6;
          fVar4 = ((float)param_2[0xb] + (float)param_2[10]) * 14.0;
          if (param_6 <= fVar4) {
            param_2[8] = (int)fVar4;
          }
        }
        *(undefined4 *)(iVar7 + 0x130) = 1;
        FUN_00a54dc0();
        if (uVar11 != 0xffffffff) {
          FUN_00a552e0(uVar11);
        }
      }
      iVar7 = iVar7 + 0x160;
    } while (iVar7 != *(int *)(param_2[1] + 8) * 0x160 + *(int *)(param_2[1] + 4));
  }
  iVar7 = *(int *)(param_2[1] + 4);
  if (iVar7 != *(int *)(param_2[1] + 8) * 0x160 + iVar7) {
    do {
      uVar11 = 0;
      if (*(int *)(iVar7 + 0x15c) != 0) {
        local_58 = iVar7 + 0x134;
        if (*(int *)(iVar7 + 0x15c) == 0) goto LAB_00a65e46;
        do {
          FUN_00a7c930();
          FUN_00a7c950();
          iVar8 = FUN_00a7c990(&local_54);
          if ((iVar8 == 0) &&
             ((iVar8 = FUN_00a81330(), iVar8 == 0 ||
              (iVar8 = FUN_00a7c8a0(), *(int *)(iVar8 + 0x4e4) == 1)))) {
            FUN_00a7c930();
            if (uVar11 < *(uint *)(iVar7 + 0x15c)) {
              FUN_00a7c960(local_58);
              iVar8 = FUN_00a5efd0(param_2,local_44);
              if (iVar8 != 0) {
                if (uVar11 < *(uint *)(iVar7 + 0x15c)) {
                  FUN_00a7c950();
                }
                goto LAB_00a65e46;
              }
              puVar14 = &DAT_01662bac;
            }
            else {
              puVar14 = &DAT_01662b70;
            }
            FUN_00dd5650(puVar14);
          }
LAB_00a65e46:
          local_58 = local_58 + 4;
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(uint *)(iVar7 + 0x15c));
      }
      iVar7 = iVar7 + 0x160;
    } while (iVar7 != *(int *)(param_2[1] + 8) * 0x160 + *(int *)(param_2[1] + 4));
  }
  piVar10 = *(int **)(param_2[1] + 4);
  if (piVar10 != piVar10 + *(int *)(param_2[1] + 8) * 0x58) {
    do {
      if (piVar10[0x4c] == 0) {
        piVar10 = piVar10 + 0x58;
      }
      else {
        iVar7 = *piVar10;
        FUN_00a5f090(param_2,piVar10);
        FUN_00a7c930();
        if (iVar7 != 0) {
          uVar9 = FUN_00a7c7f0();
          FUN_00a7c960(uVar9);
        }
        (**(code **)(*(int *)param_2[3] + 8))(local_44);
        piVar10 = (int *)FUN_00a64240(piVar10);
      }
    } while (piVar10 != (int *)(*(int *)(param_2[1] + 8) * 0x160 + *(int *)(param_2[1] + 4)));
  }
  if ((param_2[0x1f] == 2) && (param_2[0x21] == 2)) {
    FUN_00a60770(param_2);
  }
  FUN_00a64cb0(param_2,&local_30,local_48,local_4c,-local_50);
  if ((param_2[0x20] == 1) && (cVar6 = FUN_00a5f230(param_2), cVar6 == '\x01')) {
    param_2[0x20] = 2;
  }
  return 1;
}

// 00A65F70  FUN_00a65f70  size=202  [callgraph]
undefined4 __fastcall FUN_00a65f70(int *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  uVar4 = 0;
  while (*(int *)((int)&DAT_018a0af0 + uVar4) != *(int *)(*param_1 + 0xb0)) {
    uVar4 = uVar4 + 4;
    if (0x17 < uVar4) {
      return 1;
    }
  }
  if (param_1[1] == 0) {
    return 1;
  }
  if (param_1[3] == 1) {
    *(undefined4 *)(*param_1 + 0xbc) = 1;
  }
  if (param_1[4] == 1) {
    *(undefined4 *)(*param_1 + 0xc0) = 1;
  }
  param_1 = (int *)*param_1;
  if ((*param_1 != 0) && (iVar3 = param_1[1], iVar3 != 0)) {
    puVar5 = *(undefined4 **)(iVar3 + 4);
    puVar1 = puVar5 + *(int *)(iVar3 + 8);
    while( true ) {
      if (puVar5 == puVar1) {
        cVar2 = FUN_00a64c00();
        if (cVar2 == '\x01') {
          param_1[0x19] = 1;
          cVar2 = FUN_00a65460();
          if (cVar2 == '\x01') {
            param_1[0x1a] = 1;
            param_1[8] = 1;
          }
        }
        return 1;
      }
      iVar3 = FUN_00a00f80(*puVar5,0);
      if (iVar3 == 0) break;
      puVar5 = puVar5 + 1;
    }
    return 0;
  }
  return 0;
}

// 00A65FE0  FUN_00a65fe0  size=404  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00a65fe0(int *param_1)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  float10 fVar8;
  uint local_a4;
  int local_9c;
  int *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  float local_88;
  undefined4 local_80 [11];
  float local_54;
  
  fVar2 = 0.0;
  if (*(int *)(*param_1 + 0x1c) != 0) {
    puVar4 = *(undefined4 **)(*(int *)(*param_1 + 0x24) + 4);
    puVar6 = local_80;
    for (iVar5 = 0x1c; fVar2 = local_54, iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  fVar1 = (float)param_1[0xc4];
  if ((_DAT_01be9978 & 1) == 0) {
    _DAT_01be9974 = param_1[3];
    _DAT_01be9978 = _DAT_01be9978 | 1;
  }
  if (param_1[2] != 0) {
    local_90 = 0;
    local_8c = 0;
    fVar8 = (float10)FUN_00e049b0();
    fVar8 = fVar8 * (float10)(-(ABS(fVar2) * 0.016666668) * fVar1);
    local_88 = (float)(fVar8 + fVar8);
    FUN_00a7cec0(&local_90);
  }
  uVar7 = 0;
  if (param_1[6] != 0) {
    local_a4 = 0;
    if (param_1[4] != 0) {
      local_98 = param_1 + 9;
      local_9c = 0;
      do {
        iVar5 = param_1[6];
        if (uVar7 < *(uint *)(iVar5 + 8)) {
          iVar5 = *(int *)(iVar5 + 4) + local_9c;
        }
        else {
          iVar5 = *(uint *)(iVar5 + 8) * 0x8c + *(int *)(iVar5 + 4);
        }
        if (((iVar5 != 0) && (*(int *)(iVar5 + 0x88) != 2)) && (*local_98 != 0)) {
          fVar8 = (float10)FUN_00a5ef20(iVar5);
          if (DAT_01be9970 == 0) {
            fVar2 = 0.0;
          }
          else {
            uVar3 = FUN_00dde2a0(0,4);
            fVar2 = (*(float *)(iVar5 + 0x2c) + *(float *)(iVar5 + 0x28)) * (float)uVar3;
          }
          FUN_00a658a0(iVar5,(float)fVar8,DAT_01be9970,*(undefined4 *)(iVar5 + 0x24),
                       fVar2 + *(float *)(iVar5 + 0x24));
          if ((*(int *)(iVar5 + 0x7c) == 2) && (1 < *(int *)(iVar5 + 0x80))) {
            local_a4 = local_a4 + 1;
          }
        }
        local_98 = local_98 + 1;
        local_9c = local_9c + 0x8c;
        uVar7 = uVar7 + 1;
      } while (uVar7 < (uint)param_1[4]);
    }
    if ((uint)param_1[4] <= local_a4) {
      param_1[199] = 2;
    }
  }
  return;
}

// 00A66180  FUN_00a66180  size=112  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00a66180(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  
  if ((_DAT_01be996c & 1) == 0) {
    _DAT_01be996c = _DAT_01be996c | 1;
    DAT_01be9968 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  iVar1 = DAT_01be9968;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_2,DAT_01be9968);
  if (cVar2 == '\0') {
    return 0;
  }
  uVar3 = lib::AllocatedArray<AntiqueScrollMultipleData::UnitInfo>::
          AllocatedArray<AntiqueScrollMultipleData::UnitInfo>(param_1);
  (**(code **)(*param_1 + 0x14))(param_2,iVar1);
  return uVar3;
}

// 00A661F0  FUN_00a661f0  size=489  [callgraph]
void __thiscall FUN_00a661f0(int *param_1,int param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int unaff_retaddr;
  int aiStack_78 [30];
  
  if (param_4 != (int *)0x0) {
    param_1[0x2d] = *param_4;
  }
  param_1[0xc4] = 0x3f800000;
  param_1[7] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[8] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  piVar3 = param_1 + 0x1c;
  iVar5 = 0x10;
  do {
    piVar3[0x15] = -0x40800000;
    piVar3[-0x13] = 0;
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  param_1[0x2c] = -1;
  iVar5 = (**(code **)(param_1[0xdc] + 0x1c))(0);
  while (iVar5 != 0) {
    iVar4 = (**(code **)(param_1[0xdc] + 0x1c))(iVar5);
    FUN_00dd4920(iVar5);
    iVar5 = iVar4;
  }
  if (unaff_retaddr == 1) {
    iVar5 = *param_1;
    if (iVar5 != 0) {
      if (*(undefined4 **)(iVar5 + 0x20) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(iVar5 + 0x20))(1);
        *(undefined4 *)(iVar5 + 0x20) = 0;
      }
      FUN_00a5a590();
      FUN_00dd4920(iVar5);
      *param_1 = 0;
    }
    iVar5 = FUN_00dd3500(0x28,param_1[5]);
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x10) = 0;
      *(undefined4 *)(iVar5 + 4) = 0x42a00000;
      *(undefined4 *)(iVar5 + 0x14) = 0;
      *(undefined4 *)(iVar5 + 0x18) = 0;
      *(undefined4 *)(iVar5 + 0x20) = 0;
      *(undefined4 *)(iVar5 + 0x24) = 0;
    }
    *param_1 = iVar5;
    iVar5 = FUN_00de4550("antiqueScroll.bxm",0);
    if (iVar5 == 0) {
      return;
    }
    lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_4();
    FUN_00e91420(iVar5);
    cVar1 = (**(code **)(aiStack_78[0] + 0x10))(&DAT_0164a448,0);
    cVar2 = FUN_00a66180(aiStack_78,"antiqueScroll",*param_1);
    if (cVar1 != '\0') {
      (**(code **)(aiStack_78[0] + 0x14))(&DAT_0164a448,0);
    }
    cXml::cXml_5();
    if (cVar2 != '\x01') {
      return;
    }
  }
  iVar5 = lib::AllocatedArray<eObjId>::AllocatedArray<eObjId>();
  if (iVar5 == 1) {
    iVar5 = FUN_00a5b070();
    param_1[7] = iVar5;
    param_1[0x2c] = param_2;
  }
  return;
}

// 00A82140  lib::AllocatedArray<Entity*>::vf00  size=30  [class]
undefined4 __thiscall lib::AllocatedArray<Entity*>::vf00(undefined4 param_1,byte param_2)

{
  Array<Entity*>::Array<Entity*>_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A82180  FUN_00a82180  size=19  [between]
void FUN_00a82180(void)

{
  lib::Array<Entity*>::Array<Entity*>_8();
  FUN_00dd7270();
  return;
}

// 00A821A0  FUN_00a821a0  size=142  [between]
void __fastcall FUN_00a821a0(int param_1)

{
  int iVar1;
  
  FUN_00dd7270();
  lib::Array<Entity*>::Array<Entity*>_8();
  lib::Array<Entity*>::Array<Entity*>_8();
  FUN_00dd7270();
  iVar1 = (**(code **)(*(int *)(param_1 + 0x60) + 0xc))();
  if (iVar1 != 0) {
    FUN_00a81780();
  }
  Hw::cHeap::cHeap_3();
  if (*(int *)(param_1 + 0x3c) != 0) {
    if (*(int *)(param_1 + 0x3c) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x3c),0);
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x38);
  }
  FUN_00dd7270();
  return;
}

// 00A82230  lib::AllocatedArray<Entity*>::AllocatedArray<Entity*>  size=169  [class]
undefined4 * __thiscall
lib::AllocatedArray<Entity*>::AllocatedArray<Entity*>(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  Hw::cHeapFixed::cHeapFixed();
  param_1[0x36] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = vftable;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x3e] = vftable;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x4a] = 0;
  return param_1;
}

// 00A89210  FUN_00a89210  size=246  [callgraph]
undefined4 __thiscall FUN_00a89210(int param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  LONG LVar4;
  int *local_8;
  int *local_4;
  
  FUN_00a891a0();
  local_8 = (int *)0x0;
  local_4 = (int *)0x0;
  cVar2 = lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>::CoreT<sys::AllocatorByHeap>
                    (*param_3);
  if (cVar2 != '\0') {
    if (local_8 != (int *)0x0) {
      iVar3 = (**(code **)(*local_8 + 4))(param_2 * 8);
      if (iVar3 != 0) {
        FUN_00401f90(&local_8);
        piVar1 = local_4;
        if (*(int *)(param_1 + 4) != 0) {
          *(undefined4 *)(param_1 + 8) = 0;
        }
        *(uint *)(param_1 + 0xc) = param_2 & 0x1fffffff;
        *(int *)(param_1 + 4) = iVar3;
        if (local_4 != (int *)0x0) {
          LVar4 = InterlockedDecrement(local_4 + 1);
          if (LVar4 == 0) {
            (**(code **)(*piVar1 + 4))();
            LVar4 = InterlockedDecrement(piVar1 + 2);
            if (LVar4 == 0) {
              (**(code **)(*piVar1 + 8))();
            }
          }
        }
        return 1;
      }
    }
  }
  piVar1 = local_4;
  if (local_4 != (int *)0x0) {
    LVar4 = InterlockedDecrement(local_4 + 1);
    if (LVar4 == 0) {
      (**(code **)(*piVar1 + 4))();
      LVar4 = InterlockedDecrement(piVar1 + 2);
      if (LVar4 == 0) {
        (**(code **)(*piVar1 + 8))();
      }
    }
  }
  return 0;
}

// 00A89440  FUN_00a89440  size=57  [callgraph]
undefined4 FUN_00a89440(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 local_530 [1324];
  
  hkpAllCdPointCollector::hkpAllCdPointCollector();
  uVar1 = BehaviorUtility::checkRay(local_530,param_1);
  hkpCdPointCollector::hkpCdPointCollector_16();
  return uVar1;
}

// 00A89480  lib::AllocatedArray<cEnemySubState>::AllocatedArray<cEnemySubState>  size=212  [class]
undefined4 __thiscall
lib::AllocatedArray<cEnemySubState>::AllocatedArray<cEnemySubState>
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *local_4;
  
  local_4 = param_1;
  iVar1 = FUN_00d466f0();
  if (iVar1 != 0) {
    param_1[0x4d] = param_1[0x4d] & 0x7effffff;
  }
  puVar2 = (undefined4 *)FUN_00dd3500(0x18,&DAT_01b7bd48);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = vftable;
    puVar2[4] = 0;
    puVar2[5] = 0;
  }
  local_4 = &DAT_01b7bd48;
  FUN_00a89210(8,&local_4);
  param_1[4] = puVar2;
  uVar3 = FUN_00a7c7f0();
  FUN_00a7c960(uVar3);
  param_1[0x4e] = 0x41f00000;
  param_1[0x11] = param_3;
  param_1[5] = 0;
  param_1[0x44] = 0;
  if (param_4 != 0) {
    FUN_00a82b40(param_4,param_5);
    param_1[0x4d] = param_1[0x4d] | 0x80000000;
    FUN_00c54f40(param_1);
    return 1;
  }
  return 0;
}

// 00A89FA0  lib::AllocatedArray<cEnemySubState>::vf00  size=30  [class]
undefined4 __thiscall lib::AllocatedArray<cEnemySubState>::vf00(undefined4 param_1,byte param_2)

{
  Array<cEnemySubState>::Array<cEnemySubState>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00AA5A50  lib::AllocatedArray<FreeRunActivity::Info>::vf04  size=4  [class]
undefined4 __fastcall lib::AllocatedArray<FreeRunActivity::Info>::vf04(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// 00AC1EE0  lib::AllocatedArray<Behavior::InstructionContainer>::AllocatedArray<Behavior::InstructionContainer>  size=144  [class]
void __fastcall
lib::AllocatedArray<Behavior::InstructionContainer>::AllocatedArray<Behavior::InstructionContainer>
          (undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *local_4;
  
  local_4 = param_1;
  puVar1 = (undefined4 *)FUN_00dd3500(0x18,&DAT_01b7bd48);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = vftable;
    puVar1[4] = 0;
    puVar1[5] = 0;
  }
  local_4 = &DAT_01b7bd48;
  FUN_00abc930(0x20,&local_4);
  param_1[399] = puVar1;
  iVar2 = FUN_00dd3500(0x20,&DAT_01b7bd48);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x18) = 0;
    param_1[0x18e] = iVar2;
    FUN_00dd7240();
    return;
  }
  param_1[0x18e] = 0;
  FUN_00dd7240();
  return;
}

// 00AC1F70  FUN_00ac1f70  size=159  [between]
void __fastcall FUN_00ac1f70(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x644) != 0) {
    FUN_00dd4920(*(int *)(param_1 + 0x644));
    *(undefined4 *)(param_1 + 0x644) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x648);
  if (puVar1[1] != 0) {
    if (puVar1[1] != 0) {
      FUN_00dd48d0(puVar1[1],0);
      puVar1[1] = 0;
    }
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = *puVar1;
    puVar1[5] = *puVar1;
    puVar1[6] = *puVar1;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x648);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[1] != 0) {
      if (puVar1[1] != 0) {
        FUN_00dd48d0(puVar1[1],0);
        puVar1[1] = 0;
      }
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = *puVar1;
      puVar1[5] = *puVar1;
      puVar1[6] = *puVar1;
    }
    FUN_00dd4920(puVar1);
    *(undefined4 *)(param_1 + 0x648) = 0;
  }
  return;
}

// 00AC2010  lib::AllocatedArray<Collision*>::AllocatedArray<Collision*>  size=108  [class]
void __fastcall lib::AllocatedArray<Collision*>::AllocatedArray<Collision*>(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puStack_4;
  
  puStack_4 = param_1;
  if ((undefined4 *)param_1[0x1ee] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1ee])(1);
    param_1[0x1ee] = 0;
  }
  puVar1 = (undefined4 *)FUN_00dd3500(0x18,&DAT_01b7bd48);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = vftable;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar2 = puVar1;
  }
  puStack_4 = &DAT_01b7bd48;
  FUN_00abca20(0x80,&puStack_4);
  param_1[0x1ee] = puVar2;
  return;
}

// 00AC32E0  lib::AllocatedArray<BehaviorDatabaseImplement::UsedContainer>::vf00  size=30  [class]
undefined4 __thiscall
lib::AllocatedArray<BehaviorDatabaseImplement::UsedContainer>::vf00(undefined4 param_1,byte param_2)

{
  Array<BehaviorDatabaseImplement::UsedContainer>::Array<BehaviorDatabaseImplement::UsedContainer>()
  ;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00AC3300  lib::AllocatedArray<Behavior::InstructionContainer>::vf00  size=30  [class]
undefined4 __thiscall
lib::AllocatedArray<Behavior::InstructionContainer>::vf00(undefined4 param_1,byte param_2)

{
  Array<Behavior::InstructionContainer>::Array<Behavior::InstructionContainer>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00AC3320  lib::AllocatedArray<Collision*>::vf00  size=30  [class]
undefined4 __thiscall lib::AllocatedArray<Collision*>::vf00(undefined4 param_1,byte param_2)

{
  Array<Collision*>::Array<Collision*>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BF2660  lib::AllocatedArray<FreeRunActivity::Info>::vf00  size=30  [class]
undefined4 __thiscall
lib::AllocatedArray<FreeRunActivity::Info>::vf00(undefined4 param_1,byte param_2)

{
  Array<FreeRunActivity::Info>::Array<FreeRunActivity::Info>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C20F00  lib::AllocatedArray<NinjaRunEventManagerImplement::RegionUnit*>::vf04  size=4  [class]
undefined4 __fastcall
lib::AllocatedArray<NinjaRunEventManagerImplement::RegionUnit*>::vf04(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// 00C21110  lib::AllocatedArray<VoiceSubtitleResourceForAction::Unit>::vf04  size=4  [class]
undefined4 __fastcall lib::AllocatedArray<VoiceSubtitleResourceForAction::Unit>::vf04(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// 00C21160  lib::AllocatedArray<VoiceSubtitleResourceForSnake::Unit>::vf04  size=4  [class]
undefined4 __fastcall lib::AllocatedArray<VoiceSubtitleResourceForSnake::Unit>::vf04(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// 00C211A0  lib::AllocatedArray<VoiceSubtitleResourceForSnake::AtrandomCheck>::vf04  size=4  [class]
undefined4 __fastcall
lib::AllocatedArray<VoiceSubtitleResourceForSnake::AtrandomCheck>::vf04(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// 00C5EBC0  lib::AllocatedArray<NinjaRunEventManagerImplement::PointUnit*>::AllocatedArray<NinjaRunEventManagerImplement::PointUnit*>  size=110  [class]
undefined4 * __thiscall
lib::AllocatedArray<NinjaRunEventManagerImplement::PointUnit*>::
AllocatedArray<NinjaRunEventManagerImplement::PointUnit*>
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  NinjaRunEventManagerImplement::PhantomUnit::PhantomUnit(param_2,param_3,param_4,param_5);
  *param_1 = NinjaRunEventManagerImplement::RegionUnit::vftable;
  puVar1 = (undefined4 *)FUN_00dd3500(0x18,param_2);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = vftable;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar2 = puVar1;
  }
  param_5 = param_2;
  FUN_00c5cd90(8,&param_5);
  param_1[0x5c] = puVar2;
  return param_1;
}

// 00C5F010  lib::AllocatedArray<NinjaRunEventManagerImplement::RegionUnit*>::AllocatedArray<NinjaRunEventManagerImplement::RegionUnit*>  size=426  [class]
undefined4 __thiscall
lib::AllocatedArray<NinjaRunEventManagerImplement::RegionUnit*>::
AllocatedArray<NinjaRunEventManagerImplement::RegionUnit*>
          (int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  int unaff_EDI;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar3 = *(int *)(param_1 + 8);
  piVar6 = *(int **)(iVar3 + 4);
  if (piVar6 != piVar6 + *(int *)(iVar3 + 8)) {
    piVar2 = piVar6 + *(int *)(iVar3 + 8);
    while (iVar3 = *piVar6, *(int *)(iVar3 + 0x10) != param_2) {
      piVar6 = piVar6 + 1;
      if (piVar6 == piVar2) {
        return 0xffffffff;
      }
    }
    if (iVar3 != 0) {
      if (*(int *)(iVar3 + 0x170) == 0) {
        puVar4 = (undefined4 *)FUN_00dd3500(0x18,*(undefined4 *)(param_1 + 4));
        if (puVar4 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        *puVar4 = vftable;
        puVar4[4] = 0;
        puVar4[5] = 0;
        local_24 = *(undefined4 *)(param_1 + 4);
        FUN_00c5ce90(0x10,&local_24);
        *(undefined4 **)(iVar3 + 0x170) = puVar4;
      }
      iVar5 = FUN_00dd3500(0x180,*(undefined4 *)(param_1 + 4));
      if ((iVar5 != 0) &&
         (iVar5 = AllocatedArray<NinjaRunEventManagerImplement::PointUnit*>::
                  AllocatedArray<NinjaRunEventManagerImplement::PointUnit*>
                            (*(undefined4 *)(param_1 + 4),param_3,param_4,param_5), iVar5 != 0)) {
        *(int *)(iVar5 + 0xb0) = iVar3;
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        piVar6 = (int *)FUN_00900480();
        uVar7 = (**(code **)(*piVar6 + 8))(&local_20,&local_20,param_5,0x1f,0,1);
        AllocatedArray<hkpPhantomListener*>::AllocatedArray<hkpPhantomListener*>(uVar7);
        iVar5 = *(int *)(unaff_EDI + 0xa0);
        if (iVar5 != 0) {
          FUN_004066f0();
          uVar8 = *(uint *)(iVar5 + 0xc);
          uVar8 = -(uint)(uVar8 != 0) & uVar8;
          puVar1 = (uint *)(uVar8 + 4);
          *puVar1 = *puVar1 | 0x10;
          *(int *)(uVar8 + 0x98) = unaff_EDI;
          if (DAT_01885d68 != 1) {
            piVar6 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
            *piVar6 = *piVar6 + -1;
            if (((*piVar6 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
              FUN_00dd7320();
            }
          }
        }
        (**(code **)(**(int **)(iVar3 + 0x170) + 8))(&stack0xffffffc0);
        return param_3;
      }
    }
  }
  return 0xffffffff;
}

// 00C5F220  lib::AllocatedArray<Entity*>::AllocatedArray<Entity*>  size=104  [class]
void __fastcall lib::AllocatedArray<Entity*>::AllocatedArray<Entity*>(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int local_4;
  
  local_4 = param_1;
  FUN_00dd7240();
  puVar1 = (undefined4 *)FUN_00dd3500(0x18,*(undefined4 *)(param_1 + 4));
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = vftable;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar2 = puVar1;
  }
  local_4 = *(int *)(param_1 + 4);
  FUN_00a81e00(200,&local_4);
  *(undefined4 **)(param_1 + 8) = puVar2;
  FUN_00c21e50(200,*(undefined4 *)(param_1 + 4));
  return;
}

// 00C5F290  FUN_00c5f290  size=201  [between]
int __thiscall FUN_00c5f290(int param_1,int param_2,int param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x160);
  if (*(int *)(param_1 + 0x178) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (param_2 == 0) {
    iVar2 = FUN_00c5af90(param_3);
    if (*(int *)(param_1 + 0x178) != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    return iVar2;
  }
  *(undefined4 *)(param_1 + 0x10c) = 0;
  iVar2 = *(int *)(param_1 + 0xf0);
  iVar4 = *(int *)(param_1 + 0xf8) * 0x90 + iVar2;
  for (; iVar2 != iVar4; iVar2 = iVar2 + 0x90) {
    if (((*(int *)(iVar2 + 4) == param_3) && (iVar3 = FUN_00a81330(), iVar3 == param_2)) &&
       (*(int *)(param_1 + 0x10c) < *(int *)(param_1 + 0x108))) {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x104) + *(int *)(param_1 + 0x10c) * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + 0x8c);
      }
      *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x10c) + 1;
    }
  }
  if (*(int *)(param_1 + 0x178) != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return param_1 + 0x100;
}

// 00C5F360  FUN_00c5f360  size=467  [between]
undefined4 __thiscall FUN_00c5f360(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar4;
  undefined4 *local_d8;
  LPCRITICAL_SECTION local_d4;
  undefined1 local_d0 [4];
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [8];
  undefined4 local_98;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_54;
  undefined4 local_14;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x160);
  local_d4 = lpCriticalSection;
  if (*(int *)(param_1 + 0x178) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar2 = FUN_00c5af90(1);
  puVar4 = *(undefined4 **)(iVar2 + 4);
  local_d8 = puVar4 + *(int *)(iVar2 + 0xc);
  if (puVar4 != local_d8) {
    do {
      FUN_00c518c0(local_a0,*puVar4);
      iVar2 = FUN_00a81330();
      if ((((iVar2 == param_2) && (param_2 != 0)) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) &&
         (iVar2 = FUN_00c51ed0(*puVar4,param_3,param_4), iVar2 != 0)) {
        iVar2 = FUN_00a81330();
        if (((iVar2 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
           (iVar3 = FUN_00a12210(local_98), iVar3 != 0)) {
          FUN_00c52690(local_14,1);
          uVar1 = *(uint *)(iVar2 + 0x24);
          if ((((uVar1 & 0xf0000) == 0x20000) || (uVar1 == 0xf0086)) ||
             ((uVar1 == 0xf0087 || (uVar1 == 0xf0089)))) {
            FUN_00a7c930();
            local_c0 = 0;
            local_bc = 0;
            local_b8 = 0;
            local_b4 = 0x3f800000;
            local_cc = 0xffffffff;
            local_b0 = 0x3f800000;
            local_c8 = 0xffffffff;
            local_ac = 0;
            local_a8 = 0;
            local_a4 = 0;
            FUN_00a7c960(local_a0);
            local_b0 = local_70;
            local_c8 = local_14;
            local_ac = local_68;
            local_cc = local_98;
            local_a4 = local_54;
            FUN_00c4b740(&local_d8,local_d0);
          }
        }
        if (local_d4[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
          LeaveCriticalSection(local_d4);
        }
        return 1;
      }
      puVar4 = puVar4 + 1;
      lpCriticalSection = local_d4;
    } while (puVar4 != local_d8);
  }
  if (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

// 00C5F540  FUN_00c5f540  size=1477  [between]
undefined4 __thiscall FUN_00c5f540(float param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  LPCRITICAL_SECTION p_Var7;
  float10 fVar8;
  float10 fVar9;
  char *pcVar10;
  undefined *puVar11;
  LPCRITICAL_SECTION p_Stack_120;
  LPCRITICAL_SECTION local_11c;
  int iStack_118;
  LPCRITICAL_SECTION p_Stack_114;
  float local_110;
  LPCRITICAL_SECTION p_Stack_10c;
  LPCRITICAL_SECTION local_108;
  PRTL_CRITICAL_SECTION_DEBUG *local_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  float fStack_f0;
  float fStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  LPCRITICAL_SECTION p_Stack_dc;
  LPCRITICAL_SECTION p_Stack_d8;
  PRTL_CRITICAL_SECTION_DEBUG *pp_Stack_d4;
  undefined4 uStack_d0;
  float fStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c0;
  float fStack_b4;
  float fStack_b0;
  float afStack_ac [2];
  undefined4 uStack_a4;
  int iStack_a0;
  int iStack_9c;
  float fStack_7c;
  undefined4 uStack_74;
  int iStack_6c;
  int iStack_64;
  undefined4 uStack_60;
  int iStack_50;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_18;
  
  local_110 = param_1;
  if ((param_2 != 0) && (iVar2 = FUN_00a7c800(), 0 < *(int *)(*(int *)(iVar2 + 0x330) + 0xcc))) {
    iVar2 = FUN_00a7c800();
    if ((*(int **)(iVar2 + 0x370) != (int *)0x0) && (**(int **)(iVar2 + 0x370) != 0)) {
      return 0;
    }
  }
  local_108 = (LPCRITICAL_SECTION)((int)param_1 + 0x160);
  if (*(int *)((int)param_1 + 0x178) != 0) {
    EnterCriticalSection(local_108);
  }
  iVar2 = FUN_00c5af90(2);
  p_Var7 = *(LPCRITICAL_SECTION *)(iVar2 + 4);
  local_104 = &p_Var7->DebugInfo + *(int *)(iVar2 + 0xc);
  local_11c = p_Var7;
  iVar2 = (**(code **)(*DAT_01bea100 + 0x28))(0);
  if (iVar2 != 0) {
    FUN_00a7c8a0();
  }
  if (p_Var7 != local_108) {
    do {
      FUN_00c518c0(&uStack_a4,p_Var7->DebugInfo);
      iVar2 = FUN_00a81330();
      if ((iVar2 == param_2) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
        puVar11 = &DAT_01be9c78;
        (**(code **)(*piVar3 + 4))(&DAT_01be9c78);
        iVar2 = FUN_00dd6d80(puVar11);
        if (((iVar2 != 0) && (((piVar3[0x294] != 0 && (iStack_64 != 0)) && (iStack_6c == 0)))) &&
           (iVar2 = FUN_00c52930(uStack_18), iVar2 != 0)) {
          iVar2 = (**(code **)(*DAT_01bea100 + 0x28))(0);
          if (iVar2 != 0) {
            uVar4 = FUN_00a7c8a0();
            iVar2 = FUN_00412580(uVar4);
            if (((iVar2 != 0) && (iVar2 = FUN_00b88550(), iVar2 != 0)) && (iStack_50 == 0))
            goto LAB_00c5f84b;
          }
          if (((param_2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) &&
             (iVar2 = FUN_00c51ed0(p_Var7->DebugInfo,param_3,param_4), iVar2 != 0)) {
            iStack_118 = iStack_24;
            iVar2 = iStack_9c;
            FUN_00a7c8a0(iStack_9c);
            iVar2 = FUN_00a12210(iVar2);
            local_104 = *(PRTL_CRITICAL_SECTION_DEBUG **)(iVar2 + 0x40);
            uStack_100 = *(undefined4 *)(iVar2 + 0x44);
            uStack_fc = *(undefined4 *)(iVar2 + 0x48);
            uStack_f8 = *(undefined4 *)(iVar2 + 0x4c);
            fStack_f0 = SQRT(*(float *)(iVar2 + 0x14) * *(float *)(iVar2 + 0x14) +
                             *(float *)(iVar2 + 0x10) * *(float *)(iVar2 + 0x10) +
                             *(float *)(iVar2 + 0x18) * *(float *)(iVar2 + 0x18));
            fStack_ec = SQRT(*(float *)(iVar2 + 0x20) * *(float *)(iVar2 + 0x20) +
                             *(float *)(iVar2 + 0x24) * *(float *)(iVar2 + 0x24) +
                             *(float *)(iVar2 + 0x28) * *(float *)(iVar2 + 0x28));
            fVar1 = SQRT(*(float *)(iVar2 + 0x38) * *(float *)(iVar2 + 0x38) +
                         *(float *)(iVar2 + 0x34) * *(float *)(iVar2 + 0x34) +
                         *(float *)(iVar2 + 0x30) * *(float *)(iVar2 + 0x30));
            local_11c = (LPCRITICAL_SECTION)(*(float *)(iVar2 + 0x28) / fVar1);
            local_110 = *(float *)(iVar2 + 0x38) / fVar1;
            fVar8 = (float10)FUN_00ddbaa0(-(*(float *)(iVar2 + 0x18) / fVar1));
            fVar9 = (float10)fpatan((float10)(float)local_11c,(float10)local_110);
            fStack_b4 = (float)fVar9;
            fStack_b0 = (float)fVar8;
            fVar8 = (float10)fpatan((float10)*(float *)(iVar2 + 0x14) / (float10)fStack_ec,
                                    (float10)*(float *)(iVar2 + 0x10) / (float10)fStack_f0);
            afStack_ac[0] = (float)fVar8;
            if (iStack_a0 == 4) {
              uVar4 = 0x40520;
              pcVar10 = "mechanical";
            }
            else {
              uVar4 = 0x40501;
              pcVar10 = "gut";
            }
            iVar2 = FUN_00a82090(pcVar10,uVar4,0);
            p_Var7 = p_Stack_120;
            if ((iVar2 != 0) &&
               (piVar3 = (int *)FUN_00a7c8a0(), p_Var7 = p_Stack_120, piVar3 != (int *)0x0)) {
              FUN_00a8c400(0);
              local_11c = (LPCRITICAL_SECTION)FUN_00a81330();
              if ((local_11c != (LPCRITICAL_SECTION)0x0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
                piVar3[0x25b] = *(int *)(iVar2 + 0x51c);
                piVar3[0x25d] = *(int *)((int)local_11c + 0x24);
                piVar3[0x25c] = iStack_9c;
                iVar5 = FUN_009f8b40();
                piVar3[0x25e] = iVar5;
                if (*(int *)(iVar2 + 0x330) == 0) {
                  p_Stack_120 = (LPCRITICAL_SECTION)0xffffffff;
                }
                else {
                  p_Stack_120 = *(LPCRITICAL_SECTION *)(*(int *)(iVar2 + 0x330) + 0xcc);
                }
                iVar2 = FUN_00445b60(iVar2);
                if (((iVar2 != 0) && (iVar2 = FUN_00a81330(), iVar2 != 0)) &&
                   (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
                  if (*(int *)(iVar2 + 0x330) == 0) {
                    p_Stack_120 = (LPCRITICAL_SECTION)0xffffffff;
                  }
                  else {
                    p_Stack_120 = *(LPCRITICAL_SECTION *)(*(int *)(iVar2 + 0x330) + 0xcc);
                  }
                }
                piVar3[0x284] = (int)p_Stack_120;
                piVar3[0x21f] = iStack_118;
                piVar3[0x221] = 0;
                piVar3[0x23c] = 1;
                piVar3[0x23d] = iStack_9c;
                FUN_00ac6f90(&local_104);
              }
              uVar4 = FUN_00a7c7f0();
              p_Var7 = p_Stack_114;
              FUN_00a7c960(uVar4);
              FUN_00c1c9c0(piVar3[0x13c]);
              uVar6 = FUN_00a7c7f0();
              uVar4 = extraout_ECX;
              FUN_00a7c940(uVar6);
              FUN_00c516b0(uVar4);
              (**(code **)(*piVar3 + 0x7c))(&local_104,&fStack_b4);
              FUN_00c52690(uStack_20,1);
              if ((*(uint *)(param_2 + 0x24) & 0xf0000) == 0x20000) {
                FUN_00c28e20();
                FUN_00a7c960(afStack_ac);
                fStack_cc = (float)p_Var7[4].LockCount * fStack_7c;
                uStack_e8 = uStack_a4;
                p_Stack_dc = p_Stack_10c;
                uStack_e4 = uStack_20;
                p_Stack_d8 = local_108;
                uStack_c8 = uStack_74;
                pp_Stack_d4 = local_104;
                uStack_c0 = uStack_60;
                uStack_d0 = uStack_100;
                FUN_00c4b740(&p_Stack_120,&fStack_ec);
              }
              FUN_00a7c940(afStack_ac);
              iVar2 = FUN_00a81330();
              if (((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) &&
                 ((iVar5 = FUN_00445b60(iVar2), iVar5 != 0 && (*(int *)(iVar5 + 0xbfc) == 0)))) {
                iVar5 = FUN_00445b60(iVar2);
                if (iVar5 != 0) {
                  *(undefined4 *)(iVar5 + 0xbfc) = 1;
                }
                FUN_00941570(*(undefined4 *)(iVar2 + 0x51c),1);
              }
              if (p_Stack_114[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
                LeaveCriticalSection(p_Stack_114);
              }
              return 1;
            }
          }
        }
      }
LAB_00c5f84b:
      p_Var7 = (LPCRITICAL_SECTION)&p_Var7->LockCount;
      p_Stack_120 = p_Var7;
    } while (p_Var7 != local_108);
  }
  if (p_Stack_10c[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    LeaveCriticalSection(p_Stack_10c);
  }
  return 0;
}

// 00C5FB10  FUN_00c5fb10  size=617  [between]
undefined4 __thiscall
FUN_00c5fb10(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,int param_6)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 *local_d4;
  undefined1 auStack_d0 [4];
  undefined4 uStack_cc;
  int iStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  int iStack_ac;
  undefined4 uStack_a4;
  undefined1 local_a0 [8];
  undefined4 uStack_98;
  float fStack_70;
  int iStack_68;
  int local_60;
  undefined4 uStack_54;
  int iStack_4c;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_14;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x160);
  if (*(int *)(param_1 + 0x178) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar1 = FUN_00c5af90(0x10);
  puVar3 = *(undefined4 **)(iVar1 + 4);
  local_d4 = puVar3 + *(int *)(iVar1 + 0xc);
  if (puVar3 != local_d4) {
    do {
      FUN_00c518c0(local_a0,*puVar3);
      iVar1 = FUN_00a81330();
      if ((iVar1 == param_2) && (((param_4 == -1 || (local_14 == param_4)) && (local_60 != 0)))) {
        iVar1 = (**(code **)(*DAT_01bea100 + 0x28))(0);
        if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
          puVar4 = &DAT_01be9db8;
          (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
          iVar1 = FUN_00dd6d80(puVar4);
          if ((iVar1 != 0) && ((iVar1 = FUN_00b88550(), iVar1 != 0 && (iStack_4c == 0))))
          goto LAB_00c5fc34;
        }
        if (((param_2 != 0) &&
            (((iVar1 = FUN_00a7c8a0(), iVar1 != 0 &&
              (iVar1 = FUN_00c51ed0(*puVar3,param_3,param_5), iVar1 != 0)) &&
             (iVar1 = FUN_00a7c8a0(), iVar1 != 0)))) && (iStack_68 == 0)) {
          uVar5 = uStack_98;
          FUN_00a7c8a0(uStack_98);
          iVar1 = FUN_00a12210(uVar5);
          FUN_00ddbaa0(-(*(float *)(iVar1 + 0x18) /
                        SQRT(*(float *)(iVar1 + 0x38) * *(float *)(iVar1 + 0x38) +
                             *(float *)(iVar1 + 0x34) * *(float *)(iVar1 + 0x34) +
                             *(float *)(iVar1 + 0x30) * *(float *)(iVar1 + 0x30))));
          if (param_6 == 0) {
            FUN_00c52690(local_14,1);
            FUN_00c28e20();
            FUN_00a7c960(local_a0);
            fStack_b0 = *(float *)(param_1 + 100) * fStack_70;
            iStack_c8 = local_14;
            iStack_ac = iStack_68;
            uStack_c0 = uStack_40;
            uStack_bc = uStack_3c;
            uStack_cc = uStack_98;
            uStack_b8 = uStack_38;
            uStack_b4 = uStack_34;
            uStack_a4 = uStack_54;
            FUN_00c4b740(&local_d4,auStack_d0);
            FUN_00c5ad80(local_14);
          }
          if (*(int *)(param_1 + 0x178) != 0) {
            LeaveCriticalSection(lpCriticalSection);
          }
          return 1;
        }
      }
LAB_00c5fc34:
      puVar3 = puVar3 + 1;
    } while (puVar3 != local_d4);
  }
  if (*(int *)(param_1 + 0x178) != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

// 00C5FD80  FUN_00c5fd80  size=1010  [between]
void __thiscall FUN_00c5fd80(int param_1,float *param_2)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined4 *puVar23;
  float10 fVar24;
  float10 fVar25;
  undefined1 local_120 [4];
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  float fStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  undefined1 auStack_b4 [4];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 local_a0 [8];
  undefined4 local_98;
  float local_70;
  undefined4 uStack_68;
  undefined4 uStack_54;
  undefined4 uStack_14;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x160));
  }
  iVar19 = FUN_00c5af90(1);
  puVar23 = *(undefined4 **)(iVar19 + 4);
  puVar1 = puVar23 + *(int *)(iVar19 + 0xc);
  for (; puVar23 != puVar1; puVar23 = puVar23 + 1) {
    FUN_00c518c0(local_a0,*puVar23);
    iVar19 = FUN_00a81330();
    if (iVar19 != 0) {
      FUN_00a7c940(local_a0);
      iVar19 = FUN_00a81330();
      if (((iVar19 != 0) && (iVar20 = FUN_00a7c8a0(), iVar20 != 0)) &&
         (iVar21 = FUN_00a12210(local_98), iVar21 != 0)) {
        iVar22 = FUN_00a7c800();
        if ((*(int *)(iVar22 + 0x330) == 0) || (*(int *)(*(int *)(iVar22 + 0x330) + 0xcc) < 1)) {
          fVar2 = *(float *)(iVar21 + 0x40);
          fVar3 = *(float *)(iVar21 + 0x44);
          fVar4 = *(float *)(iVar21 + 0x48);
          fVar17 = *(float *)(param_1 + 0x60) * local_70;
          fVar5 = param_2[0xc];
          fVar6 = param_2[0xd];
          fVar7 = param_2[0xe];
          fVar8 = *param_2;
          fVar9 = param_2[1];
          fVar10 = param_2[2];
          fVar11 = param_2[4];
          fVar12 = param_2[5];
          fVar13 = param_2[6];
          fVar18 = SQRT(param_2[10] * param_2[10] +
                        param_2[9] * param_2[9] + param_2[8] * param_2[8]);
          fVar14 = param_2[6];
          fVar15 = param_2[10];
          fVar24 = (float10)FUN_00ddbaa0(-(param_2[2] / fVar18));
          fVar25 = (float10)fpatan((float10)(fVar14 / fVar18),(float10)(fVar15 / fVar18));
          local_e0 = (float)fVar25;
          local_dc = (float)fVar24;
          fVar24 = (float10)fpatan((float10)param_2[1] /
                                   (float10)SQRT(fVar11 * fVar11 + fVar12 * fVar12 + fVar13 * fVar13
                                                ),
                                   (float10)*param_2 /
                                   (float10)SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10));
          local_d8 = (float)fVar24;
          local_b0 = 0;
          local_ac = 0x3f800000;
          local_a8 = 0;
          FUN_00ddc1d0(local_120,&local_e0,5);
          D3DXVec3TransformNormal(&local_d0,&local_b0,local_120);
          fVar8 = *(float *)(iVar20 + 0x40) - fVar5;
          fVar10 = *(float *)(iVar20 + 0x44) - fVar6;
          fVar9 = *(float *)(iVar20 + 0x48) - fVar7;
          if ((SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10) <= 2.6) &&
             (fVar2 = ABS((fVar4 * fStack_c8 + fVar2 * local_d0 + fVar3 * fStack_cc) -
                          (fStack_cc * fVar6 + local_d0 * fVar5 + fStack_c8 * fVar7)),
             fVar2 < fVar17 != (fVar2 == fVar17))) {
            FUN_00c52690(uStack_14,1);
            uVar16 = *(uint *)(iVar19 + 0x24);
            if (((((uVar16 & 0xf0000) == 0x20000) || (uVar16 == 0xf0086)) || (uVar16 == 0xf0087)) ||
               (uVar16 == 0xf0089)) {
              FUN_00a7c930();
              uStack_110 = 0;
              uStack_10c = 0;
              uStack_11c = 0xffffffff;
              uStack_118 = 0xffffffff;
              uStack_108 = 0;
              uStack_fc = 0;
              uStack_104 = 0x3f800000;
              uStack_f8 = 0;
              fStack_100 = 1.0;
              uStack_f4 = 0;
              FUN_00a7c960(local_a0);
              fStack_100 = *(float *)(param_1 + 100) * local_70;
              uStack_11c = local_98;
              uStack_118 = uStack_14;
              uStack_fc = uStack_68;
              uStack_f4 = uStack_54;
              FUN_00c4b740(auStack_b4,local_120);
            }
          }
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x178) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x160));
  }
  return;
}

// 00C60180  FUN_00c60180  size=87  [between]
void __thiscall FUN_00c60180(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x60) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0xc) < *(int *)(iVar1 + 8)) {
      cFixedList::insert_22(&param_2,iVar1 + 0x18,param_2);
    }
    else {
      FUN_00dd5650(&DAT_016a7040);
    }
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  }
  return;
}

// 00C601E0  FUN_00c601e0  size=187  [between]
void __thiscall
FUN_00c601e0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined1 local_54 [4];
  undefined4 local_50 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_50[0] = param_2;
  local_40 = *param_3;
  local_3c = param_3[1];
  local_38 = param_3[2];
  local_34 = param_3[3];
  local_1c = param_6;
  local_30 = *param_4;
  local_18 = param_7;
  local_2c = param_4[1];
  local_28 = param_4[2];
  local_24 = param_4[3];
  local_20 = param_5;
  if (*(int *)(param_1 + 0x60) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0xc) < *(int *)(iVar1 + 8)) {
      cFixedList::insert_22(local_54,iVar1 + 0x18,local_50);
    }
    else {
      FUN_00dd5650(&DAT_016a7040);
    }
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  }
  return;
}

// 00C602A0  FUN_00c602a0  size=82  [between]
void __thiscall FUN_00c602a0(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x50) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  }
  if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 8)) {
    cFixedList::insert_17(&param_2,param_1 + 0x18,param_2);
  }
  else {
    FUN_00dd5650(&DAT_016a7080);
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  }
  return;
}

// 00C60300  FUN_00c60300  size=243  [between]
void __thiscall FUN_00c60300(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int local_40 [2];
  undefined2 local_38;
  undefined1 local_36;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = param_3;
  if (param_3 != 0) {
    if (*(int *)(param_1 + 0x50) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
    }
    FUN_00a7f290(0);
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_38 = 0xffff;
    local_28 = 0;
    local_24 = 0;
    local_36 = 0xff;
    local_20 = 0;
    local_8 = 0xffffffff;
    local_4 = 0;
    local_1c = 0x3f800000;
    local_18 = 0x3f800000;
    local_14 = 0x3f800000;
    local_10 = 0x3f800000;
    local_c = 0x3f800000;
    FUN_00a81330();
    iVar2 = FUN_00a7c8a0();
    if (*(int *)(iVar2 + 0x644) != 0) {
      FUN_00c1d9b0(*(int *)(iVar2 + 0x644));
      FUN_00a7c960(&param_2);
      local_8 = param_4;
      local_4 = 0;
      local_40[0] = iVar1;
      if (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x24)) {
        cFixedList::insert_18(&param_3,param_1 + 0x34,local_40);
      }
    }
    if (*(int *)(param_1 + 0x50) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
    }
  }
  return;
}

// 00C60400  FUN_00c60400  size=224  [between]
void __thiscall
FUN_00c60400(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int local_40;
  undefined1 local_3c [4];
  undefined2 local_38;
  undefined1 local_36;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = param_4;
  if (param_4 != 0) {
    if (*(int *)(param_1 + 0x50) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
    }
    FUN_00a7f290(0);
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_36 = 0xff;
    local_24 = 0;
    local_8 = 0xffffffff;
    local_20 = 0;
    local_1c = 0x3f800000;
    local_38 = 0xffff;
    local_18 = 0x3f800000;
    local_14 = 0x3f800000;
    local_10 = 0x3f800000;
    local_4 = 0;
    local_c = 0x3f800000;
    FUN_00c1dd20(param_3,local_3c);
    FUN_00a7c960(&param_2);
    local_8 = param_5;
    local_4 = 0;
    local_40 = iVar1;
    if (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x24)) {
      cFixedList::insert_18(&param_4,param_1 + 0x34,&local_40);
    }
    if (*(int *)(param_1 + 0x50) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
    }
  }
  return;
}

// 00C604E0  FUN_00c604e0  size=38  [between]
undefined4 * __fastcall FUN_00c604e0(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  param_1[0x1e] = 0;
  param_1[0x26] = 0;
  return param_1;
}

// 00C60510  FUN_00c60510  size=81  [between]
void __fastcall FUN_00c60510(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x78) = 0;
    FUN_00dd7270();
  }
  FUN_00dd7270();
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00c4c940();
  }
  Hw::cHeap::cHeap_3();
  return;
}

// 00C605B0  FUN_00c605b0  size=134  [between]
void __fastcall FUN_00c605b0(int param_1)

{
  int iVar1;
  int local_28;
  undefined4 local_24;
  undefined1 local_20 [28];
  
  if (*(int *)(param_1 + 4) != 0) {
    local_28 = *(int *)(param_1 + 0x10);
    if (0 < local_28) {
      iVar1 = 0;
      do {
        FUN_00c5c2f0(local_20,&local_24,*(int *)(param_1 + 4) + iVar1 + 0x30);
        FUN_00c481a0(local_20,local_24);
        iVar1 = iVar1 + 0x70;
        local_28 = local_28 + -1;
      } while (local_28 != 0);
    }
    iVar1 = *(int *)(param_1 + 8);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
      if (*(int *)(iVar1 + 0x14) == 0) {
        FUN_00c31ee0();
        return;
      }
      FUN_00c31ff0();
    }
  }
  return;
}

// 00C60640  FUN_00c60640  size=154  [between]
void __fastcall FUN_00c60640(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)(**(code **)(*(int *)(param_1 + 8) + 0x1c))(0);
  while (puVar1 != (undefined4 *)0x0) {
    FUN_00c32850();
    if (((puVar1[1] == 0) || ((float)puVar1[5] <= 0.0)) ||
       ((puVar1[6] != 0 && ((float)puVar1[9] <= 0.0)))) {
      FUN_00c40020(*puVar1);
      puVar2 = (undefined4 *)(**(code **)(*(int *)(param_1 + 8) + 0x1c))(puVar1);
      if ((undefined4 *)puVar1[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)puVar1[2])(1);
      }
      FUN_00dd4920(puVar1);
      puVar1 = puVar2;
    }
    else {
      puVar1 = (undefined4 *)(**(code **)(*(int *)puVar1[-1] + 0x1c))(puVar1);
    }
  }
  return;
}

// 00C606E0  FUN_00c606e0  size=163  [between]
void __fastcall FUN_00c606e0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)(**(code **)(*(int *)(param_1 + 8) + 0x1c))(0);
  while (puVar1 != (undefined4 *)0x0) {
    if (puVar1[2] != 0) {
      (**(code **)(*(int *)puVar1[2] + 8))();
    }
    if (((puVar1[1] == 0) || ((float)puVar1[5] <= 0.0)) ||
       ((puVar1[6] != 0 && ((float)puVar1[9] <= 0.0)))) {
      FUN_00c40020(*puVar1);
      puVar2 = (undefined4 *)(**(code **)(*(int *)(param_1 + 8) + 0x1c))(puVar1);
      if ((undefined4 *)puVar1[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)puVar1[2])(1);
      }
      FUN_00dd4920(puVar1);
      puVar1 = puVar2;
    }
    else {
      puVar1 = (undefined4 *)(**(code **)(*(int *)puVar1[-1] + 0x1c))(puVar1);
    }
  }
  return;
}

// 00C60790  FUN_00c60790  size=84  [between]
void __fastcall FUN_00c60790(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x78) = 0;
    FUN_00dd7270();
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00c4c940();
    (**(code **)(*(int *)(param_1 + 8) + 8))();
  }
  FUN_00dd7270();
  return;
}

// 00C607F0  FUN_00c607f0  size=133  [between]
undefined4 __thiscall
FUN_00c607f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  undefined4 *puVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xa0);
  if (*(int *)(param_1 + 0xb8) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  puVar2 = (undefined4 *)FUN_00c56140();
  if (puVar2 == (undefined4 *)0x0) {
    FUN_00dd5650(&DAT_016a6f0c);
    if (*(int *)(param_1 + 0xb8) != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  Wind::Geometry::GlobalModule::GlobalModule(param_2,param_3,param_4,param_5,param_6);
  uVar1 = *puVar2;
  if (*(int *)(param_1 + 0xb8) != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return uVar1;
}

// 00C60970  FUN_00c60970  size=40  [between]
void __fastcall FUN_00c60970(int param_1)

{
  FUN_00c5c740();
  if (*(int *)(param_1 + 0x2274) != 0) {
    *(undefined4 *)(param_1 + 0x2278) = 0;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}

// 00C609A0  lib::AllocatedArray<cEnemyCautionStateManager*>::AllocatedArray<cEnemyCautionStateManager*>  size=153  [class]
void __fastcall
lib::AllocatedArray<cEnemyCautionStateManager*>::AllocatedArray<cEnemyCautionStateManager*>
          (undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *local_4;
  
  local_4 = param_1;
  puVar1 = (undefined4 *)FUN_00dd3500(0x18,&DAT_01b7bd48);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = vftable;
    puVar1[4] = 0;
    puVar1[5] = 0;
  }
  local_4 = &DAT_01b7bd48;
  FUN_00c5d4d0(0x20,&local_4);
  param_1[0xd] = 0;
  *param_1 = puVar1;
  param_1[0xe] = 0;
  param_1[1] = 0;
  param_1[0xf] = 0;
  param_1[0xb] = 0;
  param_1[3] = 0;
  param_1[9] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  FUN_00dd7240();
  return;
}

// 00C60A40  lib::AllocatedArray<EntityHandle>::AllocatedArray<EntityHandle>  size=85  [class]
void __fastcall lib::AllocatedArray<EntityHandle>::AllocatedArray<EntityHandle>(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *local_4;
  
  local_4 = param_1;
  FUN_00dd7240();
  puVar1 = (undefined4 *)FUN_00dd3500(0x18,&DAT_01b7bd48);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = vftable;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar2 = puVar1;
  }
  local_4 = &DAT_01b7bd48;
  FUN_008dc010(0x10,&local_4);
  *param_1 = puVar2;
  return;
}

// 00C60AA0  lib::AllocatedArray<SituationManagerImplement::Unit*>::AllocatedArray<SituationManagerImplement::Unit*>  size=103  [class]
undefined4 * __thiscall
lib::AllocatedArray<SituationManagerImplement::Unit*>::
AllocatedArray<SituationManagerImplement::Unit*>(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = param_2;
  *param_1 = SituationManagerImplement::vftable;
  param_1[1] = param_2;
  param_1[8] = 0;
  FUN_00dd7240();
  puVar2 = (undefined4 *)FUN_00dd3500(0x18,uVar1);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = vftable;
    puVar2[4] = 0;
    puVar2[5] = 0;
    param_2 = uVar1;
    FUN_00c5d5d0(0x80,&param_2);
    param_1[10] = puVar2;
  }
  return param_1;
}

// 00C613D0  lib::AllocatedArray<sTerritoryAtData>::AllocatedArray<sTerritoryAtData>  size=89  [class]
void __fastcall
lib::AllocatedArray<sTerritoryAtData>::AllocatedArray<sTerritoryAtData>(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *local_4;
  
  local_4 = param_1;
  puVar1 = (undefined4 *)FUN_00dd3500(0x18,&DAT_01b7bd48);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = vftable;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar2 = puVar1;
  }
  local_4 = &DAT_01b7bd48;
  FUN_00c5d6d0(0x80,&local_4);
  param_1[8] = puVar2;
  FUN_00dd7240();
  return;
}

// 00C618A0  lib::AllocatedArray<NinjaRunEventManagerImplement::PointUnit*>::vf00  size=30  [class]
undefined4 __thiscall
lib::AllocatedArray<NinjaRunEventManagerImplement::PointUnit*>::vf00
          (undefined4 param_1,byte param_2)

{
  Array<NinjaRunEventManagerImplement::PointUnit*>::Array<NinjaRunEventManagerImplement::PointUnit*>
            ();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C618C0  lib::AllocatedArray<NinjaRunEventManagerImplement::RegionUnit*>::vf00  size=30  [class]
undefined4 __thiscall
lib::AllocatedArray<NinjaRunEventManagerImplement::RegionUnit*>::vf00
          (undefined4 param_1,byte param_2)

{
  Array<NinjaRunEventManagerImplement::RegionUnit*>::
  Array<NinjaRunEventManagerImplement::RegionUnit*>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C618E0  lib::AllocatedArray<NinjaRunEventManagerImplement::EventUnit*>::vf00  size=30  [class]
undefined4 __thiscall
lib::AllocatedArray<NinjaRunEventManagerImplement::EventUnit*>::vf00
          (undefined4 param_1,byte param_2)

{
  Array<NinjaRunEventManagerImplement::EventUnit*>::Array<NinjaRunEventManagerImplement::EventUnit*>
            ();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C61930  lib::AllocatedArray<cEnemyCautionStateManager*>::vf00  size=30  [class]
undefined4 __thiscall
lib::AllocatedArray<cEnemyCautionStateManager*>::vf00(undefined4 param_1,byte param_2)

{
  Array<cEnemyCautionStateManager*>::Array<cEnemyCautionStateManager*>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C61950  lib::AllocatedArray<SituationManagerImplement::Unit*>::vf00  size=30  [class]
undefined4 __thiscall
lib::AllocatedArray<SituationManagerImplement::Unit*>::vf00(undefined4 param_1,byte param_2)

{
  Array<SituationManagerImplement::Unit*>::Array<SituationManagerImplement::Unit*>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C61970  lib::AllocatedArray<sTerritoryAtData>::vf00  size=30  [class]
undefined4 __thiscall lib::AllocatedArray<sTerritoryAtData>::vf00(undefined4 param_1,byte param_2)

{
  Array<sTerritoryAtData>::Array<sTerritoryAtData>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C61990  lib::AllocatedArray<VoiceSubtitleResourceForAction::Unit>::vf00  size=30  [class]
undefined4 __thiscall
lib::AllocatedArray<VoiceSubtitleResourceForAction::Unit>::vf00(undefined4 param_1,byte param_2)

{
  Array<VoiceSubtitleResourceForAction::Unit>::Array<VoiceSubtitleResourceForAction::Unit>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C619B0  lib::AllocatedArray<VoiceSubtitleResourceForSnake::Unit>::vf00  size=30  [class]
undefined4 __thiscall
lib::AllocatedArray<VoiceSubtitleResourceForSnake::Unit>::vf00(undefined4 param_1,byte param_2)

{
  Array<VoiceSubtitleResourceForSnake::Unit>::Array<VoiceSubtitleResourceForSnake::Unit>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C619D0  lib::AllocatedArray<VoiceSubtitleResourceForSnake::AtrandomCheck>::vf00  size=30  [class]
undefined4 __thiscall
lib::AllocatedArray<VoiceSubtitleResourceForSnake::AtrandomCheck>::vf00
          (undefined4 param_1,byte param_2)

{
  Array<VoiceSubtitleResourceForSnake::AtrandomCheck>::
  Array<VoiceSubtitleResourceForSnake::AtrandomCheck>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C619F0  lib::AllocatedArray<SeHandle>::vf00  size=30  [class]
undefined4 __thiscall lib::AllocatedArray<SeHandle>::vf00(undefined4 param_1,byte param_2)

{
  Array<SeHandle>::Array<SeHandle>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C62930  lib::AllocatedArray<NinjaRunEventManagerImplement::EventUnit*>::AllocatedArray<NinjaRunEventManagerImplement::EventUnit*>  size=108  [class]
undefined4 * __thiscall
lib::AllocatedArray<NinjaRunEventManagerImplement::EventUnit*>::
AllocatedArray<NinjaRunEventManagerImplement::EventUnit*>(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *param_1 = NinjaRunEventManagerImplement::vftable;
  param_1[1] = param_2;
  FUN_00904d60();
  puVar1 = (undefined4 *)FUN_00dd3500(0x18,param_1[1]);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = vftable;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar2 = puVar1;
  }
  param_2 = param_1[1];
  FUN_00c5cf90(8,&param_2);
  param_1[2] = puVar2;
  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff;
  return param_1;
}

// 00C66B90  lib::AllocatedArray<VoiceSubtitleResourceForAction::Unit>::AllocatedArray<VoiceSubtitleResourceForAction::Unit>  size=325  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
lib::AllocatedArray<VoiceSubtitleResourceForAction::Unit>::
AllocatedArray<VoiceSubtitleResourceForAction::Unit>(int *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int *unaff_EBX;
  int unaff_ESI;
  int iStack_4;
  
  cVar2 = (**(code **)(*param_2 + 0x10))("countOf",7);
  if (cVar2 != '\0') {
    (**(code **)(*param_2 + 0x2c))(&stack0xffffffc4);
    (**(code **)(*param_2 + 0x14))("countOf",7);
  }
  if (unaff_ESI != 0) {
    piVar3 = (int *)FUN_00dd3500(0x18,*param_1);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3[1] = 0;
      piVar3[2] = 0;
      piVar3[3] = 0;
      *piVar3 = (int)vftable;
      piVar3[4] = 0;
      piVar3[5] = 0;
    }
    iStack_4 = *param_1;
    FUN_00c5d7c0(unaff_ESI,&iStack_4);
    iStack_4 = 0;
    if (0 < unaff_ESI) {
      do {
        if ((_DAT_01d6448c & 1) == 0) {
          _DAT_01d6448c = _DAT_01d6448c | 1;
          DAT_01d64488 = DAT_01884314;
          DAT_01884314 = DAT_01884314 + 1;
        }
        iVar1 = DAT_01d64488;
        cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_0164a428,DAT_01d64488);
        if (cVar2 != '\0') {
          FUN_00c667e0(param_2);
          (**(code **)(*param_2 + 0x14))(&DAT_0164a428,iVar1);
        }
        (**(code **)(*piVar3 + 8))(&stack0xffffffc4);
        iStack_4 = iStack_4 + 1;
        param_1 = unaff_EBX;
      } while (iStack_4 < unaff_ESI);
    }
    param_1[1] = (int)piVar3;
  }
  return 1;
}

// 00C66CE0  lib::AllocatedArray<SeHandle>::AllocatedArray<SeHandle>  size=780  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
lib::AllocatedArray<SeHandle>::AllocatedArray<SeHandle>(undefined4 *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  int unaff_EBP;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uStack_84;
  int local_80 [18];
  undefined1 uStack_38;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  
  local_80[0] = 0;
  cVar2 = (**(code **)(*param_2 + 0x10))("countOf",7);
  if (cVar2 != '\0') {
    (**(code **)(*param_2 + 0x2c))(&stack0xffffff78);
    (**(code **)(*param_2 + 0x14))("countOf",7);
  }
  local_80[0] = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 0;
  local_80[4] = 0;
  local_80[5] = 0;
  local_80[6] = 0;
  local_80[7] = 0;
  local_80[8] = 0;
  local_80[9] = 0;
  local_80[10] = 0;
  local_80[0xb] = 0;
  local_80[0xc] = 0;
  local_80[0xd] = 0;
  local_80[0xe] = 0;
  local_80[0xf] = 0;
  local_80[0x10] = 0;
  local_80[0x11] = 0;
  if (unaff_EBP != 0) {
    piVar3 = (int *)FUN_00dd3500(0x18,*param_1);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3[1] = 0;
      piVar3[2] = 0;
      piVar3[3] = 0;
      *piVar3 = (int)AllocatedArray<VoiceSubtitleResourceForSnake::Unit>::vftable;
      piVar3[4] = 0;
      piVar3[5] = 0;
    }
    FUN_00c5d8c0(unaff_EBP,&stack0xffffff74);
    iVar8 = 0;
    if (0 < unaff_EBP) {
      do {
        uStack_14 = 0x78;
        uStack_10 = 1000;
        iStack_c = -1;
        uStack_38 = 0;
        if ((_DAT_01d64494 & 1) == 0) {
          _DAT_01d64494 = _DAT_01d64494 | 1;
          DAT_01d64490 = DAT_01884314;
          DAT_01884314 = DAT_01884314 + 1;
        }
        iVar1 = DAT_01d64490;
        cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_0164a428,DAT_01d64490);
        if (cVar2 != '\0') {
          FUN_00c66900(param_2);
          (**(code **)(*param_2 + 0x14))(&DAT_0164a428,iVar1);
        }
        (**(code **)(*piVar3 + 8))(local_80 + 0x10);
        local_80[iStack_c] = local_80[iStack_c] + 1;
        iVar8 = iVar8 + 1;
      } while (iVar8 < unaff_EBP);
    }
    iVar8 = 0;
    param_1[1] = piVar3;
    piVar3 = (int *)FUN_00dd3500(0x18,*param_1);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3[1] = 0;
      piVar3[2] = 0;
      piVar3[3] = 0;
      *piVar3 = (int)AllocatedArray<VoiceSubtitleResourceForSnake::AtrandomCheck>::vftable;
      piVar3[4] = 0;
      piVar3[5] = 0;
    }
    FUN_00c5d9c0(unaff_EBP,&stack0xffffff74);
    if (0 < unaff_EBP) {
      do {
        (**(code **)(*piVar3 + 8))(&stack0xffffff74);
        iVar8 = iVar8 + 1;
      } while (iVar8 < unaff_EBP);
    }
    param_1[0x14] = piVar3;
  }
  puVar7 = param_1 + 2;
  uVar6 = 0;
  do {
    iVar8 = local_80[uVar6];
    if (iVar8 != 0) {
      piVar4 = (int *)FUN_00dd3500(0x18,*param_1);
      piVar3 = (int *)0x0;
      if (piVar4 != (int *)0x0) {
        piVar4[1] = 0;
        piVar4[2] = 0;
        piVar4[3] = 0;
        *piVar4 = (int)AllocatedArray<VoiceSubtitleResourceForSnake::Unit>::vftable;
        piVar4[4] = 0;
        piVar4[5] = 0;
        piVar3 = piVar4;
      }
      uStack_84 = *param_1;
      FUN_00c5d8c0(iVar8,&uStack_84);
      iVar8 = *(int *)(param_1[1] + 4);
      if (iVar8 != *(int *)(param_1[1] + 8) * 0x30 + iVar8) {
        do {
          if (*(uint *)(iVar8 + 0x2c) == uVar6) {
            (**(code **)(*piVar3 + 8))(iVar8);
          }
          iVar8 = iVar8 + 0x30;
        } while (iVar8 != *(int *)(param_1[1] + 8) * 0x30 + *(int *)(param_1[1] + 4));
      }
      *puVar7 = piVar3;
    }
    puVar7 = puVar7 + 1;
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x12);
  puVar5 = (undefined4 *)FUN_00dd3500(0x18,*param_1);
  puVar7 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    *puVar5 = vftable;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar7 = puVar5;
  }
  uStack_84 = *param_1;
  FUN_00c5dac0(0x10,&uStack_84);
  param_1[0x15] = puVar7;
  return 1;
}

// 00D72BC0  lib::AllocatedArray<BattleParameterImplement::Unit>::vf04  size=4  [class]
undefined4 __fastcall lib::AllocatedArray<BattleParameterImplement::Unit>::vf04(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// 00D72C70  lib::AllocatedArray<BattleSituationResource::Unit>::vf04  size=4  [class]
undefined4 __fastcall lib::AllocatedArray<BattleSituationResource::Unit>::vf04(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// 00D74CC0  FUN_00d74cc0  size=256  [callgraph]
undefined4 __thiscall FUN_00d74cc0(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  LONG LVar4;
  int *local_8;
  int *local_4;
  
  FUN_00d74b70();
  local_8 = (int *)0x0;
  local_4 = (int *)0x0;
  cVar2 = lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>::CoreT<sys::AllocatorByHeap>
                    (*param_3);
  if (cVar2 != '\0') {
    if (local_8 != (int *)0x0) {
      iVar3 = (**(code **)(*local_8 + 4))(param_2 * 0x4c);
      if (iVar3 != 0) {
        FUN_00401f90(&local_8);
        piVar1 = local_4;
        if (*(int *)(param_1 + 4) != 0) {
          *(undefined4 *)(param_1 + 8) = 0;
        }
        *(uint *)(param_1 + 0xc) = (uint)(param_2 * 0x4c) / 0x4c;
        *(int *)(param_1 + 4) = iVar3;
        if (local_4 != (int *)0x0) {
          LVar4 = InterlockedDecrement(local_4 + 1);
          if (LVar4 == 0) {
            (**(code **)(*piVar1 + 4))();
            LVar4 = InterlockedDecrement(piVar1 + 2);
            if (LVar4 == 0) {
              (**(code **)(*piVar1 + 8))();
            }
          }
        }
        return 1;
      }
    }
  }
  piVar1 = local_4;
  if (local_4 != (int *)0x0) {
    LVar4 = InterlockedDecrement(local_4 + 1);
    if (LVar4 == 0) {
      (**(code **)(*piVar1 + 4))();
      LVar4 = InterlockedDecrement(piVar1 + 2);
      if (LVar4 == 0) {
        (**(code **)(*piVar1 + 8))();
      }
    }
  }
  return 0;
}

// 00D74DC0  FUN_00d74dc0  size=244  [callgraph]
undefined4 __thiscall FUN_00d74dc0(int param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  LONG LVar4;
  int *local_8;
  int *local_4;
  
  FUN_00d74be0();
  local_8 = (int *)0x0;
  local_4 = (int *)0x0;
  cVar2 = lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>::CoreT<sys::AllocatorByHeap>
                    (*param_3);
  if (cVar2 != '\0') {
    if (local_8 != (int *)0x0) {
      iVar3 = (**(code **)(*local_8 + 4))(param_2 * 4);
      if (iVar3 != 0) {
        FUN_00401f90(&local_8);
        piVar1 = local_4;
        if (*(int *)(param_1 + 4) != 0) {
          *(undefined4 *)(param_1 + 8) = 0;
        }
        *(uint *)(param_1 + 0xc) = param_2 & 0x3fffffff;
        *(int *)(param_1 + 4) = iVar3;
        if (local_4 != (int *)0x0) {
          LVar4 = InterlockedDecrement(local_4 + 1);
          if (LVar4 == 0) {
            (**(code **)(*piVar1 + 4))();
            LVar4 = InterlockedDecrement(piVar1 + 2);
            if (LVar4 == 0) {
              (**(code **)(*piVar1 + 8))();
            }
          }
        }
        return 1;
      }
    }
  }
  piVar1 = local_4;
  if (local_4 != (int *)0x0) {
    LVar4 = InterlockedDecrement(local_4 + 1);
    if (LVar4 == 0) {
      (**(code **)(*piVar1 + 4))();
      LVar4 = InterlockedDecrement(piVar1 + 2);
      if (LVar4 == 0) {
        (**(code **)(*piVar1 + 8))();
      }
    }
  }
  return 0;
}

// 00D74EC0  FUN_00d74ec0  size=259  [callgraph]
undefined4 __thiscall FUN_00d74ec0(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  LONG LVar4;
  int *local_8;
  int *local_4;
  
  FUN_00d74c50();
  local_8 = (int *)0x0;
  local_4 = (int *)0x0;
  cVar2 = lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>::CoreT<sys::AllocatorByHeap>
                    (*param_3);
  if (cVar2 != '\0') {
    if (local_8 != (int *)0x0) {
      iVar3 = (**(code **)(*local_8 + 4))(param_2 * 0x1a8);
      if (iVar3 != 0) {
        FUN_00401f90(&local_8);
        piVar1 = local_4;
        if (*(int *)(param_1 + 4) != 0) {
          *(undefined4 *)(param_1 + 8) = 0;
        }
        *(uint *)(param_1 + 0xc) = (uint)(param_2 * 0x1a8) / 0x1a8;
        *(int *)(param_1 + 4) = iVar3;
        if (local_4 != (int *)0x0) {
          LVar4 = InterlockedDecrement(local_4 + 1);
          if (LVar4 == 0) {
            (**(code **)(*piVar1 + 4))();
            LVar4 = InterlockedDecrement(piVar1 + 2);
            if (LVar4 == 0) {
              (**(code **)(*piVar1 + 8))();
            }
          }
        }
        return 1;
      }
    }
  }
  piVar1 = local_4;
  if (local_4 != (int *)0x0) {
    LVar4 = InterlockedDecrement(local_4 + 1);
    if (LVar4 == 0) {
      (**(code **)(*piVar1 + 4))();
      LVar4 = InterlockedDecrement(piVar1 + 2);
      if (LVar4 == 0) {
        (**(code **)(*piVar1 + 8))();
      }
    }
  }
  return 0;
}

// 00D74FE0  lib::AllocatedArray<BattleParameterImplement::Unit>::AllocatedArray<BattleParameterImplement::Unit>_2  size=154  [class]
void __thiscall
lib::AllocatedArray<BattleParameterImplement::Unit>::
AllocatedArray<BattleParameterImplement::Unit>_2(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *local_50;
  undefined1 local_4c [76];
  
  iVar2 = *param_2;
  local_50 = param_2 + 1;
  puVar1 = (undefined4 *)FUN_00dd3500(0x18,*(undefined4 *)(param_1 + 4));
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = vftable;
    puVar1[4] = 0;
    puVar1[5] = 0;
  }
  param_2 = *(int **)(param_1 + 4);
  FUN_00d74cc0(iVar2,&param_2);
  *(undefined4 **)(param_1 + 8) = puVar1;
  if (puVar1[1] != 0) {
    puVar1[2] = 0;
  }
  if (0 < iVar2) {
    do {
      FUN_00d726e0(&local_50);
      (**(code **)(**(int **)(param_1 + 8) + 8))(local_4c);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

// 00D75200  lib::AllocatedArray<BattleParameterImplement::Unit>::vf00  size=30  [class]
undefined4 __thiscall
lib::AllocatedArray<BattleParameterImplement::Unit>::vf00(undefined4 param_1,byte param_2)

{
  Array<BattleParameterImplement::Unit>::Array<BattleParameterImplement::Unit>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D75220  lib::AllocatedArray<BattleParameterResource*>::vf00  size=30  [class]
undefined4 __thiscall
lib::AllocatedArray<BattleParameterResource*>::vf00(undefined4 param_1,byte param_2)

{
  Array<BattleParameterResource*>::Array<BattleParameterResource*>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D75240  lib::AllocatedArray<BattleSituationResource::Unit>::vf00  size=30  [class]
undefined4 __thiscall
lib::AllocatedArray<BattleSituationResource::Unit>::vf00(undefined4 param_1,byte param_2)

{
  Array<BattleSituationResource::Unit>::Array<BattleSituationResource::Unit>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D75D00  FUN_00d75d00  size=943  [callgraph]
undefined4 __thiscall FUN_00d75d00(int param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_0164a424,7);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x2c))(param_1);
    (**(code **)(*param_2 + 0x14))(&DAT_0164a424,7);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))("AtkPower",7);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x2c))(param_1 + 4);
    (**(code **)(*param_2 + 0x14))("AtkPower",7);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))("AtkHavokMulScalar",7);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x2c))(param_1 + 8);
    (**(code **)(*param_2 + 0x14))("AtkHavokMulScalar",7);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))("AtkHavokPow",7);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x2c))(param_1 + 0xc);
    (**(code **)(*param_2 + 0x14))("AtkHavokPow",7);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))("HitStopTime",7);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x2c))(param_1 + 0x10);
    (**(code **)(*param_2 + 0x14))("HitStopTime",7);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_016c0ea8,7);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x2c))(param_1 + 0x14);
    (**(code **)(*param_2 + 0x14))(&DAT_016c0ea8,7);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_016c0ea0,7);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x2c))(param_1 + 0x18);
    (**(code **)(*param_2 + 0x14))(&DAT_016c0ea0,7);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))("Float0",0xb);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x1c);
    (**(code **)(*param_2 + 0x14))("Float0",0xb);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))("Float1",0xb);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x20);
    (**(code **)(*param_2 + 0x14))("Float1",0xb);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))("Float2",0xb);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x24);
    (**(code **)(*param_2 + 0x14))("Float2",0xb);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))("Float3",0xb);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x28);
    (**(code **)(*param_2 + 0x14))("Float3",0xb);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_01655cd0,7);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x2c))(param_1 + 0x2c);
    (**(code **)(*param_2 + 0x14))(&DAT_01655cd0,7);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_016c0e78,0xb);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x30);
    (**(code **)(*param_2 + 0x14))(&DAT_016c0e78,0xb);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_016c0e70,0xb);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x34);
    (**(code **)(*param_2 + 0x14))(&DAT_016c0e70,0xb);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))("VERYHARD",0xb);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x38);
    (**(code **)(*param_2 + 0x14))("VERYHARD",0xb);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_016c0e60,0xb);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x3c);
    (**(code **)(*param_2 + 0x14))(&DAT_016c0e60,0xb);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_016c0e58,7);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x2c))(param_1 + 0x40);
    (**(code **)(*param_2 + 0x14))(&DAT_016c0e58,7);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_016c0e50,7);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x2c))(param_1 + 0x44);
    (**(code **)(*param_2 + 0x14))(&DAT_016c0e50,7);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_016c0e48,7);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x2c))(param_1 + 0x48);
    (**(code **)(*param_2 + 0x14))(&DAT_016c0e48,7);
  }
  return 1;
}

// 00D76100  lib::AllocatedArray<BattleParameterResource*>::AllocatedArray<BattleParameterResource*>  size=102  [class]
undefined4 * __thiscall
lib::AllocatedArray<BattleParameterResource*>::AllocatedArray<BattleParameterResource*>
          (undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  param_1[1] = param_2;
  *param_1 = BattleParameterManagerImplement::vftable;
  param_1[8] = 0;
  puVar1 = (undefined4 *)FUN_00dd3500(0x18,param_1[1]);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = vftable;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar2 = puVar1;
  }
  param_2 = param_1[1];
  FUN_00d74dc0(0x20,&param_2);
  param_1[10] = puVar2;
  FUN_00dd7240();
  return param_1;
}

// 00D76290  FUN_00d76290  size=62  [callgraph]
bool FUN_00d76290(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00dd3500(0x30,param_1);
  if (iVar1 != 0) {
    DAT_01dc5260 = lib::AllocatedArray<BattleParameterResource*>::
                   AllocatedArray<BattleParameterResource*>(param_1);
    return DAT_01dc5260 != 0;
  }
  DAT_01dc5260 = 0;
  return false;
}

// 00D762D0  FUN_00d762d0  size=166  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00d762d0(undefined4 param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = (**(code **)(*param_2 + 0x10))("objid",8);
  if (cVar2 != '\0') {
    (**(code **)(*param_2 + 0x28))(param_1);
    (**(code **)(*param_2 + 0x14))("objid",8);
  }
  iVar3 = 5;
  do {
    if ((_DAT_01dc52cc & 1) == 0) {
      _DAT_01dc52cc = _DAT_01dc52cc | 1;
      DAT_01dc52c8 = DAT_01884314;
      DAT_01884314 = DAT_01884314 + 1;
    }
    iVar1 = DAT_01dc52c8;
    cVar2 = (**(code **)(*param_2 + 0x10))("level",DAT_01dc52c8);
    if (cVar2 != '\0') {
      FUN_00d74a70(param_2);
      (**(code **)(*param_2 + 0x14))("level",iVar1);
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return 1;
}

// 00D76420  lib::AllocatedArray<BattleParameterImplement::Unit>::AllocatedArray<BattleParameterImplement::Unit>  size=304  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
lib::AllocatedArray<BattleParameterImplement::Unit>::AllocatedArray<BattleParameterImplement::Unit>
          (int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  int unaff_EBX;
  int iVar4;
  int iStack_4;
  
  cVar2 = (**(code **)*param_2)();
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(*param_2 + 0x10))("countOf",7);
    if (cVar2 != '\0') {
      (**(code **)(*param_2 + 0x2c))(&iStack_4);
      (**(code **)(*param_2 + 0x14))("countOf",7);
    }
    puVar3 = (undefined4 *)FUN_00dd3500(0x18,*(undefined4 *)(param_1 + 4));
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar3 = vftable;
      puVar3[4] = 0;
      puVar3[5] = 0;
    }
    FUN_00d74cc0(iStack_4,&stack0xffffffa4);
    *(undefined4 **)(param_1 + 8) = puVar3;
    if (puVar3[1] != 0) {
      puVar3[2] = 0;
    }
    iVar4 = 0;
    if (0 < iStack_4) {
      do {
        if ((_DAT_01dc527c & 1) == 0) {
          _DAT_01dc527c = _DAT_01dc527c | 1;
          DAT_01dc5278 = DAT_01884314;
          DAT_01884314 = DAT_01884314 + 1;
        }
        iVar1 = DAT_01dc5278;
        cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_0164a428,DAT_01dc5278);
        if (cVar2 != '\0') {
          FUN_00d75d00(param_2);
          (**(code **)(*param_2 + 0x14))(&DAT_0164a428,iVar1);
        }
        (**(code **)(**(int **)(unaff_EBX + 8) + 8))(&stack0xffffffa4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < iStack_4);
    }
  }
  return 1;
}

// 00D765D0  lib::AllocatedArray<BattleSituationResource::Unit>::AllocatedArray<BattleSituationResource::Unit>  size=304  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
lib::AllocatedArray<BattleSituationResource::Unit>::AllocatedArray<BattleSituationResource::Unit>
          (undefined4 *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int unaff_ESI;
  undefined4 *local_1b4;
  
  iVar4 = 0;
  local_1b4 = (undefined4 *)0x0;
  cVar2 = (**(code **)(*param_2 + 0x10))("countOf",7);
  if (cVar2 != '\0') {
    (**(code **)(*param_2 + 0x2c))(&stack0xfffffe44);
    (**(code **)(*param_2 + 0x14))("countOf",7);
  }
  if (unaff_ESI != 0) {
    piVar3 = (int *)FUN_00dd3500(0x18,*param_1);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3[1] = 0;
      piVar3[2] = 0;
      piVar3[3] = 0;
      *piVar3 = (int)vftable;
      piVar3[4] = 0;
      piVar3[5] = 0;
    }
    FUN_00d74ec0(unaff_ESI,&stack0xfffffe48);
    if (0 < unaff_ESI) {
      do {
        FUN_00d734b0();
        if ((_DAT_01dc52d4 & 1) == 0) {
          _DAT_01dc52d4 = _DAT_01dc52d4 | 1;
          DAT_01dc52d0 = DAT_01884314;
          DAT_01884314 = DAT_01884314 + 1;
        }
        iVar1 = DAT_01dc52d0;
        cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_0164a428,DAT_01dc52d0);
        if (cVar2 != '\0') {
          FUN_00d762d0(param_2);
          (**(code **)(*param_2 + 0x14))(&DAT_0164a428,iVar1);
        }
        (**(code **)(*piVar3 + 8))(&stack0xfffffe48);
        iVar4 = iVar4 + 1;
        param_1 = local_1b4;
      } while (iVar4 < unaff_ESI);
    }
    param_1[1] = piVar3;
  }
  return 1;
}

// 00D8A480  lib::AllocatedArray<Slot*>::vf00  size=30  [class]
undefined4 __thiscall lib::AllocatedArray<Slot*>::vf00(undefined4 param_1,byte param_2)

{
  Array<Slot*>::Array<Slot*>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

