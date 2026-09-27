// src/managers/playermanager/PlayerManagerImplement.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C13520..00C4CF00, 48 functions

#include "types.h"

// 00C13520  PlayerManagerImplement::vf10  size=47  [class]
void PlayerManagerImplement::vf10(void)

{
  if (-1 < DAT_01be9220) {
    cPlayerPosInfo::setPlayerPos(DAT_01be9220);
    FUN_00da0d70();
    return;
  }
  cPlayerPosInfo::setPlayerPos(0);
  FUN_00da0d70();
  return;
}

// 00C13550  PlayerManagerImplement::vf44  size=33  [class]
void PlayerManagerImplement::vf44(void)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a805f0();
  }
  FUN_00a7c950();
  return;
}

// 00C13580  PlayerManagerImplement::vf48  size=11  [class]
void PlayerManagerImplement::vf48(void)

{
  FUN_00a81330();
  return;
}

// 00C13590  PlayerManagerImplement::vf4C  size=28  [class]
void PlayerManagerImplement::vf4C(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  return;
}

// 00C135B0  PlayerManagerImplement::vf50  size=11  [class]
void PlayerManagerImplement::vf50(void)

{
  FUN_00a7c950();
  return;
}

// 00C135C0  PlayerManagerImplement::vf54  size=13  [class]
void __thiscall PlayerManagerImplement::vf54(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xe0) = param_2;
  return;
}

// 00C135D0  PlayerManagerImplement::vf58  size=7  [class]
undefined4 __fastcall PlayerManagerImplement::vf58(int param_1)

{
  return *(undefined4 *)(param_1 + 0xe0);
}

// 00C135E0  PlayerManagerImplement::vf60  size=13  [class]
void __thiscall PlayerManagerImplement::vf60(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xe4) = param_2;
  return;
}

// 00C135F0  PlayerManagerImplement::vf64  size=13  [class]
void __thiscall PlayerManagerImplement::vf64(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xe8) = param_2;
  return;
}

// 00C13600  PlayerManagerImplement::vf68  size=7  [class]
undefined4 __fastcall PlayerManagerImplement::vf68(int param_1)

{
  return *(undefined4 *)(param_1 + 0xe4);
}

// 00C13610  PlayerManagerImplement::vf6C  size=7  [class]
undefined4 __fastcall PlayerManagerImplement::vf6C(int param_1)

{
  return *(undefined4 *)(param_1 + 0xe8);
}

// 00C13620  PlayerManagerImplement::vf74  size=13  [class]
void __thiscall PlayerManagerImplement::vf74(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xec) = param_2;
  return;
}

// 00C13630  PlayerManagerImplement::vf78  size=7  [class]
undefined4 __fastcall PlayerManagerImplement::vf78(int param_1)

{
  return *(undefined4 *)(param_1 + 0xec);
}

// 00C13690  PlayerManagerImplement::vf7C  size=208  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall PlayerManagerImplement::vf7C(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a4ae30();
  if (iVar1 == 0) {
    iVar1 = FUN_00a4a3d0(DAT_018b9174);
    if ((iVar1 == 0) && (DAT_01bea030 != 2)) {
      if ((DAT_01bea030 != 6) && (DAT_01bea030 != 7)) {
        iVar1 = FUN_00d46780();
        if (iVar1 == 0) {
          iVar1 = FUN_00d467a0();
          if (iVar1 == 0) {
            _DAT_01b758a0 = FUN_009c4640(&DAT_01b6efe0);
            _DAT_01b758a0 = *(int *)(param_1 + 0xd4) - _DAT_01b758a0;
            _DAT_01b758a4 = FUN_009c4680(&DAT_01b6efe0);
            _DAT_01b758a4 = *(int *)(param_1 + 0xd8) - _DAT_01b758a4;
          }
        }
      }
      DAT_01b7589c = *(undefined **)(param_1 + 0xdc);
      if (0x98967e < (int)DAT_01b7589c) {
        DAT_01b7589c = &DAT_0098967f;
      }
      FUN_009c69c0(param_1 + 0xe0,DAT_01bea030);
    }
  }
  return;
}

// 00C13760  PlayerManagerImplement::vf80  size=23  [class]
void __fastcall PlayerManagerImplement::vf80(int *param_1)

{
  if ((DAT_01bea030 != 6) && (DAT_01bea030 != 7)) {
                    /* WARNING: Could not recover jumptable at 0x00c13774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x7c))();
    return;
  }
  return;
}

// 00C13780  PlayerManagerImplement::vfA4  size=98  [class]
undefined * __thiscall PlayerManagerImplement::vfA4(int param_1,int param_2)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  
  piVar1 = (int *)(param_1 + 0xdc);
  while( true ) {
    puVar2 = (undefined *)*piVar1;
    puVar3 = (undefined *)(*piVar1 + param_2);
    if ((int)puVar3 < 1) {
      puVar3 = (undefined *)0x0;
    }
    else if (0x98967e < (int)puVar3) {
      puVar3 = &DAT_0098967f;
    }
    if (puVar2 == puVar3) break;
    LOCK();
    puVar4 = (undefined *)*piVar1;
    bVar5 = puVar2 == puVar4;
    if (bVar5) {
      *piVar1 = (int)puVar3;
      puVar4 = puVar2;
    }
    UNLOCK();
    if (bVar5) {
      return puVar4;
    }
  }
  return puVar3;
}

// 00C137F0  PlayerManagerImplement::vfA8  size=7  [class]
undefined4 __fastcall PlayerManagerImplement::vfA8(int param_1)

{
  return *(undefined4 *)(param_1 + 0xdc);
}

// 00C13800  PlayerManagerImplement::vf84  size=11  [class]
void __fastcall PlayerManagerImplement::vf84(int param_1)

{
  *(undefined4 *)(param_1 + 0xf4) = 1;
  return;
}

// 00C13810  PlayerManagerImplement::vf88  size=27  [class]
undefined4 __fastcall PlayerManagerImplement::vf88(int param_1)

{
  if (9 < *(int *)(param_1 + 0xd4)) {
    return 0;
  }
  *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd4) + 1;
  return 1;
}

// 00C13830  PlayerManagerImplement::vf8C  size=26  [class]
undefined4 __fastcall PlayerManagerImplement::vf8C(int param_1)

{
  if (*(int *)(param_1 + 0xd4) < 1) {
    return 0;
  }
  *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd4) + -1;
  return 1;
}

// 00C13850  PlayerManagerImplement::vf90  size=27  [class]
undefined4 __fastcall PlayerManagerImplement::vf90(int param_1)

{
  if (4 < *(int *)(param_1 + 0xd8)) {
    return 0;
  }
  *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
  return 1;
}

// 00C13870  PlayerManagerImplement::vf94  size=26  [class]
undefined4 __fastcall PlayerManagerImplement::vf94(int param_1)

{
  if (*(int *)(param_1 + 0xd8) < 1) {
    return 0;
  }
  *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + -1;
  return 1;
}

// 00C13890  PlayerManagerImplement::vf98  size=7  [class]
undefined4 __fastcall PlayerManagerImplement::vf98(int param_1)

{
  return *(undefined4 *)(param_1 + 0xd4);
}

// 00C138A0  PlayerManagerImplement::vf9C  size=7  [class]
undefined4 __fastcall PlayerManagerImplement::vf9C(int param_1)

{
  return *(undefined4 *)(param_1 + 0xd8);
}

// 00C138B0  PlayerManagerImplement::vfAC  size=19  [class]
bool __thiscall PlayerManagerImplement::vfAC(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 0xf0) & param_2) != 0;
}

// 00C138D0  PlayerManagerImplement::vfB0  size=13  [class]
void __thiscall PlayerManagerImplement::vfB0(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0xf0) = *(uint *)(param_1 + 0xf0) | param_2;
  return;
}

// 00C138E0  PlayerManagerImplement::vf5C  size=29  [class]
undefined4 PlayerManagerImplement::vf5C(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a4ae60();
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = FUN_009c47f0();
  return uVar2;
}

// 00C13900  PlayerManagerImplement::vf70  size=29  [class]
undefined4 PlayerManagerImplement::vf70(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a4ae60();
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = FUN_009c48b0();
  return uVar2;
}

// 00C238E0  PlayerManagerImplement::vf04  size=271  [class]
void __fastcall PlayerManagerImplement::vf04(int param_1)

{
  int iVar1;
  
  if ((0 < *(int *)(param_1 + 0xa0)) &&
     (iVar1 = *(int *)(param_1 + 0xa0) + -1, *(int *)(param_1 + 0xa0) = iVar1, iVar1 < 1)) {
    FUN_00e03a70(0,*(undefined4 *)(param_1 + 0x98));
    FUN_00e03a70(1,*(undefined4 *)(param_1 + 0x98));
    FUN_00e03a70(2,*(undefined4 *)(param_1 + 0x98));
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  if (((*(int *)(param_1 + 0xa0) < 1) && (0 < *(int *)(param_1 + 0x9c))) &&
     (iVar1 = *(int *)(param_1 + 0x9c) + -1, *(int *)(param_1 + 0x9c) = iVar1, iVar1 < 1)) {
    FUN_00e03a70(0,0x3f800000);
    FUN_00e03a70(1,0x3f800000);
    FUN_00e03a70(2,0x3f800000);
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xf8);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != *(int *)(iVar1 + 4) + *(int *)(iVar1 + 8) * 4)) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(iVar1 + 0x40);
      *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(iVar1 + 0x44);
      *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(iVar1 + 0x48);
      *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(iVar1 + 0x4c);
    }
  }
  return;
}

// 00C239F0  PlayerManagerImplement::vf34  size=82  [class]
void __fastcall PlayerManagerImplement::vf34(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0xf8) + 4);
  if (iVar3 != iVar3 + *(int *)(*(int *)(param_1 + 0xf8) + 8) * 4) {
    do {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00a7c8a0();
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0xfc))();
        }
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 != *(int *)(*(int *)(param_1 + 0xf8) + 4) +
                      *(int *)(*(int *)(param_1 + 0xf8) + 8) * 4);
  }
  return;
}

// 00C23A50  PlayerManagerImplement::vf38  size=82  [class]
void __fastcall PlayerManagerImplement::vf38(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0xf8) + 4);
  if (iVar3 != iVar3 + *(int *)(*(int *)(param_1 + 0xf8) + 8) * 4) {
    do {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00a7c8a0();
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x100))();
        }
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 != *(int *)(*(int *)(param_1 + 0xf8) + 4) +
                      *(int *)(*(int *)(param_1 + 0xf8) + 8) * 4);
  }
  return;
}

// 00C23AB0  PlayerManagerImplement::vf3C  size=67  [class]
void __fastcall PlayerManagerImplement::vf3C(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x28))(0);
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar3);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00c23aef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar2 + 0x3f4))();
      return;
    }
  }
  return;
}

// 00C23B00  PlayerManagerImplement::vf28  size=70  [class]
undefined4 __thiscall PlayerManagerImplement::vf28(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(param_1 + 0xf8) + 8) == 0) {
    return 0;
  }
  if (param_2 == -1) {
    uVar1 = FUN_00a81330();
    return uVar1;
  }
  if (param_2 == 1) {
    uVar1 = FUN_00a81330();
    return uVar1;
  }
  uVar1 = FUN_00a81330();
  return uVar1;
}

// 00C23B50  PlayerManagerImplement::vf24  size=70  [class]
undefined4 __thiscall PlayerManagerImplement::vf24(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(param_1 + 0xf8) + 8) == 0) {
    return 0;
  }
  if (param_2 == -1) {
    uVar1 = FUN_00a81330();
    return uVar1;
  }
  if (param_2 == 1) {
    uVar1 = FUN_00a81330();
    return uVar1;
  }
  uVar1 = FUN_00a81330();
  return uVar1;
}

// 00C23BA0  PlayerManagerImplement::vf30  size=79  [class]
void __fastcall PlayerManagerImplement::vf30(int *param_1)

{
  int iVar1;
  int *piVar2;
  int unaff_ESI;
  undefined *puVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x28))(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x28))(0);
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar3 = &DAT_01be9db8;
      (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
      iVar1 = FUN_00dd6d80(puVar3);
      if (iVar1 != 0) {
        piVar2[0x2dd] = unaff_ESI;
      }
    }
  }
  return;
}

// 00C23BF0  PlayerManagerImplement::vfA0  size=70  [class]
bool __fastcall PlayerManagerImplement::vfA0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  (**(code **)(*param_1 + 0x24))(0);
  piVar1 = (int *)FUN_00a7c8a0();
  if (piVar1 != (int *)0x0) {
    puVar3 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar3);
    if (iVar2 != 0) {
      iVar2 = FUN_00b7c970();
      return 0 < iVar2;
    }
  }
  return false;
}

// 00C40850  FUN_00c40850  size=688  [callgraph]
void __fastcall FUN_00c40850(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  float10 fVar6;
  undefined1 local_cc [8];
  int local_c4;
  char *local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined1 *local_b4;
  undefined4 local_b0;
  undefined4 local_a0;
  undefined4 local_9c;
  int local_98;
  undefined4 local_94;
  undefined1 local_90 [140];
  
  FUN_0040b190();
  if (*(int *)(param_1[0x3e] + 4) != 0) {
    *(undefined4 *)(param_1[0x3e] + 8) = 0;
  }
  if (DAT_01bea030 == 2) {
    return;
  }
  FUN_009c7e10(param_1 + 0x38,DAT_01bea030);
  if ((DAT_01bea030 == 6) || (DAT_01bea030 == 7)) {
    param_1[0x37] = 0;
  }
  else {
    param_1[0x37] = DAT_01b7589c;
  }
  if ((DAT_01bea030 == 6) || (DAT_01bea030 == 7)) {
    param_1[0x35] = 0;
    param_1[0x36] = 0;
    param_1[0x3d] = 1;
  }
  else {
    iVar2 = FUN_009c4760(&DAT_01b6efe0);
    param_1[0x35] = iVar2;
    iVar2 = FUN_009c47a0(&DAT_01b6efe0);
    param_1[0x36] = iVar2;
  }
  cObjReadManager::getDataAtSet(param_1 + 0x30,0x1000e,0);
  FUN_00a7ca40();
  FUN_00de3530();
  if ((DAT_01bea02c == 0) && (DAT_01bea028 == DAT_01bea024)) {
    uVar1 = *DAT_01bea01c;
  }
  else {
    uVar1 = 0xffffffff;
  }
  local_bc = 0x10010;
  local_b8 = 0x10010;
  local_b4 = local_90;
  local_c0 = "Pl0010";
  local_b0 = 0;
  cObjReadManager::getDataAtSet(local_cc,uVar1,0);
  uVar1 = FUN_00de44b0(&DAT_01657e1c,0);
  local_a0 = cModelDataManager::EntryModelData(uVar1,0);
  local_94 = FUN_00de4550("_param.bxm",0);
  iVar2 = FUN_00de44b0(&DAT_0164518c,0);
  uVar1 = FUN_00de44b0(&DAT_01645174,0);
  local_98 = FUN_00de44b0(&DAT_01645170,0);
  local_9c = uVar1;
  if (iVar2 != 0) {
    local_9c = 0;
    local_98 = iVar2;
  }
  local_c4 = FUN_00a81b80(&local_c0);
  if ((local_c4 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
    Behavior::setupCloth(local_cc);
  }
  puVar5 = &DAT_018a9770;
  piVar4 = param_1 + 3;
  do {
    FUN_00c13490(piVar4,*puVar5);
    puVar5 = puVar5 + 1;
    piVar4 = piVar4 + 7;
  } while ((int)puVar5 < 0x18a9784);
  iVar2 = *(int *)param_1[0x3e];
  uVar1 = FUN_00a7c7f0();
  (**(code **)(iVar2 + 8))(uVar1);
  (**(code **)(*param_1 + 0x40))();
  iVar2 = (**(code **)(*param_1 + 0x28))(0);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00a7c8a0();
  }
  if (param_1[0x3d] == 0) {
    if (iVar2 == 0) goto LAB_00c40ae6;
    FUN_00b7c9c0(param_1[0x33]);
    FUN_00bc3100(param_1[0x34]);
  }
  if (iVar2 != 0) {
    iVar3 = FUN_00b7c970();
    param_1[0x33] = iVar3;
    fVar6 = (float10)FUN_00bda020();
    param_1[0x34] = (int)(float)fVar6;
  }
LAB_00c40ae6:
  if (DAT_01bea030 == 7) {
    *(undefined4 *)(iVar2 + 0x1400) = 1;
  }
  return;
}

// 00C40B00  FUN_00c40b00  size=664  [callgraph]
void __fastcall FUN_00c40b00(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  float10 fVar5;
  undefined1 local_cc [8];
  int local_c4;
  char *local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined1 *local_b4;
  undefined4 local_b0;
  undefined4 local_a0;
  undefined4 local_9c;
  int local_98;
  undefined4 local_94;
  undefined1 local_90 [140];
  
  FUN_0040b190();
  if (*(int *)(param_1[0x3e] + 4) != 0) {
    *(undefined4 *)(param_1[0x3e] + 8) = 0;
  }
  if (DAT_01bea030 != 2) {
    FUN_009c7e10(param_1 + 0x38,DAT_01bea030);
    if ((DAT_01bea030 == 6) || (DAT_01bea030 == 7)) {
      param_1[0x37] = 0;
    }
    else {
      param_1[0x37] = DAT_01b7589c;
    }
    if ((DAT_01bea030 == 6) || (DAT_01bea030 == 7)) {
      param_1[0x35] = 0;
      param_1[0x36] = 0;
      param_1[0x3d] = 1;
    }
    else {
      iVar2 = FUN_0094e9b0(0x3855170f);
      param_1[0x35] = iVar2;
      iVar2 = FUN_0094e9b0(0x4cbfda41);
      param_1[0x36] = iVar2;
    }
    cObjReadManager::getDataAtSet(param_1 + 0x30,0x11400,0);
    FUN_00a7ca40();
    FUN_00de3530();
    if ((DAT_01bea02c == 0) && (DAT_01bea028 == DAT_01bea024)) {
      uVar1 = *DAT_01bea01c;
    }
    else {
      uVar1 = 0xffffffff;
    }
    local_b4 = local_90;
    local_c0 = "Pl1400";
    local_bc = 0x11400;
    local_b8 = 0x11400;
    local_b0 = 0;
    cObjReadManager::getDataAtSet(local_cc,uVar1,0);
    uVar1 = FUN_00de44b0(&DAT_01657e1c,0);
    local_a0 = cModelDataManager::EntryModelData(uVar1,0);
    local_94 = FUN_00de4550("_param.bxm",0);
    iVar2 = FUN_00de44b0(&DAT_0164518c,0);
    uVar1 = FUN_00de44b0(&DAT_01645174,0);
    local_98 = FUN_00de44b0(&DAT_01645170,0);
    local_9c = uVar1;
    if (iVar2 != 0) {
      local_9c = 0;
      local_98 = iVar2;
    }
    local_c4 = FUN_00a81b80(&local_c0);
    if ((local_c4 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      Behavior::setupCloth(local_cc);
    }
    puVar4 = &DAT_018a9770;
    piVar3 = param_1 + 3;
    do {
      FUN_00c13490(piVar3,*puVar4);
      puVar4 = puVar4 + 1;
      piVar3 = piVar3 + 7;
    } while ((int)puVar4 < 0x18a9784);
    iVar2 = *(int *)param_1[0x3e];
    uVar1 = FUN_00a7c7f0();
    (**(code **)(iVar2 + 8))(uVar1);
    (**(code **)(*param_1 + 0x40))();
    iVar2 = (**(code **)(*param_1 + 0x28))(0);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00a7c8a0();
    }
    if (param_1[0x3d] == 0) {
      if (iVar2 == 0) {
        return;
      }
      FUN_00b7c9c0(param_1[0x33]);
      FUN_00bc3100(param_1[0x34]);
    }
    if (iVar2 != 0) {
      iVar2 = FUN_00b7c970();
      param_1[0x33] = iVar2;
      fVar5 = (float10)FUN_00bda020();
      param_1[0x34] = (int)(float)fVar5;
    }
  }
  return;
}

// 00C40DA0  FUN_00c40da0  size=664  [callgraph]
void __fastcall FUN_00c40da0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  float10 fVar5;
  undefined1 local_cc [8];
  int local_c4;
  char *local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined1 *local_b4;
  undefined4 local_b0;
  undefined4 local_a0;
  undefined4 local_9c;
  int local_98;
  undefined4 local_94;
  undefined1 local_90 [140];
  
  FUN_0040b190();
  if (*(int *)(param_1[0x3e] + 4) != 0) {
    *(undefined4 *)(param_1[0x3e] + 8) = 0;
  }
  if (DAT_01bea030 != 2) {
    FUN_009c7e10(param_1 + 0x38,DAT_01bea030);
    if ((DAT_01bea030 == 6) || (DAT_01bea030 == 7)) {
      param_1[0x37] = 0;
    }
    else {
      param_1[0x37] = DAT_01b7589c;
    }
    if ((DAT_01bea030 == 6) || (DAT_01bea030 == 7)) {
      param_1[0x35] = 0;
      param_1[0x36] = 0;
      param_1[0x3d] = 1;
    }
    else {
      iVar2 = FUN_0094e9b0(0x3855170f);
      param_1[0x35] = iVar2;
      iVar2 = FUN_0094e9b0(0x4cbfda41);
      param_1[0x36] = iVar2;
    }
    cObjReadManager::getDataAtSet(param_1 + 0x30,0x11500,0);
    FUN_00a7ca40();
    FUN_00de3530();
    if ((DAT_01bea02c == 0) && (DAT_01bea028 == DAT_01bea024)) {
      uVar1 = *DAT_01bea01c;
    }
    else {
      uVar1 = 0xffffffff;
    }
    local_b4 = local_90;
    local_c0 = "Pl1500";
    local_bc = 0x11500;
    local_b8 = 0x11500;
    local_b0 = 0;
    cObjReadManager::getDataAtSet(local_cc,uVar1,0);
    uVar1 = FUN_00de44b0(&DAT_01657e1c,0);
    local_a0 = cModelDataManager::EntryModelData(uVar1,0);
    local_94 = FUN_00de4550("_param.bxm",0);
    iVar2 = FUN_00de44b0(&DAT_0164518c,0);
    uVar1 = FUN_00de44b0(&DAT_01645174,0);
    local_98 = FUN_00de44b0(&DAT_01645170,0);
    local_9c = uVar1;
    if (iVar2 != 0) {
      local_9c = 0;
      local_98 = iVar2;
    }
    local_c4 = FUN_00a81b80(&local_c0);
    if ((local_c4 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      Behavior::setupCloth(local_cc);
    }
    puVar4 = &DAT_018a9770;
    piVar3 = param_1 + 3;
    do {
      FUN_00c13490(piVar3,*puVar4);
      puVar4 = puVar4 + 1;
      piVar3 = piVar3 + 7;
    } while ((int)puVar4 < 0x18a9784);
    iVar2 = *(int *)param_1[0x3e];
    uVar1 = FUN_00a7c7f0();
    (**(code **)(iVar2 + 8))(uVar1);
    (**(code **)(*param_1 + 0x40))();
    iVar2 = (**(code **)(*param_1 + 0x28))(0);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00a7c8a0();
    }
    if (param_1[0x3d] == 0) {
      if (iVar2 == 0) {
        return;
      }
      FUN_00b7c9c0(param_1[0x33]);
      FUN_00bc3100(param_1[0x34]);
    }
    if (iVar2 != 0) {
      iVar2 = FUN_00b7c970();
      param_1[0x33] = iVar2;
      fVar5 = (float10)FUN_00bda020();
      param_1[0x34] = (int)(float)fVar5;
    }
  }
  return;
}

// 00C41040  PlayerManagerImplement::vf08  size=113  [class]
void __fastcall PlayerManagerImplement::vf08(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0xf8) + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xf8) + 8) = 0;
  }
  if (DAT_01bea030 != 2) {
    FUN_009c7e10(param_1 + 0xe0,DAT_01bea030);
    if (DAT_01bea030 == 8) {
      FUN_00c40b00();
    }
    if (DAT_01bea030 == 9) {
      FUN_00c40da0();
    }
    if (*(int *)(*(int *)(param_1 + 0xf8) + 8) == 0) {
      FUN_00c40850();
    }
    *(undefined4 *)(param_1 + 0xf4) = 0;
  }
  return;
}

// 00C410C0  PlayerManagerImplement::vf0C  size=322  [class]
void __fastcall PlayerManagerImplement::vf0C(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *unaff_EBX;
  int iVar6;
  float10 fVar7;
  undefined *puVar8;
  
  iVar4 = (**(code **)(*param_1 + 0x28))(0);
  if ((DAT_01be8f14 == 0) && (iVar4 != 0)) {
    piVar5 = (int *)FUN_00a7c8a0();
    if (piVar5 != (int *)0x0) {
      puVar8 = &DAT_01be9db8;
      (**(code **)(*piVar5 + 4))(&DAT_01be9db8);
      iVar4 = FUN_00dd6d80(puVar8);
      if (iVar4 != 0) {
        iVar4 = FUN_00b7c970();
        param_1[0x33] = iVar4;
        fVar7 = (float10)FUN_00bda020();
        param_1[0x34] = (int)(float)fVar7;
        DAT_01b7589c = (undefined *)param_1[0x37];
        if (0x98967e < (int)DAT_01b7589c) {
          DAT_01b7589c = &DAT_0098967f;
        }
      }
    }
    FUN_009c69c0(param_1 + 0x38,DAT_01bea030);
  }
  iVar4 = *(int *)(param_1[0x3e] + 4);
  if (iVar4 != iVar4 + *(int *)(param_1[0x3e] + 8) * 4) {
    do {
      FUN_00a81330();
      FUN_00a805f0();
      iVar1 = param_1[0x3e];
      uVar2 = *(uint *)(iVar1 + 8);
      iVar3 = *(int *)(iVar1 + 4);
      iVar6 = iVar3 + uVar2 * 4;
      if ((((iVar4 != iVar6) && (iVar3 != 0)) && (uVar2 != 0)) &&
         ((uint)(iVar4 - iVar3 >> 2) < uVar2)) {
        iVar3 = iVar4;
        while (iVar3 != iVar6 + -4) {
          iVar3 = iVar3 + 4;
          FUN_00a7c960(iVar3);
          param_1 = unaff_EBX;
        }
        *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -1;
        iVar6 = iVar4;
      }
      iVar4 = iVar6;
    } while (iVar6 != *(int *)(param_1[0x3e] + 4) + *(int *)(param_1[0x3e] + 8) * 4);
  }
  iVar4 = 5;
  do {
    FUN_00f972f0();
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
                    /* WARNING: Could not recover jumptable at 0x00c41200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x44))();
  return;
}

// 00C41210  PlayerManagerImplement::vf40  size=104  [class]
void PlayerManagerImplement::vf40(void)

{
  undefined4 uVar1;
  undefined1 local_90 [80];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  FUN_0040b190();
  local_40 = 0;
  local_3c = 0xc3960000;
  local_38 = 0;
  FUN_00a7c950();
  FUN_00a82090("Balkan",0x4b000,local_90);
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  return;
}

// 00C4CDF0  PlayerManagerImplement::vf20  size=7  [class]
int __fastcall PlayerManagerImplement::vf20(int param_1)

{
  return param_1 + 0xb0;
}

// 00C4CE00  PlayerManagerImplement::vf2C  size=7  [class]
int __fastcall PlayerManagerImplement::vf2C(int param_1)

{
  return param_1 + 0xc0;
}

// 00C4CE10  PlayerManagerImplement::vf14  size=10  [class]
void __thiscall PlayerManagerImplement::vf14(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}

// 00C4CE20  PlayerManagerImplement::vf18  size=4  [class]
undefined4 __fastcall PlayerManagerImplement::vf18(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// 00C4CE30  PlayerManagerImplement::vf1C  size=121  [class]
void __thiscall
PlayerManagerImplement::vf1C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(param_1 + 0xa0) < 1) {
    *(undefined4 *)(param_1 + 0xa0) = param_4;
  }
  if (*(int *)(param_1 + 0x9c) < 1) {
    *(undefined4 *)(param_1 + 0x9c) = param_3;
  }
  *(undefined4 *)(param_1 + 0x98) = param_2;
  if (*(int *)(param_1 + 0xa0) < 1) {
    FUN_00e03a70(0,param_2);
    FUN_00e03a70(1,param_2);
    FUN_00e03a70(2,param_2);
    return;
  }
  return;
}

// 00C4CF00  PlayerManagerImplement::vf00  size=30  [class]
undefined4 __thiscall PlayerManagerImplement::vf00(undefined4 param_1,byte param_2)

{
  PlayerManager::PlayerManager();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

