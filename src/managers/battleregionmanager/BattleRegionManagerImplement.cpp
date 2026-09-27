// src/managers/battleregionmanager/BattleRegionManagerImplement.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00401100..004024C0, 7 functions

#include "mgrr.h"
#include "BattleRegionManagerImplement.h"

// 00401100  BattleRegionManagerImplement::vf10  size=1  [class]
void BattleRegionManagerImplement::vf10(void)

{
  return;
}

// 00401470  BattleRegionManagerImplement::vf0C  size=113  [class]
bool BattleRegionManagerImplement::vf0C(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 local_c [12];
  
  FUN_004011c0(local_c,"_BA%03d",param_1);
  piVar1 = (int *)FUN_00c14bb0();
  iVar2 = (**(code **)(*piVar1 + 0x50))(local_c);
  if (iVar2 != 0) {
    return true;
  }
  FUN_004011c0(&stack0xfffffff0,"_ba%03d",param_1);
  piVar1 = (int *)FUN_00c14bb0();
  iVar2 = (**(code **)(*piVar1 + 0x50))(&stack0xfffffff0);
  return iVar2 != 0;
}

// 00401980  BattleRegionManagerImplement::vf00  size=268  [class]
void __thiscall BattleRegionManagerImplement::vf00(int param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 local_c [12];
  
  iVar4 = FUN_00c14bb0();
  if ((iVar4 != 0) &&
     (puVar7 = *(undefined4 **)(*(int *)(param_1 + 4) + 4),
     puVar7 != puVar7 + *(int *)(*(int *)(param_1 + 4) + 8) * 2)) {
    do {
      fVar1 = (float)puVar7[1];
      puVar7[1] = fVar1 - param_2;
      if (0.0 < fVar1 - param_2) {
        puVar8 = puVar7 + 2;
      }
      else {
        FUN_004011c0(local_c,"_BA%03d",*puVar7);
        piVar5 = (int *)FUN_00c14bb0();
        (**(code **)(*piVar5 + 0x44))(0,local_c);
        FUN_004011c0(&stack0xffffffec,"_ba%03d",*puVar7);
        piVar5 = (int *)FUN_00c14bb0();
        (**(code **)(*piVar5 + 0x44))(0,&stack0xffffffec);
        iVar4 = *(int *)(param_1 + 4);
        uVar2 = *(uint *)(iVar4 + 8);
        iVar3 = *(int *)(iVar4 + 4);
        puVar8 = (undefined4 *)(iVar3 + uVar2 * 8);
        if ((((puVar7 != puVar8) && (iVar3 != 0)) && (uVar2 != 0)) &&
           ((uint)((int)puVar7 - iVar3 >> 3) < uVar2)) {
          for (puVar6 = puVar7; puVar6 != puVar8 + -2; puVar6 = puVar6 + 2) {
            *puVar6 = puVar6[2];
            puVar6[1] = puVar6[3];
          }
          *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + -1;
          puVar8 = puVar7;
        }
      }
      puVar7 = puVar8;
    } while (puVar8 != (undefined4 *)
                       (*(int *)(*(int *)(param_1 + 4) + 4) +
                       *(int *)(*(int *)(param_1 + 4) + 8) * 8));
  }
  return;
}

// 00401A90  FUN_00401a90  size=179  [callgraph]
void __fastcall FUN_00401a90(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined1 local_c [12];
  
  iVar1 = FUN_00c14bb0();
  if ((iVar1 != 0) &&
     (puVar3 = *(undefined4 **)(*(int *)(param_1 + 4) + 4),
     puVar3 != puVar3 + *(int *)(*(int *)(param_1 + 4) + 8) * 2)) {
    do {
      FUN_004011c0(local_c,"_BA%03d",*puVar3);
      piVar2 = (int *)FUN_00c14bb0();
      (**(code **)(*piVar2 + 0x44))(0,local_c);
      FUN_004011c0(&stack0xffffffec,"_ba%03d",*puVar3);
      piVar2 = (int *)FUN_00c14bb0();
      (**(code **)(*piVar2 + 0x44))(0,&stack0xffffffec);
      puVar3 = puVar3 + 2;
    } while (puVar3 != (undefined4 *)
                       (*(int *)(*(int *)(param_1 + 4) + 4) +
                       *(int *)(*(int *)(param_1 + 4) + 8) * 8));
  }
  if (*(int *)(*(int *)(param_1 + 4) + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 8) = 0;
  }
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 4))();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

// 00401DE0  BattleRegionManagerImplement::vf04  size=195  [class]
void __thiscall BattleRegionManagerImplement::vf04(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_138 [4];
  undefined1 auStack_134 [4];
  undefined1 auStack_130 [300];
  
  iVar1 = (**(code **)(*param_1 + 0xc))(param_2);
  if (iVar1 == 0) {
    FUN_004011c0(auStack_130,"_BA%03d",param_2);
    piVar2 = (int *)FUN_00c14bb0();
    (**(code **)(*piVar2 + 0x44))(1,auStack_130);
    FUN_004011c0(auStack_138,"_ba%03d",param_2);
    piVar2 = (int *)FUN_00c14bb0();
    (**(code **)(*piVar2 + 0x44))(1,auStack_138);
    iVar1 = param_2 * 5 + 0x5f;
    FUN_00e01d00(iVar1);
    FUN_00dffb30(param_1 + 4);
    uVar3 = FUN_00a4c980();
    piVar2 = (int *)FUN_00a6dd90();
    uVar3 = (**(code **)(*piVar2 + 0x9c))(uVar3,iVar1,auStack_134);
    FUN_00e01f10(uVar3);
  }
  return;
}

// 00401EB0  BattleRegionManagerImplement::vf08  size=178  [class]
void __thiscall BattleRegionManagerImplement::vf08(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iStack_134;
  int iStack_130;
  int *local_12c;
  undefined1 auStack_124 [288];
  
  local_12c = param_1;
  iVar1 = (**(code **)(*param_1 + 0xc))(param_2);
  if (iVar1 != 0) {
    FUN_00eaa5b0(param_2 * 5 + 0x5f,0,0);
    iVar1 = param_2 * 5 + 0x60;
    FUN_00e01d00(iVar1);
    FUN_00dffb30(param_1 + 4);
    uVar2 = FUN_00a4c980();
    piVar3 = (int *)FUN_00a6dd90();
    uVar2 = (**(code **)(*piVar3 + 0x9c))(uVar2,iVar1,auStack_124);
    FUN_00e01f10(uVar2);
    local_12c = (int *)0x3f99999a;
    iStack_130 = param_2;
    (**(code **)(**(int **)(iStack_134 + 4) + 8))(&iStack_130);
  }
  return;
}

// 004024C0  BattleRegionManagerImplement::vf14  size=50  [class]
undefined4 * __thiscall BattleRegionManagerImplement::vf14(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  FUN_00401a90();
  cEspControler::~cEspControler();
  *param_1 = BattleRegionManager::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

